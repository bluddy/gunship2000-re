/* GS.GS2 3000:17a0 undefined FUN_3000_17a0(void) */
void __cdecl16far
FUN_3000_17a0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6)

{
  int iVar1;
  
  func_0x00000eb0();
  iVar1 = (int)param_1 + param_5 * 0x140 + param_4;
  *(undefined1 *)(iVar1 + param_3 * 0x140 + param_2) = param_6;
  *(undefined1 *)(param_3 * -0x140 + iVar1 + param_2) = param_6;
  *(undefined1 *)((iVar1 - param_2) + param_3 * 0x140) = param_6;
  *(undefined1 *)((param_3 * -0x140 + iVar1) - param_2) = param_6;
  *(undefined1 *)(param_2 * 0x140 + iVar1 + param_3) = param_6;
  *(undefined1 *)(param_2 * -0x140 + iVar1 + param_3) = param_6;
  *(undefined1 *)((iVar1 - param_3) + param_2 * 0x140) = param_6;
  *(undefined1 *)((param_2 * -0x140 + iVar1) - param_3) = param_6;
  return;
}
