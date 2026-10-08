/* GS.GS2 28d4:0665 undefined FUN_28d4_0665(void) */
undefined2 __cdecl16near FUN_28d4_0665(void)

{
  code *pcVar1;
  undefined2 in_AX;
  char extraout_AH;
  undefined2 uVar2;
  int iVar3;
  undefined2 in_CX;
  undefined2 unaff_DS;
  bool bVar4;
  
  if (DAT_28d4_000a != '\0') {
    while( true ) {
      pcVar1 = (code *)swi(0x67);
      (*pcVar1)();
      if (extraout_AH == '\0') break;
      if (extraout_AH != -0x7a) {
        uVar2 = FUN_28d4_0be1();
        return uVar2;
      }
      pcVar1 = (code *)swi(0x67);
      (*pcVar1)();
    }
    DAT_28d4_000a = '\0';
    DAT_28d4_003a = 0;
    DAT_28d4_003c = 0;
  }
  if (DAT_28d4_000b != '\0') {
    iVar3 = (*(code *)*(undefined2 *)0x7a)(0x28d4,in_CX);
    if (iVar3 != 1) {
      uVar2 = FUN_28d4_0bf8();
      return uVar2;
    }
    DAT_28d4_000b = '\0';
    DAT_28d4_0048 = 0;
    DAT_28d4_004a = 0;
  }
  bVar4 = false;
  if (DAT_28d4_000c != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar4) {
      uVar2 = FUN_28d4_0c0f();
      return uVar2;
    }
    DAT_28d4_0054 = 0;
    DAT_28d4_0056 = 0;
    DAT_28d4_000c = '\0';
  }
  return in_AX;
}
