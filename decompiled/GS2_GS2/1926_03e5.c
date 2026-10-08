/* GS2.GS2 1926:03e5 undefined FUN_1926_03e5(void) */
undefined2 __cdecl16near FUN_1926_03e5(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined2 extraout_DX;
  int unaff_BP;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 unaff_SS;
  
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  FUN_1926_03cd();
  *(undefined1 *)0x0 = 0x24;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar3 = *(undefined2 *)(unaff_BP + 0xc);
  *(undefined1 *)0x50 = 0xfe;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar7 = (uint)*(byte *)0x51;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar7 = uVar7 & 0xff;
  if (uVar7 == 0) goto LAB_1926_049f;
  uVar3 = *(undefined2 *)(unaff_BP + 0xc);
  puVar8 = (undefined1 *)0x52;
  uVar4 = *(undefined2 *)(unaff_BP + 0xc);
  puVar9 = (undefined1 *)0x0;
  if (*(char *)0x53 == ':') {
    if (*(char *)0x54 != '\\') {
      puVar8 = (undefined1 *)0x54;
      uVar7 = uVar7 - 2;
LAB_1926_048a:
      FUN_1926_0312();
    }
  }
  else {
    if (*(char *)0x52 != '\\') goto LAB_1926_048a;
    pcVar5 = (code *)swi(0x21);
    cVar6 = (*pcVar5)();
    puVar9 = (undefined1 *)0x2;
    *(undefined2 *)0x0 = CONCAT11(0x3a,cVar6 + 'A');
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  if ((puVar9[-1] != '\\') && (puVar9[-1] != ':')) {
    *puVar9 = 0x5c;
  }
LAB_1926_049f:
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  return extraout_DX;
}
