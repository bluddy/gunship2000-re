/* GS.GS2 rec1 (mission editor) entry point 0
 * Thunk target: 1ABF:0062 (file 140498)
 * Ghidra address: 2000:a8dc (biased)
 * Real address: 1ABF:0062
 * 
 * Signature: void __cdecl16far editor_entry_0(int mode)
 * Called via thunk idx 0 from 17D1:0E42
 * Sets up editor mode and calls 1DA4:2B34
 */

#include <stdint.h>

// Forward declaration of the far function at 1DA4:2B34
extern void __cdecl16far editor_init_subsystem(int a, int b, int c, int d);

// Global variables (in DGROUP)
extern uint8_t byte_e28f;  // DGROUP:0xE28F
extern uint16_t word_e28f; // DGROUP:0xE28F (or nearby)

void __cdecl16far editor_entry_0(int mode)
{
    // Prologue: CRT stack check (called twice - once with 0, once with 8)
    _chkstk(0);
    _chkstk(8);
    
    int local_f8 = mode;  // [bp-8] = mode
    int local_f6, local_f4, local_f2;  // [bp-6], [bp-4], [bp-2]
    
    // Mode validation and normalization
    if (mode == 0x2D) {           // 0x2D = 45 (ASCII '-')
        mode = 0x0F;              // Map to 15
    } else if (mode > 0x2D) {     // > 45
        goto invalid_mode;
    } else {
        mode -= 0x1E;             // Subtract 30
        if (mode == 0) {          // Was 0x1E (30)
            mode = 0x0C;          // Map to 12
        } else {
            mode -= 2;            // Subtract 2
            if (mode == 0) {      // Was 0x20 (32)
                mode = 0x0D;      // Map to 13
            } else {
                mode -= 6;        // Subtract 6
                if (mode == 0) {  // Was 0x26 (38)
                    mode = 0x0E;  // Map to 14
                } else {
                    goto invalid_mode;
                }
            }
        }
    }
    
invalid_mode:
    // Set global flag
    byte_e28f = 0xFF;
    
    // Call far function at 1DA4:2B34 with 4 parameters
    // Stack: push mode, push &local_f6, push &local_f4, push &local_f2
    editor_init_subsystem(mode, &local_f6, &local_f4, &local_f2);
    
    // Set another flag
    byte_e28f = 1;
    
    return;
}

// CRT stack check function
extern void __cdecl16near _chkstk(int bytes);