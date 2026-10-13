/* GS2.GS2 12a2:0283 - call_table_functions
 * Iterates through function table from SI to DI, calls each non-zero entry
 * Register calling convention (SI, DI)
 */
extern void _far call_table_functions(int *start, int *end)
{
    int *piVar1, *piVar2;
    while (start < end) {
        piVar2 = end - 2;
        piVar1 = end - 1;
        end = piVar2;
        if (*piVar2 != 0 || *piVar1 != 0) {
            (*(void (*)(unsigned short))*piVar2)(0x12a2);
        }
    }
    return;
}