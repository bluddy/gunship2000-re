/* GS.GS2 24de:0008 undefined FUN_24de_0008(void) */
void __cdecl16far FUN_24de_0008(void)

{
  int *piVar1;
  code *pcVar2;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  pcVar2 = (code *)swi(0x10);
  (*pcVar2)();
  piVar1 = (int *)0x68cc;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_10bf_0a02(0x20);
  }
  else {
    *(undefined1 *)*(undefined2 *)0x68ca = 0x20;
    *(int *)0x68ca = *(int *)0x68ca + 1;
  }
  pcVar2 = (code *)swi(0x10);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x10);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x10);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x10);
  (*pcVar2)();
  return;
}
