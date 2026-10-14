/* GS2.GS2 12a2:081e - mem_bounds_check
 * Checks if memory block is within bounds
 * Returns 1 if within bounds, 0 otherwise
 */
#include <dos.h>
extern void _far free_list_find_end(unsigned short *);
extern int _far mem_bounds_check(unsigned short ax, int bx, unsigned short *param_1)
{
    unsigned int uVar2;
    int bVar3 = 0;
    union REGS regs;
    
    if (((*(unsigned char *)(bx + 2) & 4) == 0) ||
        (ax - 1 < *(int *)(bx + 4) - 1) ||
        (*(unsigned int *)(bx - 2) < ax - 1)) {
        
        uVar2 = ax >> 4;
        if (uVar2 == 0) uVar2 = 0x1000;
        bVar3 = 0;
        
        if ((*(unsigned char *)(bx + 2) & 4) != 0) {
            bVar3 = uVar2 + 0 < *(unsigned int *)0x31e6;
        }
        regs.h.ah = 0x00;  /* dummy INT 21h call */
        int86(0x21, &regs, &regs);
        if ((!bVar3) && ((*(unsigned char *)(param_1 + 2) & 4) != 0)) {
            *(int *)(param_1 - 2) = regs.x.dx - 1;
        }
    }
    return 0;
}