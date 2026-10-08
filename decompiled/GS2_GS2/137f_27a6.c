/* GS2.GS2 137f:27a6 undefined FUN_137f_27a6(void) */
int FUN_137f_27a6(void)

{
  int in_AX;
  uint uVar1;
  
  uVar1 = in_AX + 0x4000U >> 4;
  if ((uVar1 & 0x800) != 0) {
    if ((uVar1 & 0x400) == 0) {
      return -*(int *)((uVar1 & 0x7ff) * 2);
    }
    return -*(int *)((uVar1 & 0x3ff) * -2 + 0x800);
  }
  if ((uVar1 & 0x400) == 0) {
    return *(int *)((uVar1 & 0x7ff) * 2);
  }
  return *(int *)((uVar1 & 0x3ff) * -2 + 0x800);
}
