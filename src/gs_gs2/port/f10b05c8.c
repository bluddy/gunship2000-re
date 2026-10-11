/* GS.GS2 10bf:05c8 - simple logic, no far calls */
void _near FUN_10bf_05c8(void)
{
    unsigned char bVar1;
    char cVar2;
    unsigned int in_AX;
    
    bVar1 = (unsigned char)in_AX;
    *(unsigned char *)0x686f = bVar1;
    cVar2 = (char)(in_AX >> 8);
    if (cVar2 != '\0') goto LAB_10bf_05ec;
    if (*(unsigned char *)0x686c < 3) {
LAB_10bf_05e2:
        if (0x13 < bVar1) {
LAB_10bf_05e6:
            in_AX = 0x13;
        }
    }
    else {
        if (0x21 < bVar1) goto LAB_10bf_05e6;
        if (bVar1 < 0x20) goto LAB_10bf_05e2;
        in_AX = 5;
    }
    cVar2 = *(char *)((in_AX & 0xff) + 0x68a8);
LAB_10bf_05ec:
    *(int *)0x6864 = (int)cVar2;
    return;
}