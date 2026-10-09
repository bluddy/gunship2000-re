/* GS.GS2 2000:a9c5 undefined FUN_2000_a9c5(void) */
void __cdecl16near FUN_2000_a9c5(int param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_DS;
  undefined2 uVar10;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0;
  iStack_6 = 0;
  iStack_8 = 0;
  iStack_a = 0;
  iVar4 = *(int *)0xbc80 - param_1;
  if (iVar4 != 0 && param_1 <= *(int *)0xbc80) {
    if (0x17 < iVar4) {
      return;
    }
    param_1 = *(int *)0xbc80;
    iStack_4 = iVar4;
  }
  iVar4 = (param_1 + 0x18) - *(int *)0xbc84;
  if ((iVar4 != 0 && *(int *)0xbc84 <= param_1 + 0x18) && (iStack_6 = iVar4, 0x17 < iVar4)) {
    return;
  }
  iVar4 = *(int *)0xbc82 - param_2;
  if (iVar4 != 0 && param_2 <= *(int *)0xbc82) {
    if (0x11 < iVar4) {
      return;
    }
    param_2 = *(int *)0xbc82;
    iStack_8 = iVar4;
  }
  iVar4 = (param_2 + 0x12) - *(int *)0xbc86;
  if ((iVar4 != 0 && *(int *)0xbc86 <= param_2 + 0x12) && (iStack_a = iVar4, 0x11 < iVar4)) {
    return;
  }
  uVar1 = *(undefined2 *)0xbc88;
  puVar9 = (undefined2 *)(param_1 + param_2 * 0x100 + ((uint)(param_2 * 0x100) >> 2));
  uVar10 = (undefined2)((ulong)*(undefined4 *)0xbc8a >> 0x10);
  puVar7 = (undefined1 *)
           ((int)*(undefined4 *)0xbc8a + (param_3 >> 3) * 0xd80 + (param_3 & 7) * 0x18 +
           iStack_8 * 0xc0);
  iStack_a = (0x12 - iStack_8) - iStack_a;
  do {
    uVar5 = (0x18 - iStack_4) - iStack_6;
    puVar8 = (undefined2 *)(puVar7 + iStack_4);
    for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar2;
    }
    for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar3 = puVar9;
      puVar9 = (undefined2 *)((int)puVar9 + 1);
      puVar2 = puVar8;
      puVar8 = (undefined2 *)((int)puVar8 + 1);
      *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    }
    puVar7 = (undefined1 *)((int)puVar8 + iStack_6 + 0xa8);
    puVar9 = (undefined2 *)((int)puVar9 + iStack_6 + iStack_4 + 0x128);
    iStack_a = iStack_a + -1;
  } while (iStack_a != 0);
  return;
}
