/* GS.GS2 2092:0024 undefined FUN_2092_0024(void) */
int __cdecl16far FUN_2092_0024(int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 ****ppppuVar4;
  undefined2 *****pppppuVar5;
  int iVar6;
  undefined2 ****ppppuVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined2 ****local_a;
  undefined2 ****local_8;
  
  FUN_10bf_02c0();
  if (param_1._2_2_ == 0 && (int *)param_1 == (int *)0x0) {
    local_8 = (undefined2 ****)0x2;
    local_a = (undefined2 ****)0x10bf;
    iVar3 = FUN_2092_0282();
  }
  else if (*param_1 == 0) {
    local_8 = (undefined2 ****)0x0;
    local_a = (undefined2 ****)0x10;
    ppppuVar7 = (undefined2 ****)(param_2 + 0xf);
    ppppuVar4 = (undefined2 ****)FUN_10bf_2efc(ppppuVar7,param_3 + (uint)(0xfff0 < param_2));
    if (ppppuVar4 != (undefined2 ****)0x0) {
      if (ppppuVar7 == (undefined2 ****)0x0) {
        local_8 = &local_8;
        local_a = ppppuVar4;
        iVar3 = FUN_10bf_2d96(0x10bf);
        if (iVar3 != 0) {
          local_a = (undefined2 ****)0x3;
          iVar3 = FUN_2092_0282();
          return iVar3;
        }
        *param_1 = 0;
        ((int *)param_1)[1] = (int)local_8;
        return 0;
      }
      local_8 = &local_a;
      local_a = ppppuVar7;
      iVar3 = FUN_10bf_2ee2(0x10bf,ppppuVar4);
      if (iVar3 == 0) {
        return iVar3;
      }
      local_a = &local_8;
      iVar11 = 0x10bf;
      iVar3 = FUN_10bf_2d96(0x10bf,0x9d8);
      if (iVar3 != 0) {
        ((int *)param_1)[1] = 0;
        *param_1 = 0;
        FUN_10bf_2ed4(0x10bf,iVar11);
        iVar3 = FUN_2092_0282(3);
        return iVar3;
      }
      iVar6 = iVar11;
      pppppuVar5 = (undefined2 *****)local_8;
      for (iVar3 = *(int *)0x3; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar10 = (undefined1 *)0x0;
        puVar9 = (undefined1 *)0x0;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        pppppuVar5 = (undefined2 *****)((int)pppppuVar5 + 1);
        iVar6 = iVar6 + 1;
      }
      *param_1 = 0;
      ((int *)param_1)[1] = (int)local_8;
      FUN_10bf_2ed4(0x10bf,iVar11);
      return 0;
    }
    if (ppppuVar7 != (undefined2 ****)0x0) {
      local_a = (undefined2 ****)0x10bf;
      local_8 = ppppuVar7;
      FUN_10bf_2ed4();
    }
    iVar3 = 0;
    ((int *)param_1)[1] = 0;
    *param_1 = 0;
  }
  else {
    local_8 = (undefined2 ****)0x1;
    local_a = (undefined2 ****)0x10bf;
    iVar3 = FUN_2092_0282();
  }
  return iVar3;
}
