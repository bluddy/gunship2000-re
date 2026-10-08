/* GS.GS2 10bf:0018 undefined FUN_10bf_0018(void) */
void __cdecl16far FUN_10bf_0018(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined2 unaff_DS;
  undefined2 uStack_1d62;
  undefined2 uStack_1d60;
  undefined1 auStack_1d5e [7518];
  
  pcVar2 = (code *)swi(0x21);
  bVar3 = (*pcVar2)();
  if (bVar3 < 2) {
    return;
  }
  uVar6 = *(int *)0x2 + 0xc4c8;
  if (0xfff < uVar6) {
    uVar6 = 0x1000;
  }
  if ((undefined1 *)0x1d61 < &stack0x0004) {
    unaff_DS = 0x3b38;
    uStack_1d60 = 0x10bf;
    uStack_1d62 = 0xc37;
    FUN_10bf_0298();
    uStack_1d60 = 0;
    uStack_1d62 = 0x10bf;
    FUN_10bf_0543();
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  DAT_3b38_682e = uVar6 * 0x10 + -1;
  DAT_3b38_6830 = 0x3b38;
  DAT_3b38_6834 = auStack_1d5e;
  DAT_3b38_683a = &uStack_1d60;
  uStack_1d60 = 0xfffe;
  DAT_3b38_6836 = &uStack_1d62;
  DAT_3b38_6838 = &uStack_1d62;
  DAT_3b38_682a = &uStack_1d62;
  uStack_1d62 = 1;
  *(int *)0x2 = uVar6 + 0x3b38;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  puVar7 = (undefined1 *)0x742e;
  DAT_3b38_686a = unaff_DS;
  for (iVar5 = 0x6e72; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar1 = 0;
  }
  if (pcRam000424cc != (code *)0x0) {
    uStack_1d60 = 0xca1;
    (*pcRam000424cc)();
  }
  uStack_1d60 = 0x10bf;
  uStack_1d62 = 0xca6;
  FUN_10bf_049a();
  uStack_1d60 = 0x10bf;
  uStack_1d62 = 0xcab;
  FUN_10bf_0308();
  uStack_1d60 = 0x10bf;
  uStack_1d62 = 0xcb2;
  FUN_10bf_0110();
  uStack_1d60 = uRam00041c0b;
  uStack_1d62 = uRam00041c09;
  uVar4 = FUN_1dea_0006(uRam00041c07);
  FUN_10bf_01d5(uVar4);
  return;
}
