/* GS.GS2 2741:0702 undefined FUN_2741_0702(void) */
void __cdecl16far FUN_2741_0702(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x64ca != -1) {
    iVar1 = FUN_10bf_2dee(0x2741,*(undefined2 *)0x64ca);
    if (iVar1 != 0) {
      FUN_2741_0670(0);
    }
    *(undefined2 *)0x64ca = 0xffff;
  }
  return;
}
