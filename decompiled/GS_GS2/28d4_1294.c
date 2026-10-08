/* GS.GS2 28d4:1294 undefined FUN_28d4_1294(void) */
undefined2 __cdecl16far FUN_28d4_1294(void)

{
  char cVar1;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 uVar2;
  undefined2 uVar3;
  char in_BL;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined1 in_CF;
  bool bVar6;
  
  DAT_28d4_1374 = 0;
  uVar4 = 0x28d4;
  FUN_28d4_16e2();
  uVar2 = extraout_AH;
  if (!(bool)in_CF) {
    FUN_28d4_1429();
    if (*(char *)0x134c != ',') {
      bVar6 = false;
      DAT_28d4_1374 = DAT_28d4_1374 | 1;
      DAT_28d4_1377 = FUN_28d4_13f2();
      if (bVar6) {
        DAT_28d4_1374 = DAT_28d4_1374 | 2;
      }
    }
    FUN_28d4_1429();
    puVar5 = (undefined1 *)0x134d;
    cVar1 = *(char *)0x134c;
    uVar2 = extraout_AH_00;
    if (cVar1 == ',') {
      bVar6 = false;
      DAT_28d4_1374 = DAT_28d4_1374 | 4;
      DAT_28d4_1375 = FUN_28d4_13f2();
      if (bVar6) {
        DAT_28d4_1374 = DAT_28d4_1374 | 8;
      }
      FUN_28d4_1429();
      puVar5 = (undefined1 *)0x134e;
      cVar1 = *(char *)0x134d;
      uVar2 = extraout_AH_01;
    }
    if (cVar1 != '\0') {
      FUN_28d4_1432();
      *puVar5 = 0;
      *(undefined2 *)0x13e8 = 0x13d3;
      uVar3 = 0x13bf;
      if (in_BL != '\0') {
        uVar3 = 0x13c9;
      }
      *(undefined2 *)0x13e4 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0002a089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(ulong)*(uint *)*(undefined4 *)0x1379)();
      return uVar4;
    }
  }
  return CONCAT11(uVar2,DAT_28d4_1374);
}
