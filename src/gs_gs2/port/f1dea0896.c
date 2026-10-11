/* GS.GS2 1dea:0896 - mission_score_evaluate
 * Mission scoring: targets destroyed, bonuses, difficulty, time, wingmen performance
 * Updates high scores, promotions, pilot stats
 */
extern void _far FUN_10bf_02c0(void);
extern int _far FUN_27d1_0f28(unsigned short);
extern int _far FUN_27d1_0f1e(unsigned short);
extern int _far FUN_1b1d_023e(void);
extern int _far FUN_1b1d_01ec(void);
extern int _far FUN_1dea_0fa4(unsigned short);
extern int _far FUN_2581_039c(int);
extern unsigned long _far FUN_10bf_2f96(int, int, unsigned int, int);
extern int _far FUN_10bf_2efc(unsigned short, unsigned short, unsigned short, unsigned short);
extern void _far FUN_27d1_0f3c(unsigned short);
extern int _far FUN_27d1_0f32(unsigned short);

void _far mission_score_evaluate(int param_1)
{
    FUN_10bf_02c0();
    
    *(char*)0x861c = 0;
    *(char*)0x8612 = 0;
    
    unsigned int uVar9 = (*(unsigned char*)0xa249 & 4) >> 2;
    *(unsigned short*)0xbc40 = *(unsigned short*)0xbb9e;
    
    // Calculate base score from targets destroyed
    for (unsigned int uVar13 = 0; uVar13 < 0x50; uVar13++) {
        if ((*(char*)((int)uVar13 / 2 - 0x4446) >> (-((uVar13 & 1) != 0) & 4) & 0xf) == 7) {
            *(int*)0xbb9e = *(int*)0xbb9e - *(int*)(uVar13 * 0x20 - 0x5d65) / 2;
        }
    }
    *(unsigned short*)0xbc42 = *(unsigned short*)0xbb9e;
    *(int*)0xbb9e = *(int*)0xbb9e + 
        ((unsigned int)((*(unsigned char*)0xbb9c & 1) != 0) * 2 + 
         (unsigned int)((*(unsigned char*)0xbb9c & 2) != 0)) * 0x32;
    *(unsigned short*)0xbc44 = *(unsigned short*)0xbb9e;
    
    // Check wingmen performance
    int iVar3 = FUN_27d1_0f28(0x10bf);
    if (iVar3 == 0 && 
        ((0x31 < *(int*)0xbb9e && (*(unsigned char*)0xbb9c & 3) != 0) ||
         (iVar3 = FUN_27d1_0f1e(0x27d1), iVar3 != 0))) {
        *(char*)0x8612 = 1;
    } else {
        *(char*)0x8612 = 0;
    }
    
    // Count surviving wingmen
    *(char*)0x8610 = 0;
    for (int iVar3 = 0; iVar3 < *(char*)0xe282 - 1; iVar3++) {
        *(char*)0x8610 += 1 - ((*(unsigned char*)(iVar3 - 0x4456) & 0x18) == 0);
    }
    
    // Difficulty/time bonuses
    unsigned int uVar13 = 0x27d1;
    if ((*(unsigned char*)0xa249 & 0xe0) == 0x80) {
        if (*(char*)0x8612 != '\0') {
            uVar13 = 0x1b1d;
            iVar3 = FUN_1b1d_023e();
            if (0x1d < iVar3) {
                *(char*)0xad07++;
                if (param_1 == 0 && (iVar3 = FUN_1b1d_01ec(), 0 < iVar3)) {
                    *(int*)0xbb9e += 100;
                }
                goto LAB_1dea_09cc;
            }
        }
        *(char*)0xad08++;
    }
    
LAB_1dea_09cc:
    *(char*)0xace9 = 0;
    unsigned int uVar10 = *(unsigned int*)0xbb9e;
    int iVar3 = (int)uVar10 >> 0xf;
    
    if (uVar9 == 0 && (*(unsigned char*)0xbb9c & 3) != 0) {
        // Terrain/position bonus
        iVar3 = FUN_2581_039c((int)*(char*)0xbae8);
        iVar3 = (int)*(char*)((int)*(unsigned long*)0xb83a + iVar3 * 0xfc + 6);
        if (0 < iVar3) iVar3 <<= 1;
        if ((*(unsigned char*)0xbb9c & 0x80) != 0 || iVar3 < 0) {
            uVar13 += iVar3;
        }
        
        // Wingmen position bonuses
        for (int iVar4 = 0; iVar4 < 4; iVar4++) {
            iVar4 = (int)*(char*)(iVar4 * 0x24 - 0x44f4);
            iVar3 = FUN_2581_039c(iVar4);
            iVar3 = (int)*(char*)((int)*(unsigned long*)0xb83a + iVar3 * 0xfc + 6);
            if ((*(unsigned char*)(iVar4 - 0x4456) & 0x80) != 0 || iVar3 < 0) {
                uVar13 += iVar3;
            }
        }
        
        if ((*(unsigned char*)0xa248 & 3) == 0) uVar13 = 0;
        else if ((*(unsigned char*)0xa248 & 3) == 1) uVar13 >>= 1;
        
        unsigned int uVar13_old = uVar13;
        uVar10 += uVar13;
        iVar3 += (int)uVar13 >> 0xf + (unsigned int)(uVar10 < uVar13_old);
    }
    
    // Time bonus
    if (*(char*)0xa271 != '\0') {
        unsigned int uVar10_old = uVar10;
        uVar10 += 0x32;
        iVar3 += (unsigned int)(uVar10 < uVar10_old);
    }
    
    *(unsigned int*)0xbc44 = uVar10;
    *(unsigned short*)0xbc48 = 100;
    
    // Calculate final score with multipliers
    unsigned long uVar7 = FUN_10bf_2f96(*(int*)0xa268, *(int*)0xa268 >> 0xf, uVar10, iVar3);
    iVar3 = -0x1692;
    long lVar8 = FUN_10bf_2efc((unsigned short)uVar7, 10, 0);
    *(unsigned short*)0xbc46 = (int)lVar8;
    
    if (0x6270 < *(unsigned int*)0xbba0) *(unsigned short*)0xbba0 = 0x6270;
    
    if (0 < lVar8 && 0x2a2f < *(unsigned int*)0xbba0) {
        unsigned long uVar7_2 = FUN_10bf_2f96(*(int*)0xbba0 - 0x2a30, 0, 0xffce, 0xffff);
        int iVar3_2 = FUN_10bf_2efc((unsigned short)uVar7_2, 0x3840, 0);
        *(int*)0xbc48 = iVar3_2 + 100;
        
        uVar7 = FUN_10bf_2f96(iVar3_2 + 100, (iVar3_2 + 100) >> 0xf, 0x10bf, (unsigned short)uVar7_2);
        iVar3 = -0x1629;
        lVar8 = FUN_10bf_2efc((unsigned short)uVar7, 100, 0);
    }
    
    int iVar4 = (int)((unsigned long)lVar8 >> 0x10);
    unsigned int uVar13 = (unsigned int)lVar8;
    *(unsigned short*)0xbc4a = 0;
    
    if (iVar3 == 0) {
        *(unsigned int*)0xad20 = uVar13;
        *(int*)0xad22 = iVar4;
        *(unsigned int*)0xbc4a = uVar13;
        
        unsigned int* puVar1 = (unsigned int*)0xad28;
        unsigned int uVar9 = *puVar1;
        *puVar1 += uVar13;
        *(int*)0xad2a += iVar4 + (unsigned int)(*puVar1 < uVar9);
        
        if (*(int*)0xad0f < 3000) {
            *(int*)0xad0f += (unsigned int)((*(unsigned char*)0xbb9c & 0x80) == 0) * 200;
        }
        if (*(int*)0xad0f < 3000) {
            *(int*)0xad0f += (unsigned int)((*(unsigned char*)0xbb9c & 3) == 0) * 200;
        }
        
        if (*(int*)0xad1e <= iVar4 && 
            (*(int*)0xad1e < iVar4 || *(unsigned int*)0xad1c < uVar13)) {
            *(unsigned short*)0xad1c = *(unsigned short*)0xad20;
            *(unsigned short*)0xad1e = (unsigned short)iVar4;
        }
        
        unsigned int* puVar1_2 = (unsigned int*)0xad24;
        uVar13 = *puVar1_2;
        *puVar1_2 += 1;
        *(int*)0xad26 += (unsigned int)(0xfffe < uVar13);
    }
    
    // Update pilot stats / promotions
    unsigned char uVar2 = FUN_27d1_0f3c(0x10bf);
    *(unsigned char*)0x861b = uVar2;
    
    if (iVar3 == 0) {
        iVar3 = FUN_27d1_0f32(0x27d1);
        if (*(char*)0x8612 != '\0' &&
            ((iVar3 == 0 || (iVar3 = FUN_1b1d_01ec(), 0 < iVar3)) ||
             *(char*)0x861b == 0xb || 
             (iVar3 = FUN_1dea_0fa4(0), iVar3 != 0))) {
            *(char*)0x861c = 1;  // Promotion earned
            return;
        }
        *(char*)0x861c = 0;
    }
    return;
}