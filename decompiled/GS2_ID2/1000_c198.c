/* GS2.GS2 1000:c198 undefined FUN_1000_c198(void) */
void __cdecl16far
FUN_1000_c198(undefined2 param_1,int *param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined2 unaff_DS;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined1 local_6 [2];
  int local_4;
  
  iVar6 = param_3 * 4;
  piVar7 = (int *)(iVar6 + 0xd2c);
  if (*(int *)(iVar6 + 0xd2e) == 0 && *piVar7 == 0) {
    *piVar7 = (int)(int *)param_2;
    *(undefined2 *)(iVar6 + 0xd2e) = param_2._2_2_;
    func_0x00002f72(0x1000,param_1,param_3 << 2,(param_3 < 0) << 1 | param_3 << 1 < 0,0);
    func_0x00003648(0x2a2,param_1,&local_a);
    func_0x00002f72(0x2a2,param_1,local_a,uStack_8,0);
    func_0x00003648(0x2a2,param_1,&local_4);
    func_0x00003648(0x2a2,param_1,*(undefined2 *)0x3560,*(undefined2 *)0x3562,local_4,local_6);
    iVar6 = *(int *)0x3562;
    ((int *)param_2)[7] = *(int *)0x3560;
    ((int *)param_2)[8] = iVar6;
    *(int *)0x3560 = *(int *)0x3560 + local_4;
    func_0x00003648(0x2a2,param_1,&local_4);
    if (local_4 == 0) {
      if (param_5 != -1) {
        uVar3 = *(undefined2 *)0x32d8;
        iVar6 = param_5 * 10;
        *(undefined2 *)(iVar6 + 0x2262) = 0;
        *(undefined2 *)(iVar6 + 0x226a) = 0;
        *(undefined2 *)(iVar6 + 0x2268) = 0;
        ((int *)param_2)[1] = 0;
        *param_2 = 0;
      }
    }
    else {
      func_0x00003648(0x2a2,param_1,*(undefined2 *)0x3560,*(undefined2 *)0x3562,local_4,local_6);
      if (param_5 != -1) {
        iVar6 = *(int *)0x3560;
        iVar4 = *(int *)0x3562;
        uVar3 = *(undefined2 *)0x32d8;
        *(int *)(param_5 * 10 + 0x2268) = iVar6;
        *(int *)(param_5 * 10 + 0x226a) = iVar4;
        *param_2 = iVar6;
        ((int *)param_2)[1] = iVar4;
      }
      *(int *)0x3560 = *(int *)0x3560 + local_4;
    }
    func_0x00003648(0x2a2,param_1,&local_4);
    func_0x00003648(0x2a2,param_1,*(undefined2 *)0x3560,*(undefined2 *)0x3562,local_4,local_6);
    iVar6 = *(int *)0x3562;
    ((int *)param_2)[0xc] = *(int *)0x3560;
    ((int *)param_2)[0xd] = iVar6;
    *(int *)0x3560 = *(int *)0x3560 + local_4;
    func_0x00003648(0x2a2,param_1,&local_4);
    func_0x00003648(0x2a2,param_1,*(undefined2 *)0x3566);
    ((int *)param_2)[0xb] = *(int *)0x3566;
    *(int *)0x3566 = *(int *)0x3566 + local_4;
    func_0x00003648(0x2a2,param_1,&local_4);
    func_0x00003648(0x2a2,param_1,*(undefined2 *)0x3566);
    ((int *)param_2)[9] = *(int *)0x3566;
    *(int *)0x3566 = *(int *)0x3566 + local_4;
  }
  else {
    piVar7 = (int *)*piVar7;
    uVar3 = *(undefined2 *)(iVar6 + 0xd2e);
    piVar8 = (int *)param_2;
    for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
      piVar2 = piVar8;
      piVar8 = piVar8 + 1;
      piVar1 = piVar7;
      piVar7 = piVar7 + 1;
      *piVar2 = *piVar1;
    }
    if (param_5 != -1) {
      iVar6 = *param_2;
      iVar4 = ((int *)param_2)[1];
      uVar3 = *(undefined2 *)0x32d8;
      iVar5 = param_5 * 10;
      *(int *)(iVar5 + 0x2268) = iVar6;
      *(int *)(iVar5 + 0x226a) = iVar4;
      if (iVar4 == 0 && iVar6 == 0) {
        *(undefined2 *)(iVar5 + 0x2262) = 0;
      }
    }
  }
  iVar6 = FUN_1000_c0a4(((int *)param_2)[7],((int *)param_2)[8]);
  ((int *)param_2)[6] = iVar6;
  if (param_5 != -1) {
    if ((char)(param_4 >> 8) != '\0') {
      ((int *)param_2)[10] = *(int *)((param_4 >> 8) * 2 + 0x310e);
      return;
    }
    if ((param_4 & 8) != 0) {
      ((int *)param_2)[10] = 0x163c;
      return;
    }
  }
  ((int *)param_2)[10] = 0x13bf;
  return;
}
