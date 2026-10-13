/* GS2.GS2 12a2:06ac - setup_stack_frame
 * Sets up stack frame for task/thread
 * in_AX = size, in_BX = frame pointer
 */
extern void _far setup_stack_frame(unsigned short size, unsigned short *frame)
{
    unsigned short *puVar2;
    int *piVar1;
    frame[2] = size + (int)frame;
    puVar2 = (unsigned short *)(size + (int)frame - 2);
    piVar1 = (int *)(frame + 10);
    *puVar2 = 0xfffe;
    frame[5] = (unsigned short)puVar2;
    *piVar1 = size - 0x17;
    *frame = 0;  /* DS - will be set by caller */
    frame[3] = (unsigned short)piVar1;
    frame[4] = (unsigned short)piVar1;
    frame[6] = 0;
    frame[7] = 0;
    frame[8] = 0;
    frame[9] = 0;
    return;
}