/* GS.GS2 28d4:070c undefined FUN_28d4_070c(void) */
undefined2 __cdecl16near FUN_28d4_070c(void)

{
  code *pcVar1;
  undefined2 in_AX;
  char extraout_AH;
  undefined2 uVar2;
  
  if (DAT_28d4_0026 != '\0') {
    pcVar1 = (code *)swi(0x67);
    (*pcVar1)();
    if (extraout_AH != '\0') {
      uVar2 = FUN_28d4_0be1();
      return uVar2;
    }
    DAT_28d4_0026 = '\0';
    DAT_28d4_0027 = 0;
  }
  return in_AX;
}
