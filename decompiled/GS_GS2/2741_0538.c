/* GS.GS2 2741:0538 undefined FUN_2741_0538(void) */
void __cdecl16far FUN_2741_0538(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x9c38 = 0;
  *(undefined2 *)0x9c3a = param_1;
  *(undefined2 *)0xc86c = *(undefined2 *)0x64c8;
  *(undefined2 *)0xc528 = 0x600;
  *(undefined2 *)0xc52a = 0x2741;
  FUN_2658_0976(0);
  for (iVar1 = 0; iVar1 < *(int *)0x9c40; iVar1 = iVar1 + 1) {
    FUN_2658_0af0(0xc52c);
    thunk_EXT_FUN_0000_0000(0x2658,0xc52c,param_2,0,iVar1,*(undefined2 *)0x9c3e);
  }
  return;
}
