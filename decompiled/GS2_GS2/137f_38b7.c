/* GS2.GS2 137f:38b7 undefined FUN_137f_38b7(void) */
void __cdecl16near FUN_137f_38b7(uint param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 unaff_DS;
  bool bVar9;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0;
  iStack_6 = 0;
  iStack_8 = 0;
  iStack_a = 0;
  iVar4 = *(int *)0x2ae0 - param_1;
  if (iVar4 != 0 && (int)param_1 <= *(int *)0x2ae0) {
    if (0x17 < iVar4) {
      return;
    }
    param_1 = *(uint *)0x2ae0;
    iStack_4 = iVar4;
  }
  iVar4 = (param_1 + 0x18) - *(int *)0x2ae2;
  if ((iVar4 != 0 && *(int *)0x2ae2 <= (int)(param_1 + 0x18)) && (iStack_6 = iVar4, 0x17 < iVar4)) {
    return;
  }
  iVar4 = *(int *)0x2ae4 - param_2;
  if (iVar4 != 0 && param_2 <= *(int *)0x2ae4) {
    if (0x11 < iVar4) {
      return;
    }
    param_2 = *(int *)0x2ae4;
    iStack_8 = iVar4;
  }
  iVar4 = (param_2 + 0x12) - *(int *)0x2ae6;
  if ((iVar4 != 0 && *(int *)0x2ae6 <= param_2 + 0x12) && (iStack_a = iVar4, 0x11 < iVar4)) {
    return;
  }
  uVar1 = *(undefined2 *)0x18cc;
  puVar7 = (undefined1 *)((param_1 >> 3) + param_2 * 0x28);
  uVar3 = *(undefined4 *)0x45f4;
  puVar6 = (undefined1 *)
           ((int)uVar3 + (param_3 >> 3) * 0xd80 + (param_3 & 7) * 0x18 + iStack_8 * 0xc0);
  out(0x3ce,0x205);
  out(0x3ce,8);
  iStack_a = (0x12 - iStack_8) - iStack_a;
  do {
    iVar4 = (0x18 - iStack_4) - iStack_6;
    puVar6 = puVar6 + iStack_4;
    puVar8 = puVar7;
    bVar5 = 0x80U >> ((byte)param_1 & 7) | -0x80 << 8 - ((byte)param_1 & 7);
    do {
      out(0x3cf,bVar5);
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar8 = *puVar2;
      bVar9 = (bool)(bVar5 & 1);
      bVar5 = bVar5 >> 1 | bVar9 << 7;
      if (bVar9) {
        puVar8 = puVar8 + 1;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar6 = puVar6 + iStack_6 + 0xa8;
    puVar7 = puVar7 + 0x28;
    iStack_a = iStack_a + -1;
  } while (iStack_a != 0);
  return;
}
