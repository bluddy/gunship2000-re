/* GS2.GS2 12a2:0016 undefined FUN_12a2_0016(void) */
void __cdecl16far FUN_12a2_0016(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined2 unaff_DS;
  
  pcVar2 = (code *)swi(0x21);
  bVar3 = (*pcVar2)();
  if (bVar3 < 2) {
    return;
  }
  uVar5 = *(int *)0x2 + 0xaf96;
  if (0xfff < uVar5) {
    uVar5 = 0x1000;
  }
  if ((undefined1 *)0xa6c1 < &stack0x0004) {
    unaff_DS = 0x506a;
    FUN_12a2_0296();
    FUN_12a2_049f();
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  DAT_506a_31aa = uVar5 * 0x10 + -1;
  DAT_506a_31ac = 0x506a;
  DAT_506a_31b0 = &stack0x5942;
  DAT_506a_31b6 = &stack0x5940;
  DAT_506a_31b2 = &stack0x593e;
  DAT_506a_31b4 = &stack0x593e;
  DAT_506a_31a6 = &stack0x593e;
  *(int *)0x2 = uVar5 + 0x506a;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  puVar6 = (undefined1 *)0x3554;
  DAT_506a_31e6 = unaff_DS;
  for (iVar4 = 0x23ec; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  if (pcRam000538e2 != (code *)0x0) {
    (*pcRam000538e2)();
  }
  FUN_1851_0d1d();
  FUN_12a2_02e2();
  FUN_12a2_010e();
  FUN_1851_0d13();
  FUN_12a2_01d3();
  return;
}
