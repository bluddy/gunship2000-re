/* GS2.GS2 137f:01bd - bounds_check_flags
 * Sets boundary flags at 0xfa based on AX,CX,BX,DX vs limits at 0xea,0xec,0xee,0xf0
 * Flags: bit7=AX<ea, bit6=CX<ea, bit5=BX<ee, bit4=DX<ee, bit3=AX>ec, bit2=CX>ec, bit1=BX>f0, bit0=DX>f0
 */
extern void _far bounds_check_flags(int ax, int cx, int bx, int dx)
{
    *(unsigned char *)0xfa = 0xff;
    if (ax < *(int *)0xea) *(unsigned char *)0xfa ^= 0x80;
    if (cx < *(int *)0xea) *(unsigned char *)0xfa ^= 0x40;
    if (bx < *(int *)0xee) *(unsigned char *)0xfa ^= 0x20;
    if (dx < *(int *)0xee) *(unsigned char *)0xfa ^= 0x10;
    if (*(int *)0xec < ax) *(unsigned char *)0xfa ^= 0x08;
    if (*(int *)0xec < cx) *(unsigned char *)0xfa ^= 0x04;
    if (*(int *)0xf0 < bx) *(unsigned char *)0xfa ^= 0x02;
    if (*(int *)0xf0 < dx) *(unsigned char *)0xfa ^= 0x01;
    return;
}