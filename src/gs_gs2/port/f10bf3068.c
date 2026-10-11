/* GS.GS2 10bf:3068 - delay loop using CX */
void _far FUN_10bf_3068(unsigned int cx)
{
    unsigned int uVar1;
    for (uVar1 = cx & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
        /* empty delay loop */
    }
    return;
}