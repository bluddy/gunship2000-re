/* GS.GS2 10bf:156e - loops calling FUN_10bf_1528 while byte at offset+0x6a97 has bit 3 set */
extern int _far FUN_10bf_1528(unsigned short);
void _far FUN_10bf_156e(unsigned short param_1, int *param_2)
{
    int iVar1;
    do {
        *param_2 = *param_2 + 1;
        iVar1 = FUN_10bf_1528(param_1);
    } while ((*(unsigned char *)(iVar1 + 0x6a97) & 8) != 0);
    return;
}