/* GS.GS2 2000:e7ee undefined FUN_2000_e7ee(void) */
void __cdecl16far FUN_2000_e7ee(void)

{
  undefined2 unaff_DS;
  int iVar1;
  
  func_0x00000eb0();
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 + -0x65a9) = 0xff;
    *(undefined2 *)(iVar1 * 2 + -0x65a0) = 0;
    *(undefined1 *)(iVar1 + -0x659a) = 0xff;
  }
  *(undefined1 *)0x9a77 = 0;
  FUN_2000_f058();
  FUN_2000_d678();
  FUN_2000_d7a4(0);
  FUN_2000_dbb2();
  *(undefined2 *)0x9b9e = 1;
  return;
}
