/* GS2.GS2 1851:079d undefined FUN_1851_079d(void) */
void __cdecl16near FUN_1851_079d(void)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 unaff_DS;
  
  pcVar2 = (code *)swi(0x21);
  bVar3 = (*pcVar2)();
  if (2 < bVar3) {
    *(undefined1 *)0x9dc = 0x20;
  }
  if ((*(uint *)0xb5f & 0x100) != 0) {
    FUN_1851_05eb();
  }
  if (((*(uint *)0xb5f & 2) != 0) ||
     (((*(int *)0xb63 != 0 || *(int *)0xb65 != 0) || *(int *)0xb67 != 0) || *(int *)0xb69 != 0)) {
    iVar5 = *(int *)0xb6b;
    puVar7 = (uint *)0xb71;
    uVar4 = 0xffff;
    uVar6 = 0;
    do {
      uVar1 = *puVar7;
      if (uVar1 != 0) {
        if (uVar1 < uVar4) {
          uVar4 = uVar1;
        }
        if (uVar6 < uVar1 + puVar7[4]) {
          uVar6 = uVar1 + puVar7[4];
        }
      }
      puVar7 = puVar7 + 9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(uint *)0xb4b = uVar4;
    *(uint *)0xb4d = uVar6;
    if ((*(uint *)0xb5f & 2) != 0) {
      FUN_1851_05b3();
    }
  }
  puVar9 = (undefined2 *)0x0;
  iVar8 = 0xb71;
  iVar5 = DAT_1851_0b6b;
  do {
    if (((puVar9 == (undefined2 *)0x0) &&
        (puVar9 = (undefined2 *)*(int *)(iVar8 + 2), puVar9 != (undefined2 *)0x0)) &&
       ((*(byte *)(iVar8 + 7) & 8) != 0)) {
      puVar9 = (undefined2 *)*puVar9;
    }
    if ((*(byte *)(iVar8 + 7) & 1) != 0) {
      FUN_1851_021c();
    }
    iVar8 = iVar8 + 0x12;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((*(int *)0x9e2 == 0) && (puVar9 != (undefined2 *)0x0)) {
    FUN_1851_0429();
  }
  if (*(int *)0xb63 != 0 || *(int *)0xb65 != 0) {
    *(undefined2 *)*(undefined4 *)0xb63 = *(undefined2 *)0xb4b;
  }
  if (*(int *)0xb67 != 0 || *(int *)0xb69 != 0) {
    *(undefined2 *)*(undefined4 *)0xb67 = *(undefined2 *)0xb4d;
  }
  return;
}
