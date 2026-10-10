#!/usr/bin/env python3
import re
import sys

# --- Regex patterns (from mzretools util.py) ---
class Regex:
    NAME = '[_a-zA-Z0-9]+'
    DATA = 'db|dw|dd'
    NUMVAL = '[x0-9a-fA-F]+h?'
    STRVAL = "'.+'"
    CTYPE = '(?:unsigned )?(?:char|int|void|__int32)'
    SPACES = r'\s+'
    SPACEOPT = r'\s*'
    ALIGN = re.compile('^align ([0-9]+)')
    JMPSLOT = re.compile('^jmp.*(slot|misc)_')
    INSTR_AX = re.compile('^(cmp|add|and|sub|sbb) ax, ([_a-fA-F0-9]{1,5}h?)$')
    PROC = re.compile(f'^({NAME}){SPACES}proc{SPACES}(near|far)')
    ENDP = re.compile(f'^({NAME}){SPACES}endp')
    VAR = re.compile(f'^({NAME}){SPACES}({DATA}){SPACES}(.*)')
    DATA = re.compile(f'^({DATA}){SPACES}(.*)')
    DUPVAL = re.compile(f'({NUMVAL}){SPACES}dup' + r'\(\s*' + f'({NUMVAL}' + r'|\?)\s*\)')
    OFFSET = re.compile(f'^offset{SPACES}({NAME})')
    SEGMENT = re.compile(f'^seg{SPACES}({NAME})')
    NUMBER = re.compile(f'^{NUMVAL}$')
    FARJMP = re.compile(f'jmp{SPACES}(?:far{SPACES})?(?:ptr{SPACES})?({NAME})')
    PROTO = re.compile(f'^(?:{CTYPE})' + r'.*' + f' ({NAME})' + r'\(.*\)')
    COLLAPSED = re.compile(r'\[' + f'({NUMVAL}) BYTES: COLLAPSED FUNCTION ({NAME}).*')
    SECRET = re.compile(f'^lst2ch:(.*)')
    STRUCT = re.compile(f'^({NAME}){SPACES}struc' + r'\s*;\s*\(\s*' +f'sizeof=({NUMVAL})')
    STRUCTDATA = re.compile(f'<(((?:{NUMVAL}|{STRVAL}),?{SPACEOPT})+)>')
    STRUCTINIT = re.compile(f'({NAME}){SPACES}' + STRUCTDATA.pattern)
    STRUCTVAR = re.compile(f"^({NAME}){SPACES}" + STRUCTINIT.pattern)
    STRUCTDUP = re.compile(f"({NAME}){SPACES}({NUMVAL}){SPACES}" + r'dup\(' + STRUCTDATA.pattern + r'\)')
    STRUCTARR = re.compile(f"^({NAME}){SPACES}" + STRUCTDUP.pattern)
    STRUCTBSSVAR = re.compile(f'^({NAME}){SPACES}({NAME}){SPACES}' + r'<\?>')
    STRUCTBSSDUP = re.compile(f'({NAME}){SPACES}({NUMVAL}){SPACES}dup' + r'\(<\?>\)')
    STRUCTBSSARR = re.compile(f"^({NAME}){SPACES}" + f'({STRUCTBSSDUP.pattern})')
    ENUM = re.compile(f'({NAME}){SPACEOPT}={SPACEOPT}({NUMVAL})')

def parseNum(string):
    if string == '?':
        return None
    string = string.strip()
    if string.endswith('h') or string.endswith('H'):
        return int(string[:-1], 16)
    if string.startswith('0x') or string.startswith('0X'):
        return int(string, 16)
    return int(string)

# --- Output functions (from output.py) ---
DEBUG = False
def setDebug(arg):
    global DEBUG
    DEBUG = arg

def debug(str, end='\n'):
    if DEBUG:
        print(str, end=end)

def info(str):
    print(str)

def warn(str):
    print(f"WARNING: {str}")

def error(str):
    print(f"ERROR: {str}")
    raise RuntimeError

# --- Assembly parsing helpers (for extract_routines.py) ---
PROC_RE = re.compile(r'^([_a-zA-Z0-9]+)\s+proc\s+(near|far)', re.IGNORECASE)
ENDP_RE = re.compile(r'^([_a-zA-Z0-9]+)\s+endp', re.IGNORECASE)
SEGMENT_RE = re.compile(r'^([_a-zA-Z0-9]+)\s+segment', re.IGNORECASE)
ENDSEG_RE = re.compile(r'^([_a-zA-Z0-9]+)\s+ends', re.IGNORECASE)

def start_proc(line):
    m = PROC_RE.match(line.strip())
    return m.group(1) if m else None

