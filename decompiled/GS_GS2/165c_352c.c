/* GS.GS2 165c:352c undefined FUN_165c_352c(void) */
undefined2 __cdecl16far FUN_165c_352c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int iStackY_28;
  uint uStackY_26;
  int iStackY_24;
  int iStackY_20;
  int iStackY_1e;
  int iStackY_1a;
  int iVar7;
  int local_12;
  undefined2 uStack_10;
  int local_e;
  int iStack_c;
  int *piStack_a;
  int *piStack_8;
  
  FUN_10bf_02c0();
  if (*(int *)0x7a1c == 0) {
    piStack_8 = (int *)0x10bf;
    piStack_a = (int *)0x9b04;
    FUN_165c_37e0();
  }
  if (param_1 == 0) {
    iStackY_28 = 0x20;
    iStackY_24 = 0x20;
    iVar7 = 0x40;
  }
  else {
    uStackY_26 = (uint)(*(char *)0xad1b == '\0');
    piStack_8 = (int *)param_1;
    piStack_a = (int *)0x10bf;
    iStack_c = 0x9b3d;
    iVar3 = FUN_165c_27be();
    iVar7 = *(int *)(param_1 * 2 + -0x5358);
    iVar5 = (uint)*(byte *)(iVar7 + -0x4794) * 0x27;
    uVar6 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar4 = (int)*(undefined4 *)0xb860;
    uVar1 = *(uint *)(iVar4 + iVar5 + 0x23);
    uVar2 = *(uint *)(iVar4 + iVar5 + 0x25);
    piStack_8 = &local_12;
    piStack_a = &local_e;
    local_e = 0x10bf;
    uStack_10 = 0x9baa;
    iStack_c = iVar7;
    FUN_165c_26c4();
    piStack_8 = (int *)0x0;
    piStack_a = (int *)0x2000;
    uStack_10 = 0x10bf;
    local_12 = -0x6443;
    iStackY_1a = FUN_10bf_2efc();
    piStack_8 = (int *)0x0;
    piStack_a = (int *)0x2000;
    iStack_c = uStack_10;
    local_e = local_12;
    uStack_10 = 0x10bf;
    local_12 = -0x6430;
    iStackY_1e = FUN_10bf_2efc();
    if (*(int *)(iVar7 * 0x20 + -0x5d7c) == 0 && *(int *)(iVar7 * 0x20 + -0x5d7e) == 0) {
      local_12 = *(int *)0xb99a;
      uStack_10 = *(undefined2 *)0xb99c;
    }
    else if ((iVar3 != 1) && (iVar3 != 6)) {
      local_12 = *(int *)(param_3 * 0x20 + -0x5d7a);
      uStack_10 = *(undefined2 *)(param_3 * 0x20 + -0x5d78);
    }
    piStack_8 = (int *)0x0;
    piStack_a = (int *)0x2000;
    iStack_c = uStack_10;
    local_e = local_12;
    uStack_10 = 0x10bf;
    local_12 = -0x63c2;
    iStackY_28 = FUN_10bf_2efc();
    piStack_a = (int *)0x0;
    iStack_c = 0x2000;
    local_e = 0x2000;
    uStack_10 = 0x2000;
    local_12 = 0x10bf;
    piStack_8 = (int *)iStackY_28;
    iStackY_24 = FUN_10bf_2efc();
    uStack_10 = 0x10bf;
    local_12 = -0x63a0;
    local_e = iStackY_1a;
    iStack_c = iStackY_1e;
    piStack_a = (int *)iStackY_24;
    iVar7 = FUN_165c_0d2e();
    if (iVar7 != 0) {
      iStackY_24 = ((iStackY_24 - iStackY_1a) * 4) / iVar7 + iStackY_1a;
      iStackY_28 = ((iStackY_28 - iStackY_1e) * 4) / iVar7 + iStackY_1e;
    }
    if ((*(int *)(param_1 * 0x3e + -0x46fc) == 2) || (*(int *)(param_1 * 0x3e + -0x46fc) == 1)) {
      iVar7 = 8;
    }
    else {
      iVar7 = 6;
    }
    if ((uVar2 & 0x20) != 0 || (uVar1 & 0x400) != 0) {
      iVar7 = iVar7 << 1;
    }
  }
  iStackY_20 = 0;
  do {
    if (99 < iStackY_20) {
      return 0;
    }
    piStack_a = (int *)iStackY_28;
    iStack_c = iStackY_24;
    local_e = 0x10bf;
    uStack_10 = 0x9ce7;
    piStack_8 = (int *)iVar7;
    FUN_165c_314e();
    if (*(char *)0x7a3a != '\0') {
      return 0;
    }
    if (*(char *)0x7a34 != '\0') {
      return 0;
    }
    piStack_8 = (int *)0x0;
    piStack_a = (int *)0x2000;
    iStack_c = *(undefined2 *)0xa27e;
    local_e = *(int *)0xa27c;
    uStack_10 = 0x10bf;
    local_12 = -0x62f2;
    iStackY_24 = FUN_10bf_2efc();
    piStack_8 = (int *)0x0;
    piStack_a = (int *)0x2000;
    iStack_c = *(int *)0xaca2;
    local_e = *(int *)0xaca0;
    uStack_10 = 0x10bf;
    local_12 = -0x62dd;
    iStackY_28 = FUN_10bf_2efc();
    if (param_1 == 0) {
LAB_165c_3782:
      if (param_2 == 0) {
LAB_165c_37cb:
        piStack_8 = (int *)0x10bf;
        piStack_a = (int *)0x9d8f;
        FUN_165c_1ad4();
        return 0;
      }
      iStack_c = 0;
      local_e = 0x2000;
      uStack_10 = *(undefined2 *)0xb90c;
      local_12 = *(int *)0xb90a;
      piStack_a = (int *)iStackY_24;
      piStack_8 = (int *)iStackY_28;
      iStack_c = FUN_10bf_2efc();
      local_e = 0;
      uStack_10 = 0x2000;
      local_12 = *(int *)0xb908;
      iVar7 = *(int *)0xb906;
      local_e = FUN_10bf_2efc(iVar7);
      uStack_10 = 0x10bf;
      local_12 = -0x6288;
      iVar3 = FUN_165c_0d2e();
      if ((int)((-(uint)(uStackY_26 == 0) & 4) + 8) < iVar3) goto LAB_165c_37cb;
    }
    else {
      piStack_8 = (int *)iStackY_1e;
      piStack_a = (int *)iStackY_1a;
      uStack_10 = 0x10bf;
      local_12 = -0x62c6;
      local_e = iStackY_24;
      iStack_c = iStackY_28;
      iVar3 = FUN_165c_0d2e();
      if ((int)piStack_a < iVar3) goto LAB_165c_3782;
    }
    iStackY_20 = iStackY_20 + 1;
  } while( true );
}
