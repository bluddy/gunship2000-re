/* GS.GS2 0000:0000 - thunk_ext_call
 * External call thunk for overlay system
 * Used for far calls across overlay boundaries
 */
extern void _far thunk_EXT_FUN_0000_0000(void)
{
    /* External call thunk - jumps to overlay entry point
       Original uses segment 0:0 as sentinel */
    return;
}