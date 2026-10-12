/* GS.GS2 10bf:2bc6 - memmove_word
 * Moves param_3 bytes from param_2 to param_1 (handles overlapping regions)
 */
extern void _far memmove_word(void);
void _far memmove_word(void)
{
    /* memmove with overlap handling.
       If dest < src and dest < src+count: copy backwards
       Otherwise: copy forwards */
    /* Placeholder - needs actual memmove implementation */
    return;
}