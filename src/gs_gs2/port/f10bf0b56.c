/* GS.GS2 10bf:0b56 - parse_unit_type
 * Parses a unit type string (e.g. "AH-64", "UH-1", "OH-58") and allocates a buffer slot
 * param_1 = buffer param, param_2 = unit type string, param_3 = ?, param_4 = output buffer slot
 * Returns: pointer to allocated slot or NULL
 */
extern void _far serial_port_open(unsigned short, unsigned short, unsigned short, unsigned short);
void _far parse_unit_type(unsigned short param_1, unsigned char *param_2, unsigned short param_3, unsigned short *param_4)
{
    unsigned char bVar1 = *param_2;
    unsigned int uVar4;
    unsigned char uStack_6;
    
    if (bVar1 == 0x77) {  /* 'w' */
        uVar4 = 0x301;
    } else {
        if (0x77 < bVar1) return (void *)0;
        if (bVar1 != 0x61) {  /* 'a' */
            if (bVar1 != 0x72) return (void *)0;  /* 'r' */
            uVar4 = 0;
            uStack_6 = 1;
            goto LAB_10bf_0b7e;
        }
        uVar4 = 0x109;
    }
    uStack_6 = 2;
    
LAB_10bf_0b7e:
    int bVar2 = 1;
    do {
        while (1) {
            param_2 = param_2 + 1;
            if (*param_2 == 0 || !bVar2) {
                int iVar3 = serial_port_open(param_1, uVar4, param_3, 0x1a4);
                if (iVar3 < 0) return (void *)0;
                *(int *)0x68c0 = *(int *)0x68c0 + 1;
                *(unsigned char *)(param_4 + 3) = uStack_6;
                *(unsigned char *)(param_4 + 0x50) = 0;
                param_4[1] = 0;
                param_4[0x52] = 0;
                *param_4 = 0;
                param_4[2] = 0;
                *(unsigned char *)((int)param_4 + 7) = (unsigned char)iVar3;
                return param_4;
            }
            bVar1 = *param_2;
            if (bVar1 != 0x74) break;  /* 't' */
            if ((uVar4 & 0xc000) == 0) {
                uVar4 = uVar4 | 0x4000;
            } else {
                bVar2 = 0;
            }
        }
        if (0x74 < bVar1) goto LAB_10bf_0ba6;
        if (bVar1 == 0x2b) {  /* '+' */
            if ((uVar4 & 2) != 0) goto LAB_10bf_0ba6;
            uVar4 = uVar4 & 0xfffe | 2;
            uStack_6 = 0x80;
        } else {
            if ((bVar1 != 0x62) || ((uVar4 & 0xc000) != 0)) goto LAB_10bf_0ba6;  /* 'b' */
            uVar4 = uVar4 | 0x8000;
        }
    } while (1);
    
LAB_10bf_0ba6:
    bVar2 = 0;
    goto LAB_10bf_0b7e;
}