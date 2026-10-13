/* GS2.GS2 12a2:0474 - find_table_entry
 * Searches table at 0x347a for param_1
 * Table entries: [key][string...][0] pairs
 * Returns pointer to string or 0 if not found
 */
extern int * _far find_table_entry(int param_1)
{
    int *entry;
    int *next;
    int iVar3;
    entry = (int *)0x347a;
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
    return (int *)0x0;
}