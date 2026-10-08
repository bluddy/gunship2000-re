/* SETUP.GS2 111d:1b1e undefined FUN_111d_1b1e(void) */
undefined2 * __cdecl16far FUN_111d_1b1e(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  bool bVar8;
  
  bVar8 = false;
  if (param_1 == (undefined2 *)0x0) {
    param_1 = (undefined2 *)FUN_111d_1553(param_2);
  }
  else if (param_2 == 0) {
    FUN_111d_1532(param_1);
    param_1 = (undefined2 *)0x0;
  }
  else {
    uVar4 = param_1[-1];
    uVar5 = 0x93c;
    FUN_111d_1b8c(param_2);
    if (bVar8) {
      puVar3 = (undefined2 *)FUN_111d_1553(param_2,uVar5);
      if (puVar3 == (undefined2 *)0x0) {
        FUN_111d_1b8c();
        param_1 = (undefined2 *)0x0;
      }
      else {
        puVar6 = param_1;
        puVar7 = puVar3;
        for (uVar4 = uVar4 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        FUN_111d_1532(param_1);
        param_1 = puVar3;
      }
    }
    else {
      *(byte *)(param_1 + -1) = *(byte *)(param_1 + -1) & 0xfe;
    }
  }
  return param_1;
}
