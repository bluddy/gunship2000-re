/* GS.GS2 10bf:1b32 undefined FUN_10bf_1b32(void) */
void FUN_10bf_1b32(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_2 < *(uint *)0x6871;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_2 + 0x6873) = 0;
    }
  }
  FUN_10bf_05a0();
  return;
}
