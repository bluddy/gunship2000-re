/* GS.GS2 10bf:4205 undefined FUN_10bf_4205(void) */
void __cdecl16near FUN_10bf_4205(void)

{
  uint uVar1;
  byte in_CH;
  uint in_DX;
  uint extraout_DX;
  uint in_BX;
  uint unaff_BP;
  uint unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar2;
  undefined4 uVar3;
  
  if (((((unaff_DI == 0 && unaff_BP == 0) && *(int *)0x6eea == 0) && ((in_CH & 0x80) == 0)) &&
      ((int)in_BX < 0)) && (*(int *)0x6eec != 10)) {
    bVar2 = in_DX != 0;
    in_DX = -in_DX;
    in_BX = -(uint)bVar2 - in_BX;
  }
  *(uint *)0x6ef2 = in_DX;
  *(uint *)0x6ef4 = in_BX;
  uVar1 = unaff_DI | unaff_BP | in_BX | in_DX;
  uVar3 = CONCAT22(in_DX,uVar1);
  if (uVar1 != 0) {
    while (unaff_DI < 0x1999) {
      FUN_10bf_428a();
      *(int *)0x6eea = *(int *)0x6eea + -1;
      in_DX = extraout_DX;
    }
    uVar3 = CONCAT22(in_DX,0x40);
    while (-1 < (int)unaff_DI) {
      uVar3 = FUN_10bf_42a0();
    }
  }
  *(undefined2 *)0x6ef6 = (int)((ulong)uVar3 >> 0x10);
  *(uint *)0x6ef8 = in_BX;
  *(uint *)0x6efa = unaff_BP;
  *(uint *)0x6efc = unaff_DI;
  *(undefined2 *)0x6efe = (int)uVar3;
  return;
}
