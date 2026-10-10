/* GS.GS2 1000:0000 - sub_10000 (initialization) */
EXTRN _sub_10bf_02c0:FAR
void _far sub_10000(void)
{
    sub_10bf_02c0();
    *(unsigned short *)0x76b0 = 0;
    *(unsigned short *)0x76b2 = 0;
    return;
}