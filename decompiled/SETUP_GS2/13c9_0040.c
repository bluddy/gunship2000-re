/* SETUP.GS2 13c9:0040 undefined FUN_13c9_0040(void) */
int __cdecl16far FUN_13c9_0040(byte *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int iVar5;
  
  FUN_111d_02c6();
  for (iVar5 = 0; iVar5 < (int)(uint)param_1[3]; iVar5 = iVar5 + 1) {
    iVar4 = *(int *)(iVar5 * 0x11 + *(int *)(param_1 + 9) + 2);
    if (iVar4 == 0) {
      iVar4 = iVar5 * 0x11 + *(int *)(param_1 + 9);
      if (*(int *)(iVar4 + 7) != 0) {
        *(undefined2 *)(iVar4 + 5) = *(undefined2 *)*(undefined2 *)(iVar4 + 7);
        iVar4 = *(int *)(param_1 + 9) + iVar5 * 0x11;
        *(undefined1 *)(*(int *)(iVar4 + 9) + 8) = *(undefined1 *)(iVar4 + 5);
      }
    }
    else if ((iVar4 == 2) &&
            (iVar4 = iVar5 * 0x11 + *(int *)(param_1 + 9), *(int *)(iVar4 + 7) != 0)) {
      *(undefined2 *)(iVar4 + 5) = *(undefined2 *)*(undefined2 *)(iVar4 + 7);
    }
  }
  uVar1 = (uint)(param_1[4] != 0);
  FUN_1386_00b2(param_1[5],param_1[4],(uint)*param_1 + uVar1 * -2,param_1[1] - uVar1,
                uVar1 * 4 + (uint)param_1[2],uVar1 * 2 + (uint)param_1[3]);
  FUN_13c9_0156(param_1);
  iVar5 = FUN_13c9_02ee(param_1);
  if (iVar5 != 0x1b) {
    iVar3 = (uint)param_1[8] * 0x11;
    iVar4 = *(int *)(param_1 + 9);
    if (*(int *)(iVar4 + iVar3 + 0xf) != 0 || *(int *)(iVar4 + iVar3 + 0xd) != 0) {
      puVar2 = (undefined2 *)(iVar4 + iVar3 + 0xd);
      (*(code *)*puVar2)(0x1386);
    }
  }
  FUN_1386_007c();
  return iVar5;
}
