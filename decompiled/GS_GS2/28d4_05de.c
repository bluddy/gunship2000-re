/* GS.GS2 28d4:05de undefined FUN_28d4_05de(void) */
undefined4 __cdecl16near FUN_28d4_05de(void)

{
  code *pcVar1;
  undefined2 in_AX;
  char extraout_AH;
  char extraout_AH_00;
  undefined2 uVar2;
  uint uVar3;
  undefined2 in_DX;
  undefined4 uVar4;
  
  uVar2 = DAT_28d4_0058;
  if ((DAT_28d4_000d == 'E') && (uVar2 = DAT_28d4_0044, DAT_28d4_0026 == '\0')) {
    pcVar1 = (code *)swi(0x67);
    (*pcVar1)();
    if (extraout_AH != '\0') {
      uVar4 = FUN_28d4_0be1();
      return uVar4;
    }
    DAT_28d4_0026 = -1;
    DAT_28d4_0068 = DAT_28d4_0066 / 8;
    if (DAT_28d4_0066 % 8 != 0) {
      DAT_28d4_0068 = DAT_28d4_0068 + 1;
    }
    uVar3 = 0;
    do {
      pcVar1 = (code *)swi(0x67);
      (*pcVar1)();
      if (extraout_AH_00 != '\0') {
        uVar4 = FUN_28d4_0be1();
        return uVar4;
      }
      uVar3 = uVar3 + 1;
      uVar2 = DAT_28d4_0044;
    } while (uVar3 < DAT_28d4_0068);
  }
  DAT_28d4_006a = uVar2;
  DAT_28d4_006c = 0;
  DAT_28d4_0070 = DAT_28d4_006e;
  return CONCAT22(in_DX,in_AX);
}
