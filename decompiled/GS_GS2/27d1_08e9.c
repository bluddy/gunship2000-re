/* GS.GS2 27d1:08e9 undefined FUN_27d1_08e9(void) */
void __cdecl16near FUN_27d1_08e9(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 unaff_DS;
  
  pcVar4 = (code *)swi(0x21);
  bVar6 = (*pcVar4)();
  if (2 < bVar6) {
    *(undefined1 *)0xb97 = 0xa0;
  }
  if ((*(uint *)0xd21 & 0x100) != 0) {
    FUN_27d1_06c3();
  }
  if (((*(uint *)0xd21 & 2) != 0) ||
     (((*(int *)0xd25 != 0 || *(int *)0xd27 != 0) || *(int *)0xd29 != 0) || *(int *)0xd2b != 0)) {
    iVar8 = *(int *)0xd2d;
    puVar10 = (uint *)0xd33;
    uVar7 = 0xffff;
    uVar9 = 0;
    do {
      uVar3 = *puVar10;
      if (uVar3 != 0) {
        if (uVar3 < uVar7) {
          uVar7 = uVar3;
        }
        if (uVar9 < uVar3 + puVar10[4]) {
          uVar9 = uVar3 + puVar10[4];
        }
      }
      puVar10 = puVar10 + 9;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(uint *)0xd05 = uVar7;
    *(uint *)0xd07 = uVar9;
    if ((*(uint *)0xd21 & 2) != 0) {
      FUN_27d1_068b();
    }
  }
  puVar12 = (undefined2 *)0x0;
  iVar11 = 0xd33;
  iVar8 = DAT_27d1_0d2d;
  do {
    if (((puVar12 == (undefined2 *)0x0) &&
        (puVar12 = (undefined2 *)*(int *)(iVar11 + 2), puVar12 != (undefined2 *)0x0)) &&
       ((*(byte *)(iVar11 + 7) & 8) != 0)) {
      puVar12 = (undefined2 *)*puVar12;
    }
    if ((*(byte *)(iVar11 + 7) & 1) != 0) {
      FUN_27d1_025c();
    }
    iVar11 = iVar11 + 0x12;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if ((*(int *)0xb9e == 0) && (puVar12 != (undefined2 *)0x0)) {
    FUN_27d1_04e4();
  }
  FUN_28d4_160a();
  if (*(int *)0xd25 != 0 || *(int *)0xd27 != 0) {
    *(undefined2 *)*(undefined4 *)0xd25 = *(undefined2 *)0xd05;
  }
  if (*(int *)0xd29 != 0 || *(int *)0xd2b != 0) {
    *(undefined2 *)*(undefined4 *)0xd29 = *(undefined2 *)0xd07;
  }
  uVar5 = (ulong)DAT_27d1_0b7e >> 0x10;
  puVar12 = (undefined2 *)DAT_27d1_0b7e;
  *DAT_27d1_0b7e = 0x76c;
  puVar12[1] = 0x27d1;
  uVar5 = (ulong)DAT_27d1_0b7a >> 0x10;
  puVar12 = (undefined2 *)DAT_27d1_0b7a;
  LOCK();
  uVar1 = *DAT_27d1_0b7a;
  *DAT_27d1_0b7a = 0x772;
  UNLOCK();
  LOCK();
  uVar2 = puVar12[1];
  puVar12[1] = 0x27d1;
  UNLOCK();
  *(undefined2 *)0xb86 = uVar1;
  *(undefined2 *)0xb88 = uVar2;
  return;
}
