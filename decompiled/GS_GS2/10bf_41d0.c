/* GS.GS2 10bf:41d0 undefined FUN_10bf_41d0(void) */
void FUN_10bf_41d0(void)

{
  uint uVar1;
  byte in_CH;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar2;
  uint extraout_DX_01;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar6;
  undefined4 uVar7;
  
  bVar6 = false;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  do {
    uVar7 = FUN_10bf_42d0();
    uVar2 = (uint)((ulong)uVar7 >> 0x10);
    if (bVar6) goto FUN_10bf_4205;
    FUN_10bf_428a();
    uVar2 = (uint)CARRY2(extraout_DX,(uint)uVar7);
    bVar6 = CARRY2(uVar3,uVar2);
    uVar3 = uVar3 + uVar2;
    uVar2 = (uint)bVar6;
    bVar6 = CARRY2(uVar4,uVar2);
    uVar4 = uVar4 + uVar2;
    uVar5 = uVar5 + bVar6;
    bVar6 = uVar5 < 0x1999;
  } while (bVar6);
  while (FUN_10bf_42d0(), uVar2 = extraout_DX_00, !bVar6) {
    bVar6 = false;
    *(int *)0x6eea = *(int *)0x6eea + 1;
  }
FUN_10bf_4205:
  if (((((uVar5 == 0 && uVar4 == 0) && *(int *)0x6eea == 0) && ((in_CH & 0x80) == 0)) &&
      ((int)uVar3 < 0)) && (*(int *)0x6eec != 10)) {
    bVar6 = uVar2 != 0;
    uVar2 = -uVar2;
    uVar3 = -(uint)bVar6 - uVar3;
  }
  *(uint *)0x6ef2 = uVar2;
  *(uint *)0x6ef4 = uVar3;
  uVar1 = uVar5 | uVar4 | uVar3 | uVar2;
  uVar7 = CONCAT22(uVar2,uVar1);
  if (uVar1 != 0) {
    while (uVar5 < 0x1999) {
      FUN_10bf_428a();
      *(int *)0x6eea = *(int *)0x6eea + -1;
      uVar2 = extraout_DX_01;
    }
    uVar7 = CONCAT22(uVar2,0x40);
    while (-1 < (int)uVar5) {
      uVar7 = FUN_10bf_42a0();
    }
  }
  *(undefined2 *)0x6ef6 = (int)((ulong)uVar7 >> 0x10);
  *(uint *)0x6ef8 = uVar3;
  *(uint *)0x6efa = uVar4;
  *(uint *)0x6efc = uVar5;
  *(undefined2 *)0x6efe = (int)uVar7;
  return;
}
