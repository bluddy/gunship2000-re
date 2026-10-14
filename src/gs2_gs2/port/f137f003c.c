/* GS2.GS2 137f:003c - check_flight_bounds
 * Core flight bounds checking routine
 * Checks boundaries at 0xea, 0xec, 0xee, 0xf0
 * Uses INT 4 (overflow) for division
 * Register calling convention (AX, CX, BX, DX, DI)
 */
extern void _far bounds_check_flags(int ax, int cx, int bx, int dx);
extern void _far thunk_EXT_FUN_0000_0000(unsigned short);
extern unsigned short * _far check_flight_bounds(unsigned int ax, unsigned int cx,
                                                  unsigned int bx, unsigned int dx,
                                                  unsigned short *di)
{
    unsigned long uVar8;
    int iVar2, iVar3, iVar4, iVar6;
    unsigned int uVar5, uVar7;
    int iVar2_local, iVar4_local, iVar3_local, iVar6_local;
    unsigned int uVar5_local, uVar8_local;
    int iVar2_2, iVar4_2, iVar3_2, iVar6_2;
    unsigned int uVar5_2, uVar8_2;
    int iVar2_3, iVar4_3, iVar3_3, iVar6_3;
    unsigned int uVar5_3, uVar8_3;
    int iVar2_4, iVar4_4, iVar3_4, iVar6_4;
    unsigned int uVar5_4, uVar8_4;
    
    *di = ax;
    di[4] = ax;
    di[1] = cx;
    di[5] = cx;
    di[2] = bx;
    di[6] = bx;
    di[3] = dx;
    di[7] = dx;
    uVar7 = 0xffff;
    
    while (1) {
        bounds_check_flags(ax, cx, bx, dx);
        
        if ((*(unsigned char *)0xfa & 0xc0) == 0) {
            return (unsigned short *)((unsigned long)*(unsigned int *)0xea << 16);
        }
        if ((*(unsigned char *)0xfa & 0x0c) == 0) {
            return (unsigned short *)((unsigned long)*(unsigned int *)0xec << 16);
        }
        if ((*(unsigned char *)0xfa & 0x30) == 0) {
            return (unsigned short *)((unsigned long)uVar7 << 16);
        }
        if ((*(unsigned char *)0xfa & 0x03) == 0) {
            return (unsigned short *)((unsigned long)uVar7 << 16);
        }
        
        *(unsigned char *)0xfa = *(unsigned char *)0xfa ^ 0xff;
        if ((*(unsigned char *)0xfa & 0xaa) != 0) {
            *(unsigned char *)0xfb = *(unsigned char *)0xfb | 1;
            if ((*(unsigned char *)0xfa & 0x88) != 0) {
                uVar7 = *(unsigned int *)0xea;
                if ((*(unsigned char *)0xfa & 0x80) == 0) {
                    uVar7 = *(unsigned int *)0xec;
                }
                *di = uVar7;
                iVar2 = di[7] - di[5];
                uVar8 = ((unsigned long)uVar7 << 16) | (di[6] - di[4]);
                _asm { int 4 }
                if (di[6] < di[4]) {
                    uVar8 = 0;
                }
                iVar6 = (int)(uVar8 >> 16);
                iVar4 = (int)uVar8;
                iVar3 = iVar6 - di[4];
                _asm { int 4 }
                if (iVar6 < di[4]) {
                    iVar3 = 0;
                }
                di[1] = ((long)iVar3 * (long)iVar2) / (long)iVar4 + di[5];
            }
            
            if ((*(unsigned char *)0xfa & 0x22) != 0) {
                uVar5 = *(unsigned int *)0xee;
                if ((*(unsigned char *)0xfa & 0x20) == 0) {
                    uVar5 = *(unsigned int *)0xf0;
                }
                di[1] = uVar5;
                uVar8 = ((unsigned long)uVar5 << 16) | (di[6] - di[4]);
                _asm { int 4 }
                if (di[6] < di[4]) {
                    uVar8 = 0;
                }
                iVar6 = (int)(uVar8 >> 16);
                iVar4 = (int)uVar8;
                iVar3 = iVar6 - di[4];
                _asm { int 4 }
                if (iVar6 < di[4]) {
                    iVar3 = 0;
                }
                di[1] = ((long)iVar3 * (long)iVar2) / (long)iVar4 + di[5];
            }
            
            if ((*(unsigned char *)0xfa & 0x44) != 0) {
                uVar5 = *(unsigned int *)0xec;
                if ((*(unsigned char *)0xfa & 0x40) == 0) {
                    uVar5 = *(unsigned int *)0xea;
                }
                *di = uVar5;
                iVar2 = di[7] - di[5];
                uVar8 = ((unsigned long)uVar5 << 16) | (di[6] - di[4]);
                _asm { int 4 }
                if (di[6] < di[4]) {
                    uVar8 = 0;
                }
                iVar6 = (int)(uVar8 >> 16);
                iVar4 = (int)uVar8;
                iVar3 = iVar6 - di[4];
                _asm { int 4 }
                if (iVar6 < di[4]) {
                    iVar3 = 0;
                }
                di[1] = ((long)iVar3 * (long)iVar2) / (long)iVar4 + di[5];
            }
            
            if ((*(unsigned char *)0xfa & 0x11) != 0) {
                uVar5 = *(unsigned int *)0xf0;
                if ((*(unsigned char *)0xfa & 0x10) == 0) {
                    uVar5 = *(unsigned int *)0xee;
                }
                di[1] = uVar5;
                uVar8 = ((unsigned long)uVar5 << 16) | (di[6] - di[4]);
                _asm { int 4 }
                if (di[6] < di[4]) {
                    uVar8 = 0;
                }
                iVar6 = (int)(uVar8 >> 16);
                iVar4 = (int)uVar8;
                iVar3 = iVar6 - di[4];
                _asm { int 4 }
                if (iVar6 < di[4]) {
                    iVar3 = 0;
                }
                di[1] = ((long)iVar3 * (long)iVar2) / (long)iVar4 + di[5];
            }
            
            *(unsigned char *)0xfa = *(unsigned char *)0xfa ^ 0xff;
        }
    }
    return di;
}