def end_proc(line):
    m = ENDP_RE.match(line.strip())
    return m.group(1) if m else None

def start_segment(line):
    m = SEGMENT_RE.match(line.strip())
    return m.group(1) if m else None

def end_segment(line):
    m = ENDSEG_RE.match(line.strip())
    return m.group(1) if m else None

# Known library symbols (from mzretools util)
LIB_SYMBOLS = {
    'memcpy', 'memset', 'malloc', 'free', 'printf', 'scanf',
    'strcpy', 'strlen', 'strcmp', 'strcat',
    'abs', 'labs', 'sqrt', 'sin', 'cos',
    'inp', 'outp', 'inpd', 'outpd',
    '_dos_allocmem', '_dos_freemem', '_dos_setblock',
    'calloc', 'realloc', 'exit', 'atexit',
    '_chkstk', '_acrtused', '_aNchkstk',
}

def symbol_islib(symbol):
    return symbol in LIB_SYMBOLS

def token_ignored(token):
    # ignore tokens that are just underscores or known library symbols
    if token.startswith('__'):
        return True
    if symbol_islib(token):
        return True
    return False

def line_empty(line):
    return not line.strip()

# --- String utilities ---
def joinStrings(strings):
    return ' '.join(strings)

def sizeStr(size):
    if size >= 1024*1024:
        return f"{size/1024/1024:.1f}M"
    if size >= 1024:
        return f"{size/1024:.1f}K"
    return f"{size}B"

def percentStr(pct):
    return f"{pct*100:.1f}%"

def splitData(valstr):
    # Split data initializer string on commas, respecting brackets
    parts = []
    current = ''
    depth = 0
    for c in valstr:
        if c == '<':
            depth += 1
        elif c == '>':
            depth -= 1
        elif c == ',' and depth == 0:
            parts.append(current.strip())
            current = ''
            continue
        current += c
    if current:
        parts.append(current.strip())
    return parts

def tweakComment(comment):
    return comment

def ignoredProc(name):
    return name.startswith('_') or symbol_islib(name)

def enforceType(current, new):
    return new

def joinStrings(strings):
    return ' '.join(strings)

def sizeStr(size):
    if size >= 1024*1024:
        return f"{size/1024/1024:.1f}M"
    if size >= 1024:
        return f"{size/1024:.1f}K"
    return f"{size}B"

def percentStr(pct):
    return f"{pct*100:.1f}%"

# Datatype enum (for lst2ch.py)
class Datatype:
    UNK = 0
    ARRAY = 1
    BSS = 2
    PTR = 3
    CSTR = 4
    NAME = {0: 'UNK', 1: 'ARRAY', 2: 'BSS', 3: 'PTR', 4: 'CSTR'}

# Minimal helper classes for lst2ch.py compatibility
class Variable:
    def __init__(self, name, dtype, size, val, decl='', comment=None, dummy=False):
        self.name = name
        self.dtype = dtype
        self.size = size
        self.val = val
        self.decl = decl
        self.comment = comment or []
        self.dummy = dummy
    def defString(self):
        return f"{self.name} {self.decl}"
    def declString(self):
        return f"extern {self.decl}"
    def itemsz(self):
        return self.size

class Routine:
    def __init__(self, name, seg, off, size, cconv='__cdecl16far'):
        self.name = name
        self.seg = seg
        self.off = off
        self.size = size
        self.cconv = cconv
    def toString(self):
        return f"{self.cconv} {self.name}()"

class Struct:
    def __init__(self, name, size):
        self.name = name
        self.size = size
        self.vars = []
    def addVars(self, vars):
        self.vars = vars
    def getSize(self):
        return self.size

class LstIterator:
    def __init__(self, file):
        self.file = file
    def __iter__(self):
        return iter(self.file)

class StructIterator:
    def __init__(self, file, name, size):
        self.file = file
    def __iter__(self):
        return iter(self.file)

class Config:
    def __init__(self, path):
        import json
        with open(path) as f:
            self.cfg = json.load(f)
        self.__dict__.update(self.cfg)

# Re-export for compatibility
__all__ = [
    'Regex', 'parseNum', 'setDebug', 'debug', 'info', 'error', 'warn',
    'start_proc', 'end_proc', 'start_segment', 'end_segment',
    'symbol_islib', 'token_ignored', 'line_empty',
    'joinStrings', 'sizeStr', 'percentStr', 'splitData', 'tweakComment',
    'ignoredProc', 'enforceType', 'Datatype', 'Variable', 'Routine',
    'Struct', 'LstIterator', 'StructIterator', 'Config',
]