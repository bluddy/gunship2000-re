/* SETUP.GS2 111d:001e undefined entry(void) */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void __cdecl16far entry(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined2 unaff_ES;
  undefined2 uVar14;
  undefined2 unaff_DS;
  
  puVar6 = (undefined1 *)0x800;
  pcVar3 = (code *)swi(0x21);
  bVar4 = (*pcVar3)();
  if (bVar4 < 2) {
    *(undefined2 *)(puVar6 + -2) = unaff_ES;
    *(undefined2 *)(puVar6 + -4) = 0;
    return;
  }
  uVar12 = *(int *)0x2 + 0xebde;
  if (0xfff < uVar12) {
    uVar12 = 0x1000;
  }
  puVar7 = puVar6 + 0x1f8e;
  puVar13 = puVar6 + 0x1f8e;
  if ((undefined1 *)0xe071 < puVar6) {
    *(undefined2 *)(puVar6 + 0x1f8c) = 0x1422;
    unaff_DS = *(undefined2 *)(puVar6 + 0x1f8c);
    *(undefined2 *)(puVar6 + 0x1f8c) = 0x111d;
    *(undefined2 *)(puVar6 + 0x1f8a) = 0x121d;
    FUN_111d_029e();
    *(undefined2 *)(puVar6 + 0x1f8c) = 0;
    *(undefined2 *)(puVar6 + 0x1f8a) = 0x111d;
    *(undefined2 *)(puVar6 + 0x1f88) = 0x1224;
    FUN_111d_0549();
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    puVar13 = puVar7;
  }
  DAT_1422_093a = uVar12 * 0x10 + -1;
  DAT_1422_093c = 0x1422;
  puVar8 = (undefined1 *)((uint)puVar13 & 0xfffe);
  DAT_1422_0946 = puVar8 + -2;
  DAT_1422_0940 = puVar8;
  *(undefined2 *)(puVar8 + -2) = 0xfffe;
  puVar9 = puVar8 + -4;
  DAT_1422_0942 = puVar8 + -4;
  DAT_1422_0944 = puVar8 + -4;
  DAT_1422_0936 = puVar8 + -4;
  *(undefined2 *)(puVar8 + -4) = 1;
  *(int *)0x2 = uVar12 + 0x1422;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  DAT_1422_0976 = unaff_DS;
  *(undefined2 *)(puVar9 + -2) = 0x1422;
  uVar14 = *(undefined2 *)(puVar9 + -2);
  puVar13 = (undefined1 *)0xc98;
  for (iVar5 = 0x12f8; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar1 = 0;
  }
  *(undefined2 *)(puVar9 + -2) = 0x1422;
  pcVar2 = (code *)*(int *)0xb94;
  if (pcVar2 != (code *)0x0) {
    puVar10 = (undefined2 *)(puVar9 + -2);
    puVar9 = puVar9 + -2;
    *puVar10 = 0x1287;
    (*pcVar2)();
  }
  *(undefined2 *)(puVar9 + -2) = 0x111d;
  *(undefined2 *)(puVar9 + -4) = 0x128c;
  FUN_111d_04a0();
  *(undefined2 *)(puVar9 + -2) = 0x111d;
  puVar11 = puVar9 + -4;
  *(undefined2 *)(puVar9 + -4) = 0x1291;
  FUN_111d_030e();
  *(undefined2 *)(puVar11 + -2) = 0x111d;
  *(undefined2 *)(puVar11 + -4) = 0x1298;
  FUN_111d_0116();
  *(undefined2 *)(puVar11 + -2) = 0x1422;
  uVar14 = *(undefined2 *)(puVar11 + -2);
  *(undefined2 *)(puVar11 + -2) = *(undefined2 *)0x997;
  *(undefined2 *)(puVar11 + -4) = *(undefined2 *)0x995;
  *(undefined2 *)(puVar11 + -6) = *(undefined2 *)0x993;
  *(undefined2 *)(puVar11 + -8) = 0x111d;
  *(undefined2 *)(puVar11 + -10) = 0x12ab;
  uVar14 = FUN_1000_0000();
  *(undefined2 *)(puVar11 + -8) = uVar14;
  *(undefined2 *)(puVar11 + -10) = 0x1000;
  *(undefined2 *)(puVar11 + -0xc) = 0x12b0;
  FUN_111d_01db();
  return;
}
