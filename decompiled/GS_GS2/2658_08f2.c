/* GS.GS2 2658:08f2 undefined FUN_2658_08f2(void) */
void __cdecl16far
FUN_2658_08f2(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x6809 = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)0x680b = *(undefined2 *)(param_1 + 8);
  thunk_EXT_FUN_0000_0000(0x2658);
  *(undefined2 *)0x64cc = param_2;
  *(undefined2 *)0x64d0 = param_3;
  *(undefined2 *)0x64ce = param_4;
  *(undefined2 *)0x64d2 = param_5;
  thunk_EXT_FUN_0000_0000(0x2658);
  FUN_2658_0724();
  thunk_EXT_FUN_0000_0000(0x2658);
  return;
}
