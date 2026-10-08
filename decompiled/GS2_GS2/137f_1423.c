/* GS2.GS2 137f:1423 undefined FUN_137f_1423(void) */
void __cdecl16near FUN_137f_1423(void)

{
  undefined2 *unaff_DI;
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_137f_14bf();
  *unaff_DI = (int)uVar1;
  unaff_DI[1] = (int)((ulong)uVar1 >> 0x10);
  uVar1 = FUN_137f_14bf();
  unaff_DI[2] = (int)uVar1;
  unaff_DI[3] = (int)((ulong)uVar1 >> 0x10);
  uVar1 = FUN_137f_14bf();
  unaff_DI[4] = (int)uVar1;
  unaff_DI[5] = (int)((ulong)uVar1 >> 0x10);
  return;
}
