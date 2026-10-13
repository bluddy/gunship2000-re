/* GS.GS2 10bf:1ff3 - thunk_memory_alloc
 * Memory allocation thunk for overlay system
 * param_1 = size in paragraphs
 * Returns: segment of allocated memory or 0 on failure
 */
extern void _far FUN_10bf_201c(void);
extern void _far FUN_10bf_2098(void);
extern unsigned short _far thunk_FUN_10bf_1ff3(unsigned short param_1)
{
    if (param_1 < 0xffe9) {
        FUN_10bf_201c();
        /* would check carry flag here */
        FUN_10bf_2098();
        FUN_10bf_201c();
    }
    return 0;
}