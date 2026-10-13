/* GS2.GS2 12a2:01d3 - init_sequence
 * Initialization sequence: calls call_table_functions 4x, dos_call_wrapper, checksum_verify, INT 21h
 */
extern void _far call_table_functions(int *, int *);
extern void _far dos_call_wrapper(unsigned short);
extern void _far checksum_verify(void);
extern void _far init_sequence(void)
{
    call_table_functions((int *)0, (int *)0);  /* SI, DI - params unknown */
    call_table_functions((int *)0, (int *)0);
    if (*(int *)0x3244 == -0x292a) {
        (*(void (*)())*(unsigned short *)0x324a)();
    }
    call_table_functions((int *)0, (int *)0);
    call_table_functions((int *)0, (int *)0);
    dos_call_wrapper(0);
    checksum_verify();
    _asm { int 0x21 }
    return;
}