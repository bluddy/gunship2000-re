/* GS.GS2 2581:03ee undefined FUN_2581_03ee(void) */
void __cdecl16far FUN_2581_03ee(undefined2 param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = *(int *)0x9680 * 5;
  *(undefined2 *)(iVar1 + -0x6a7c) = param_1;
  *(undefined2 *)(iVar1 + -0x6a7a) = param_2;
  *(undefined1 *)(iVar1 + -0x6a78) = param_3;
  if (*(int *)0x9680 < 0x32) {
    *(int *)0x9680 = *(int *)0x9680 + 1;
  }
  return;
}
