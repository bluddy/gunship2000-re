/* GS2.GS2 12a2:0524 - validate_input
 * Validates input byte in AL, sets 0x31eb
 * Checks against table at 0x321e, sets 0x31e0
 */
extern void _far validate_input(unsigned int in_AX)
{
    unsigned char bVar1;
    char cVar2;
    bVar1 = (unsigned char)in_AX;
    *(unsigned char *)0x31eb = bVar1;
    cVar2 = (char)(in_AX >> 8);
    if (cVar2 != '\0') {
        goto LAB_12a2_0548;
    }
    if (*(unsigned char *)0x31e8 < 3) {
        if (0x13 < bVar1) {
            in_AX = 0x13;
        }
    } else {
        if (0x21 < bVar1) {
            in_AX = 0x13;
        }
        if (bVar1 < 0x20) {
            if (0x13 < bVar1) {
                in_AX = 0x13;
            }
        } else {
            in_AX = 5;
        }
    }
    cVar2 = *(char *)((unsigned long)((in_AX & 0xff) + 0x321e));
LAB_12a2_0548:
    *(int *)0x31e0 = (int)cVar2;
    return;
}