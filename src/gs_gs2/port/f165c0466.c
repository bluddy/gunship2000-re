/* GS.GS2 165c:0466 - world_to_screen_project
 * World-to-screen coordinate projection with trig lookup tables
 * Called from render_loop for each visible entity
 */
extern void _far FUN_10bf_02c0(void);
extern int _far FUN_239c_005c(unsigned short, unsigned short, unsigned short);
void _far world_to_screen_project(
    unsigned int param_1,      // entity X?
    unsigned int param_2,      // entity Y?
    int *param_3,              // output screen X (2 words)
    int *param_4,              // output screen Y (2 words)
    int param_5                // flag: invert?
)
{
    FUN_10bf_02c0();
    unsigned char uVar5 = *(unsigned char *)(param_1 + param_2 * -0x40 + 0xfc0) & 0x3f;
    
    // Check if entity type has bit 4 clear (not hidden?)
    if ((*(unsigned char *)(uVar5 + (int)*(unsigned long *)0xb854) & 4) == 0) {
        if ((param_5 == 0) && (FUN_239c_0086(2) != 0)) {
            int iVar2 = FUN_165c_0418(param_1, param_2, 1);
            if (iVar2 != 0) {
                param_5 = 1;
            }
        }
        if (param_5 != 0) {
            uVar5 = ~uVar5;
        }
        
        // Iterate through entity table
        for (int iVar10 = 0; iVar10 < *(int *)0xb8c4; iVar10++) {
            unsigned short uVar7 = (unsigned short)((unsigned long)*(unsigned long *)0xb854 >> 0x10);
            int iVar6 = (int)*(unsigned long *)0xb854;
            
            if ((int)*(char *)(iVar6 + iVar10 * 0x11 + 0x40) == (int)uVar5) {
                iVar6 = iVar10 * 0x11 + iVar6 + iVar2 * 8;
                unsigned short uVar1 = *(unsigned short *)(iVar6 + 0x41);
                
                // Project X coordinate
                unsigned int uVar3 = FUN_239c_005c(uVar1, *(unsigned short *)(iVar6 + 0x45), uVar1);
                unsigned char uVar5_x = param_1 & 0xff;
                unsigned int uVar4 = uVar3 + uVar5_x * 0x2000;
                *param_3 = uVar4 + 0x1000;
                param_3[1] = ((int)uVar3 >> 0xf) +
                    ((((((int)(char)(param_1 >> 8) << 1 | (unsigned int)((char)param_1 < 0)) << 1 | 
                    (unsigned int)((int)(uVar5_x << 9) < 0)) << 1 | 
                    (unsigned int)((int)(uVar5_x << 10) < 0)) << 1 | 
                    (unsigned int)((int)(uVar5_x << 0xb) < 0)) << 1 | 
                    (unsigned int)((int)(uVar5_x << 0xc) < 0)) +
                    (unsigned int)(0xefff < uVar4) + (unsigned int)((uVar3 + uVar5_x * 0x2000) > 0xffff);
                
                // Project Y coordinate
                uVar3 = FUN_239c_005c(0x239c, 0x6af2);
                uVar5_x = param_2 & 0xff;
                uVar4 = uVar3 + uVar5_x * 0x2000;
                *param_4 = uVar4 + 0x1000;
                param_4[1] = ((int)uVar3 >> 0xf) +
                    ((((((int)(char)(param_2 >> 8) << 1 | (unsigned int)((char)param_2 < 0)) << 1 | 
                    (unsigned int)((int)(uVar5_x << 9) < 0)) << 1 | 
                    (unsigned int)((int)(uVar5_x << 10) < 0)) << 1 | 
                    (unsigned int)((int)(uVar5_x << 0xb) < 0)) << 1 | 
                    (unsigned int)((int)(uVar5_x << 0xc) < 0)) +
                    (unsigned int)(0xefff < uVar4) + (unsigned int)((uVar3 + uVar5_x * 0x2000) > 0xffff);
                return;
            }
        }
    }
    // Fallback projection
    FUN_165c_05d4(param_1, param_2, param_3, param_4, param_5);
    return;
}