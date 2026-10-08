/* GS.GS2 2581:04b4 undefined FUN_2581_04b4(void) */
void __cdecl16far FUN_2581_04b4(int param_1)

{
  int iVar1;
  undefined2 unaff_SI;
  undefined1 unaff_DI;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  iVar2 = 0;
  while( true ) {
    if (*(int *)0x9680 <= iVar2) {
      FUN_10bf_2c3a(&stack0xfff8,0);
      *(undefined2 *)0x9688 = unaff_DS;
      *(undefined2 *)0x968a = unaff_SI;
      *(undefined1 *)0x968c = unaff_DI;
      return;
    }
    iVar1 = iVar2 * 5;
    if (*(char *)(iVar1 + -0x6a7c) == param_1) break;
    iVar2 = iVar2 + 1;
  }
  *(undefined2 *)0x9688 = *(undefined2 *)(iVar1 + -0x6a7c);
  *(undefined2 *)0x968a = *(undefined2 *)(iVar1 + -0x6a7a);
  *(undefined1 *)0x968c = *(undefined1 *)(iVar1 + -0x6a78);
  return;
}
