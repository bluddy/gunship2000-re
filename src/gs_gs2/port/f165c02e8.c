/* GS.GS2 165c:02e8 - render_loop
 * Main 3D render loop iterating entities and drawing them
 */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_165c_0276(void);
extern void _far FUN_165c_02a4(unsigned short, unsigned short, unsigned short, unsigned short, int*, int*);
extern void _far FUN_206a_00da(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
extern void _far FUN_165c_0204(void);
extern void _far FUN_1c87_01f6(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);

void _far render_loop(void)
{
    FUN_10bf_02c0();
    
    // Setup initial render state
    FUN_165c_0276();
    
    // Render entity list 1 (up to *0xaca4 entities)
    for (unsigned int uStack_12 = 0; (int)uStack_12 < *(int *)0xaca4; uStack_12++) {
        unsigned short uStack_a = *(unsigned short *)(uStack_12 * 0x20 - 0x5d78);
        unsigned short uStack_c = *(unsigned short *)(uStack_12 * 0x20 - 0x5d7a);
        unsigned int local_e = *(unsigned int *)(uStack_12 * 0x20 - 0x5d7c);
        unsigned short local_10 = *(unsigned short *)(uStack_12 * 0x20 - 0x5d7e);
        
        FUN_165c_02a4(uStack_a, uStack_c, local_10, local_e, &local_10, &local_e);
        FUN_206a_00da(local_10, local_e, 0x691e, 0x10bf, uStack_a);
    }
    
    // Render 3 special entities (missiles? explosions?)
    for (unsigned int uStack_12 = 0; uStack_12 < 3; uStack_12++) {
        if (*(int *)(uStack_12 * 0x3e - 0x46fc) != 0) {
            unsigned short uStack_a = *(unsigned short *)(uStack_12 * 0x3e - 0x46ec);
            unsigned short uStack_c = *(unsigned short *)(uStack_12 * 0x3e - 0x46ee);
            unsigned int local_e = *(unsigned int *)(uStack_12 * 0x3e - 0x46f0);
            unsigned short local_10 = *(unsigned short *)(uStack_12 * 0x3e - 0x46f2);
            
            FUN_165c_02a4(uStack_a, uStack_c, local_10, local_e, &local_10, &local_e);
            FUN_206a_00da(local_10, local_e, 0x696f, 0x10bf, 0x206a);
        }
    }
    
    // Draw HUD / UI elements
    FUN_165c_0204();
    
    // Render 3 UI panels
    for (unsigned int uStack_12 = 0; uStack_12 < 3; uStack_12++) {
        unsigned short uStack_a = *(unsigned short *)(uStack_12 * 0x3e - 0x46ec);
        unsigned short uStack_c = *(unsigned short *)(uStack_12 * 0x3e - 0x46ee);
        
        FUN_1c87_01f6(0, 0x8000, 0x1c87, 0x69ab, uStack_c, uStack_a);
        FUN_1c87_01f6(0, 0x8000, 0x1c87, 0x69be, 0x95, 0x10bf);
    }
    return;
}