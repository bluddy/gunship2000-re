/* GS.GS2 2741:01a4 undefined FUN_2741_01a4(void) */
void __cdecl16far
FUN_2741_01a4(int param_1,undefined2 param_2,int param_3,undefined2 param_4,undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  uVar1 = FUN_2741_000c(param_4,0);
  FUN_2741_05e2(uVar1);
  FUN_2658_0976(param_5);
  if (param_1 < 0) {
    *(undefined2 *)0x9c40 = 0;
  }
  for (iVar2 = 0; iVar2 < *(int *)0x9c40; iVar2 = iVar2 + 1) {
    FUN_2658_0af0(0xc52c);
    thunk_EXT_FUN_0000_0000(0x2658,0xc52c,param_1,param_2,param_3 + iVar2,*(undefined2 *)0x9c3e);
  }
  FUN_2741_00a0(uVar1);
  return;
}
