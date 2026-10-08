/* GS.GS2 1f61:0962 undefined FUN_1f61_0962(void) */
void __cdecl16far FUN_1f61_0962(void)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(int *)0x86c2 != 0 || *(int *)0x86c0 != 0) {
    FUN_10bf_05f6(*(undefined2 *)0x8668);
    FUN_1dea_1086(*(undefined2 *)0x86c0,*(undefined2 *)0x86c2);
  }
  *(undefined2 *)0x86c2 = 0;
  *(undefined2 *)0x86c0 = 0;
  *(undefined2 *)0x8666 = 0;
  *(undefined2 *)0x8656 = 0;
  return;
}
