/* GS.GS2 2741:044e undefined FUN_2741_044e(void) */
void __cdecl16far FUN_2741_044e(undefined2 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  uVar1 = FUN_2741_000c(param_1,0);
  FUN_2741_05e2(uVar1);
  FUN_2658_0976(0);
  thunk_EXT_FUN_0000_0000(0x2658,*(undefined2 *)0x9c3e,*(undefined2 *)0x9c40);
  for (iVar2 = 0; iVar2 < *(int *)0x9c40; iVar2 = iVar2 + 1) {
    FUN_2658_0af0(0xc52c);
    thunk_EXT_FUN_0000_0000(0x2658,0xc52c);
  }
  FUN_2741_00a0(uVar1);
  thunk_EXT_FUN_0000_0000(0x2658);
  return;
}
