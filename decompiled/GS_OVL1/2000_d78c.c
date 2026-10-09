/* GS.GS2 2000:d78c undefined FUN_2000_d78c(void) */
undefined2 __cdecl16far
FUN_2000_d78c(undefined2 param_1,int *param_2,undefined2 ***param_3,int *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int *local_a;
  undefined2 ***local_8;
  int **ppiStack_6;
  
  uVar2 = 0xbf;
  ppiStack_6 = (int **)0xd797;
  func_0x00000eb0();
  *param_2 = 0;
  while ((uVar3 = uVar2, *(int *)0xc020 != 0 && (*(int *)0xc01c != 0))) {
    ppiStack_6 = (int **)*(undefined2 *)0xc37a;
    local_8 = (undefined2 ***)*(undefined2 *)0xc378;
    local_a = (int *)*(undefined2 *)0xc366;
    uVar3 = 0x20f4;
    iVar1 = func_0x0002118e(uVar2,*param_3,*param_4,*(undefined2 *)0xc364);
    if ((iVar1 == 0) || (*(char *)0xe28a != '\0')) break;
    ppiStack_6 = (int **)*(undefined2 *)0xc35c;
    local_8 = (undefined2 ***)*(undefined2 *)0xc35a;
    local_a = (int *)*(undefined2 *)0xc356;
    iVar1 = func_0x0002118e(0x20f4,*param_3,*param_4,*(undefined2 *)0xc354);
    if (iVar1 == 0) {
      if (*(char *)0xe28e != '\0') {
        ppiStack_6 = (int **)0x20f4;
        local_8 = (undefined2 ***)0xd82c;
        func_0x00020fe2();
      }
    }
    else if (*(char *)0xe28e == '\0') {
      ppiStack_6 = (int **)0x4;
      local_8 = (undefined2 ***)0x20f4;
      local_a = (int *)0xd81a;
      func_0x00020fbc();
    }
    ppiStack_6 = (int **)0x20f4;
    local_8 = (undefined2 ***)0xd831;
    func_0x00020f44();
    ppiStack_6 = (int **)0x20f4;
    local_8 = (undefined2 ***)0xd842;
    iVar1 = func_0x00020f6a();
    local_a = (int *)((iVar1 - *(int *)0xc366) + *param_4);
    if (*param_2 == 0) {
      if (*(char *)0xe288 != '\0') {
        ppiStack_6 = (int **)*param_4;
        local_8 = (undefined2 ***)*param_3;
        local_a = (int *)0x20f4;
        func_0x000287f4();
      }
      ppiStack_6 = &local_a;
      local_8 = &local_8;
      local_a = (int *)0x20f4;
      (*(code *)*(undefined2 *)0xc00e)();
      ppiStack_6 = (int **)(*(int *)0xc01c + -1);
      local_8 = (undefined2 ***)*param_4;
      local_a = (int *)*param_3;
      func_0x000256f2(0x20f4,local_8,local_a);
      if ((*(int *)0xc01c == 0xf) && (*(int *)0xc375 == 2)) {
        iVar1 = *(int *)0xc018;
        *(undefined2 *)0xc368 = *(undefined2 *)(iVar1 * 0xb + -0x435c);
        *(undefined2 *)0xc36a = *(undefined2 *)(iVar1 * 0xb + -0x435a);
        ppiStack_6 = (int **)0xc368;
        local_8 = (undefined2 ***)0xc4f0;
        local_a = (int *)0x20f4;
        iVar1 = func_0x00027cea();
        if (iVar1 == 0) {
          *(undefined2 *)0xc368 = 9999;
        }
        else {
          ppiStack_6 = (int **)0x20f4;
          local_8 = (undefined2 ***)0xd8dd;
          func_0x000219cc();
        }
      }
      if ((*(int *)0xc01c == 0x10) && (*(int *)0xbc7d == 2)) {
        iVar1 = *(int *)0xc018;
        *(undefined2 *)0xbc70 = *(undefined2 *)(iVar1 * 0xb + -0x435c);
        *(undefined2 *)0xbc72 = *(undefined2 *)(iVar1 * 0xb + -0x435a);
        ppiStack_6 = (int **)0xbc70;
        local_8 = (undefined2 ***)0xc504;
        local_a = (int *)0x20f4;
        iVar1 = func_0x00027cea();
        if (iVar1 == 0) {
          *(undefined2 *)0xbc70 = 9999;
        }
        else {
          ppiStack_6 = (int **)0x20f4;
          local_8 = (undefined2 ***)0xd928;
          func_0x000219cc();
        }
      }
      uVar2 = 0x20f4;
      ppiStack_6 = (int **)param_4;
      local_8 = param_3;
      local_a = param_2;
      FUN_2000_afe8(param_1);
    }
    else if (*param_2 == 1) {
      if (ppiStack_6 != (int **)0x0) {
        ppiStack_6 = (int **)param_4;
        local_8 = param_3;
        local_a = param_2;
        func_0x00021ce2(0x20f4,param_1);
      }
      ppiStack_6 = (int **)0x20f4;
      local_8 = (undefined2 ***)0xd965;
      iVar1 = func_0x0001fa76();
      ppiStack_6 = (int **)0x1da4;
      local_8 = (undefined2 ***)0xd96d;
      func_0x000219cc();
      ppiStack_6 = (int **)param_4;
      local_8 = param_3;
      local_a = param_2;
      uVar2 = 0x20f4;
      func_0x000210a4(0x20f4,param_1);
      if ((10 < *(int *)0xc01c) && (iVar1 != 0)) {
        ppiStack_6 = (int **)0x20f4;
        local_8 = (undefined2 ***)0xd993;
        func_0x00026cfc();
        return 0xffff;
      }
    }
    else {
      if (ppiStack_6 == (int **)0x0) {
        ppiStack_6 = (int **)param_4;
        local_8 = param_3;
        local_a = param_2;
        uVar2 = 0x20f4;
        iVar1 = func_0x000218fa(0x20f4,param_1);
        if (iVar1 == 0) {
          ppiStack_6 = (int **)0x20f4;
          uVar2 = 0x1da4;
          local_8 = (undefined2 ***)0xd9d3;
          func_0x0001f6d4();
        }
      }
      else {
        ppiStack_6 = (int **)*param_4;
        local_8 = (undefined2 ***)*param_3;
        local_a = (int *)0x20f4;
        uVar2 = 0x20f4;
        func_0x00022032();
      }
      ppiStack_6 = (int **)param_4;
      local_8 = param_3;
      local_a = param_2;
      FUN_2000_afe8(param_1);
    }
    *(undefined2 *)(*(int *)0xc358 + 1) = *param_3;
    *(int *)(*(int *)0xc358 + 3) = *param_4;
  }
  if (*(int *)0xc01c == 0xf) {
    *(undefined2 *)0xc368 = 9999;
  }
  if (*(int *)0xc01c == 0x10) {
    *(undefined2 *)0xbc70 = 9999;
  }
  local_8 = (undefined2 ***)0xda35;
  ppiStack_6 = (int **)uVar3;
  uVar2 = func_0x000219cc();
  return uVar2;
}
