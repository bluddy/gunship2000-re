/* GS.GS2 10bf:1a78 - find_free_buffer
 * Scans buffer table at 0x6a02 for a free slot (flags & 0x83 == 0)
 * Returns pointer to free slot or NULL
 */
extern void _far find_free_buffer(void);
void _far find_free_buffer(void)
{
    unsigned short *puVar1 = (unsigned short *)0x68c2;
    while (1) {
        if ((unsigned short *)*(unsigned short *)0x6a02 < puVar1) {
            return (void *)0;
        }
        if ((*(unsigned char *)(puVar1 + 3) & 0x83) == 0) break;
        puVar1 = puVar1 + 4;
    }
    puVar1[1] = 0;
    *(unsigned char *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *(unsigned char *)((int)puVar1 + 7) = 0xff;
    return puVar1;
}