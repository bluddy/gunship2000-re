#!/usr/bin/env python3
"""
Update registry/GS_GS2.yaml with newly identified function names.
"""

import yaml

REGISTRY_PATH = r"C:\Users\yotam\projects\gunship_2000\registry\GS_GS2.yaml"

# Newly identified functions: auto_name -> {name, certainty, status, description}
NEW_FUNCTIONS = {
    "FUN_10bf_0518": {
        "name": "error_lookup",
        "certainty": "high",
        "status": "identified",
        "description": "Searches error table at 0x7288 for error code; returns pointer to error string"
    },
    "FUN_10bf_1bcc": {
        "name": "serial_port_open",
        "certainty": "high",
        "status": "identified",
        "description": "Opens serial/UART device via DOS INT 21h; handles buffer allocation and device config"
    },
    "FUN_10bf_1ff3": {
        "name": "thunk_memory_alloc",
        "certainty": "high",
        "status": "identified",
        "description": "Memory allocation thunk for overlay system; calls INT 21h AH=48h"
    },
    "thunk_FUN_10bf_1ff3": {
        "name": "thunk_FUN_10bf_1ff3",
        "certainty": "high",
        "status": "identified",
        "description": "Thunk wrapper for memory allocation thunk"
    },
    "FUN_10bf_21d6": {
        "name": "strcpy_word",
        "certainty": "high",
        "status": "identified",
        "description": "Word-aligned strcpy with byte tail handling; handles unaligned start"
    },
    "FUN_10bf_2234": {
        "name": "strlen",
        "certainty": "high",
        "status": "identified",
        "description": "Returns length of null-terminated string"
    },
    "FUN_10bf_2250": {
        "name": "strncpy_word",
        "certainty": "high",
        "status": "identified",
        "description": "Word-aligned bounded string copy with zero-padding"
    },
    "FUN_10bf_2aae": {
        "name": "strcmp_ci",
        "certainty": "high",
        "status": "identified",
        "description": "Case-insensitive string comparison (ASCII)"
    },
    "FUN_10bf_2c74": {
        "name": "itoa",
        "certainty": "high",
        "status": "identified",
        "description": "32-bit signed integer to string conversion in arbitrary base (2-36)"
    },
    "FUN_10bf_2e03": {
        "name": "dos_int21h_call",
        "certainty": "high",
        "status": "identified",
        "description": "DOS INT 21h wrapper; stores AX result on carry clear, calls post-processor"
    },
    "FUN_10bf_3094": {
        "name": "fixed_point_mul_assign",
        "certainty": "high",
        "status": "identified",
        "description": "In-place 32-bit fixed-point multiply: *ptr *= (low, high)"
    },
    "FUN_10bf_32d7": {
        "name": "convert_to_screen_coords",
        "certainty": "medium",
        "status": "identified",
        "description": "Converts 32-bit fixed-point to screen coordinates; flag-based normalization"
    },
    "FUN_10bf_34d3": {
        "name": "float_denormal_adjust",
        "certainty": "medium",
        "status": "identified",
        "description": "Handles floating-point denormal values in custom 32-bit format"
    },
    "FUN_10bf_3508": {
        "name": "float_to_fixed2",
        "certainty": "medium",
        "status": "identified",
        "description": "Converts custom floating-point format to 32-bit fixed-point"
    },
    "FUN_10bf_4bb8": {
        "name": "entity_buffer_add",
        "certainty": "medium",
        "status": "identified",
        "description": "Adds entity data to circular buffer at 0x6ea8; handles overflow via error routine"
    },
    "FUN_10bf_4f50": {
        "name": "call_indirect",
        "certainty": "medium",
        "status": "identified",
        "description": "Indirect call through function pointer table at BX+0x7082; updates linked list"
    },
    "FUN_10bf_5035": {
        "name": "entity_dispatch",
        "certainty": "medium",
        "status": "identified",
        "description": "Dispatches entity processing based on type; calls type-specific handlers"
    },
    "FUN_10bf_523e": {
        "name": "buffer_adjust",
        "certainty": "medium",
        "status": "identified",
        "description": "Adjusts buffer pointers and metadata for entity system"
    },
    "FUN_10bf_52b4": {
        "name": "entity_data_check",
        "certainty": "low",
        "status": "identified",
        "description": "Entity data validation stub; returns 0"
    },
    "FUN_10bf_5726": {
        "name": "format_number_string",
        "certainty": "medium",
        "status": "identified",
        "description": "Formats fixed-point number to string with decimal point and precision"
    },
    "thunk_EXT_FUN_0000_0000": {
        "name": "thunk_EXT_FUN_0000_0000",
        "certainty": "high",
        "status": "identified",
        "description": "External call thunk for overlay system (segment 0:0 sentinel)"
    },
}

def main():
    with open(REGISTRY_PATH, 'r') as f:
        data = yaml.safe_load(f)
    
    # Update function entries
    updated = 0
    for func in data.get('functions', []):
        auto_name = func.get('auto_name', '')
        if auto_name in NEW_FUNCTIONS:
            info = NEW_FUNCTIONS[auto_name]
            func['name'] = info['name']
            func['certainty'] = info['certainty']
            func['status'] = info['status']
            func['description'] = info['description']
            updated += 1
            print(f"Updated: {auto_name} -> {info['name']} ({info['certainty']})")
    
    print(f"\nTotal updated: {updated}")
    
    with open(REGISTRY_PATH, 'w') as f:
        yaml.dump(data, f, default_flow_style=False, sort_keys=False, allow_unicode=True)
    
    print("Registry updated successfully.")

if __name__ == "__main__":
    main()