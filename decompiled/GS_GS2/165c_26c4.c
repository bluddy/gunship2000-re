/* GS.GS2 165c:26c4 undefined FUN_165c_26c4(void) */
void __cdecl16far FUN_165c_26c4(int param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int iStack_6;
  
  FUN_10bf_02c0();
  iVar4 = param_1 * 0x20;
  if ((*(byte *)(iVar4 + -0x5d80) & 3) != 0) {
    if ((*(byte *)(param_1 * 0x20 + -0x5d80) & 2) != 0) {
      param_3[1] = 0;
      *param_3 = 0;
      param_2[1] = 0;
      *param_2 = 0;
    }
    while ((*(byte *)(param_1 * 0x20 + -0x5d80) & 2) == 0) {
      param_1 = param_1 + -1;
    }
    param_1 = param_1 * 0x20;
    if (*(int *)(param_1 + -0x5d7c) == 0 && *(int *)(param_1 + -0x5d7e) == 0) {
      unaff_SI = *(int *)(param_1 + -0x5d7a);
    }
    iStack_6 = 0;
    while ((iStack_6 < *(int *)0xb8dc && (unaff_SI != 0))) {
      if ((*(byte *)((int)*(undefined4 *)0xb8d4 + iStack_6 * 9 + 8) & 0x40) != 0) {
        unaff_SI = unaff_SI + -1;
      }
      iStack_6 = iStack_6 + 1;
    }
    iStack_6 = iStack_6 * 9;
    uVar5 = (undefined2)((ulong)*(undefined4 *)0xb8d4 >> 0x10);
    iVar4 = (int)*(undefined4 *)0xb8d4;
    uVar3 = *(uint *)(iStack_6 + iVar4);
    iVar4 = *(int *)(iStack_6 + iVar4 + 2);
    puVar1 = param_2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    param_2[1] = param_2[1] + iVar4 + (uint)CARRY2(uVar2,uVar3);
    uVar5 = (undefined2)((ulong)*(undefined4 *)0xb8d4 >> 0x10);
    iVar4 = (int)*(undefined4 *)0xb8d4;
    uVar3 = *(uint *)(iVar4 + iStack_6 + 4);
    iVar4 = *(int *)(iVar4 + iStack_6 + 6);
    puVar1 = param_3;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    param_3[1] = param_3[1] + iVar4 + (uint)CARRY2(uVar2,uVar3);
    return;
  }
  uVar2 = *(uint *)(iVar4 + -0x5d7c);
  *param_2 = *(uint *)(iVar4 + -0x5d7e);
  param_2[1] = uVar2;
  uVar2 = *(uint *)(iVar4 + -0x5d78);
  *param_3 = *(uint *)(iVar4 + -0x5d7a);
  param_3[1] = uVar2;
  return;
}
