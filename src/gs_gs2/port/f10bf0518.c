/* GS.GS2 10bf:0518 - error_lookup
 * Searches error table at 0x7288 for error code param_1
 * Table entries: [error_code][string...][0] pairs
 * Returns pointer to error string or 0 if not found
 */
extern int * _far error_lookup(int param_1)
{
    int *entry;
    int *next;
    int iVar3;
    entry = (int *)0x7288;
    while (1) {
        next = entry + 1;
        if (*entry == param_1) {
            return next;
        }
        next = (int *)(*entry + 1);
        if (next == (int *)0x0) {
            return (int *)0x0;
        }
        iVar3 = -1;
        do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 - 1;
            entry = next;
            next = (int *)((int)next + 1);
        } while ((char)*entry != '\0');
        entry = next;
    }
    return (int *)0x0; /* not reached */
}