/* GS2.GS2 12a2:049f - call_dos_handler
 * param_1 = code (0xfc, 0xff, etc.)
 * Finds entry in table, calls DOS INT 21h if found
 */
extern int * _far find_table_entry(int);
extern void _far call_dos_handler(unsigned short param_1)
{
    char *pcVar3;
    char *pcVar1;
    int iVar4;
    pcVar3 = (char *)find_table_entry(param_1);
    if (pcVar3 != (char *)0x0) {
        iVar4 = -1;
        do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 - 1;
            pcVar1 = pcVar3;
            pcVar3 = pcVar3 + 1;
        } while (*pcVar1 != '\0');
        if (*(int *)0x3244 == -0x292a) {
            (*(void (*)())*(unsigned short *)0x3246)();
        }
        /* INT 21h call */
        _asm {
            int 0x21
        }
    }
    return;
}