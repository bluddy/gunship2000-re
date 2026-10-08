/* GS.GS2 1d02:051c undefined FUN_1d02_051c(void) */
void __cdecl16far FUN_1d02_051c(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  FUN_2741_023c(1,0x4ab,0x9f40);
  thunk_EXT_FUN_0000_0000(0x2741);
  for (iVar2 = 0; iVar2 < 0x12; iVar2 = iVar2 + 1) {
    iVar2 = 0x10;
    uVar1 = thunk_EXT_FUN_0000_0000(0x2658,1,0x100,0,0x10);
    *(undefined2 *)(iVar2 * 2 + -0x60e4) = uVar1;
  }
  FUN_1d02_0906();
  thunk_EXT_FUN_0000_0000(0x2658);
  return;
}
