/* GS.GS2 10bf:0543 - error_handler
 * Looks up error message by code, prints it via INT 21h
 * param_1 = error code, looks up in table at 0x7288
 */
extern void _far error_lookup(unsigned short);
void _far error_handler(unsigned short param_1)
{
    char *pcVar3 = (char *)error_lookup(param_1);
    if (pcVar3 != (char *)0x0) {
        int iVar4 = -1;
        do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 - 1;
            pcVar3 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        if (*(int *)0x714e == -0x292a) {
            (*(void (_far *)(void))0x7150)();
        }
        _asm { int 0x21 }
    }
    return;
}