/* GS2.GS2 137f:27a9 undefined FUN_137f_27a9(void) */
int __cdecl16near FUN_137f_27a9(void)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX >> 4;
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
