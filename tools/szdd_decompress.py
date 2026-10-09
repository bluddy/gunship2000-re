#!/usr/bin/env python3
"""
Microsoft SZDD decompressor.
Based on the SZDD format used by Microsoft in the 1990s.
"""
import sys
import struct

def decompress_szw(in_data):
    """Decompress SZDD format data."""
    if len(in_data) < 18:
        raise ValueError("Input too small")
    
    # Check signature
    if in_data[0:2] != b'SZ':
        raise ValueError("Not an SZDD file (missing SZ signature)")
    
    # Parse header (little-endian)
    # struct: 2 bytes 'SZ', 1 byte method, 1 byte version, 
    #         4 bytes compressed_size, 4 bytes uncompressed_size, 4 bytes crc
    method = in_data[2]
    version = in_data[3]
    comp_size = struct.unpack('<I', in_data[4:8])[0]
    uncomp_size = struct.unpack('<I', in_data[8:12])[0]
    crc = struct.unpack('<I', in_data[12:16])[0]
    
    print(f"Method: 0x{method:02x}, Version: 0x{version:02x}")
    print(f"Compressed size: {comp_size} (0x{comp_size:x})")
    print(f"Uncompressed size: {uncomp_size} (0x{uncomp_size:x})")
    print(f"CRC: 0x{crc:08x}")
    print(f"Actual file size: {len(in_data)}")
    print(f"Header size: 16, Data starts at: 16")
    print(f"Actual data size: {len(in_data) - 16}")
    
    # The compressed data starts at offset 16
    comp_data = in_data[16:]
    print(f"Actual compressed data size: {len(comp_data)}")
    
    # Microsoft SZDD uses a variant of LZ77/LZSS
    # This is a simplified decompressor - the actual algorithm is more complex
    # For now, let's try to use the Windows expand.exe via subprocess
    
    return None

def main():
    if len(sys.argv) < 3:
        print("Usage: python szdd_decompress.py <input.sz> <output.exe>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    
    with open(input_file, 'rb') as f:
        data = f.read()
    
    result = decompress_szw(data)
    if result:
        with open(output_file, 'wb') as f:
            f.write(result)
        print(f"Decompressed to {output_file}")

if __name__ == '__main__':
    main()