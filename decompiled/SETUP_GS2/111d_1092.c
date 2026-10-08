/* SETUP.GS2 111d:1092 undefined FUN_111d_1092(void) */
void FUN_111d_1092(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_2 < *(uint *)0x97d;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_2 + 0x97f) = 0;
    }
  }
  FUN_111d_05a6();
  return;
}
