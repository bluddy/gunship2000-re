/* GS.GS2 2741:04d4 undefined FUN_2741_04d4(void) */
void __cdecl16far FUN_2741_04d4(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  uVar1 = FUN_2741_000c(param_1,0);
  FUN_2741_05e2(uVar1);
  FUN_2658_0976(0);
  for (iVar2 = 0; iVar2 < *(int *)0x9c40; iVar2 = iVar2 + 1) {
    FUN_2658_0af0(0xc52c);
    thunk_EXT_FUN_0000_0000(0x2658,0xc52c,param_2,0,iVar2,*(undefined2 *)0x9c3e);
  }
  return;
}
