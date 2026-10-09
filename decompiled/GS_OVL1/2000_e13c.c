/* GS.GS2 2000:e13c undefined FUN_2000_e13c(void) */
undefined2 __cdecl16far
FUN_2000_e13c(undefined2 param_1,int *param_2,undefined2 *param_3,undefined2 *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int *piStack_c;
  undefined2 *puStack_a;
  undefined2 *puStack_8;
  
  func_0x00000eb0();
  puStack_8 = (undefined2 *)0xffff;
  puStack_a = (undefined2 *)0xc8;
  piStack_c = (int *)0x140;
  iStack_e = 0;
  uStack_10 = 0;
  uStack_12 = 0x880;
  iStack_14 = 0xbf;
  local_16 = -0x1e9f;
  func_0x0000c8c0();
  puStack_8 = (undefined2 *)0xa;
  puStack_a = (undefined2 *)0xc87;
  uVar9 = 0xc87;
  piStack_c = (int *)0xe16b;
  uVar3 = func_0x0000c928();
  do {
    if (*param_2 == 0) {
      return uVar3;
    }
    puStack_a = (undefined2 *)0xe17e;
    puStack_8 = (undefined2 *)uVar9;
    iVar4 = func_0x00020f44();
    iVar4 = ((iVar4 - *(int *)0x290a / 2) + *(int *)(*(int *)0xc358 + 1)) - *(int *)0xc364;
    puStack_8 = (undefined2 *)0x20f4;
    puStack_a = (undefined2 *)0xe19d;
    func_0x00020f6a();
    puStack_a = (undefined2 *)0x0;
    while( true ) {
      if (*(int *)0xc018 <= (int)puStack_a) goto LAB_2000_e20e;
      piStack_c = (int *)*(undefined2 *)0x290c;
      iVar6 = (int)puStack_a * 0xb;
      uStack_10 = *(undefined2 *)(iVar6 + -0x435a);
      uStack_12 = *(undefined2 *)(iVar6 + -0x435c);
      iStack_14 = 0x20f4;
      local_16 = -0x1e0e;
      iStack_e = iVar4;
      puStack_a = (undefined2 *)*(int *)0x290a;
      puStack_8 = piStack_c;
      iVar5 = func_0x0002118e();
      if (iVar5 != 0) break;
      puStack_a = (undefined2 *)((int)puStack_a + 1);
    }
    piVar8 = &local_16;
    piVar7 = (int *)(iVar6 + -0x4362);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      piVar2 = piVar8;
      piVar8 = piVar8 + 1;
      piVar1 = piVar7;
      piVar7 = piVar7 + 1;
      *piVar2 = *piVar1;
    }
    *(char *)piVar8 = (char)*piVar7;
LAB_2000_e20e:
    if (*(int *)0xc4d8 != 9999) {
      piStack_c = (int *)*(undefined2 *)0x290c;
      puStack_a = (undefined2 *)*(int *)0x290a;
      uStack_10 = *(undefined2 *)0xc4da;
      uStack_12 = *(undefined2 *)0xc4d8;
      iStack_14 = 0x20f4;
      local_16 = -0x1dcf;
      iStack_e = iVar4;
      puStack_8 = piStack_c;
      iVar6 = func_0x0002118e();
      if (iVar6 != 0) {
        if (*(char *)0xe28c == '\x02') {
          return 0;
        }
        piVar8 = &local_16;
        piVar7 = (int *)0xc4d2;
        for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          piVar1 = piVar7;
          piVar7 = piVar7 + 1;
          *piVar2 = *piVar1;
        }
        *(char *)piVar8 = (char)*piVar7;
        puStack_a = (undefined2 *)0xffff;
      }
    }
    if (*(int *)0xc4e6 != 9999) {
      piStack_c = (int *)*(undefined2 *)0x290c;
      puStack_a = (undefined2 *)*(int *)0x290a;
      uStack_10 = *(undefined2 *)0xc4e8;
      uStack_12 = *(undefined2 *)0xc4e6;
      iStack_14 = 0x20f4;
      local_16 = -0x1d82;
      iStack_e = iVar4;
      puStack_8 = piStack_c;
      iVar6 = func_0x0002118e();
      if (iVar6 != 0) {
        piVar8 = &local_16;
        piVar7 = (int *)0xc4e0;
        for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          piVar1 = piVar7;
          piVar7 = piVar7 + 1;
          *piVar2 = *piVar1;
        }
        *(char *)piVar8 = (char)*piVar7;
        puStack_a = (undefined2 *)0xfffe;
      }
    }
    if (*(int *)0xc4f6 != 9999) {
      piStack_c = (int *)*(undefined2 *)0x290c;
      puStack_a = (undefined2 *)*(int *)0x290a;
      uStack_10 = *(undefined2 *)0xc4f8;
      uStack_12 = *(undefined2 *)0xc4f6;
      iStack_14 = 0x20f4;
      local_16 = -0x1d43;
      iStack_e = iVar4;
      puStack_8 = piStack_c;
      iVar6 = func_0x0002118e();
      if (iVar6 != 0) {
        piVar8 = &local_16;
        piVar7 = (int *)0xc4f0;
        for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          piVar1 = piVar7;
          piVar7 = piVar7 + 1;
          *piVar2 = *piVar1;
        }
        *(char *)piVar8 = (char)*piVar7;
        puStack_a = (undefined2 *)0xfffd;
      }
    }
    if (*(int *)0xc50a != 9999) {
      piStack_c = (int *)*(undefined2 *)0x290c;
      puStack_a = (undefined2 *)*(int *)0x290a;
      uStack_10 = *(undefined2 *)0xc50c;
      uStack_12 = *(undefined2 *)0xc50a;
      iStack_14 = 0x20f4;
      local_16 = -0x1d04;
      iStack_e = iVar4;
      puStack_8 = piStack_c;
      iVar4 = func_0x0002118e();
      if (iVar4 != 0) {
        piVar8 = &local_16;
        piVar7 = (int *)0xc504;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          piVar1 = piVar7;
          piVar7 = piVar7 + 1;
          *piVar2 = *piVar1;
        }
        *(char *)piVar8 = (char)*piVar7;
        puStack_a = (undefined2 *)0xfffc;
      }
    }
    if ((int)puStack_a < *(int *)0xc018) {
      *(int *)0xc394 = local_16;
      *(int *)0xc392 = iStack_14;
      uVar3 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
      iVar4 = (int)*(undefined4 *)0xb85c;
      if (*(char *)(iVar4 + iStack_14 * 8 + 2) == '\x01') {
        uVar3 = *(undefined2 *)0xa25e;
        *(int *)0xc38e =
             *(int *)((int)*(undefined4 *)0xb860 + local_16 * 0x27 + 0x19) * 0x1a + *(int *)0xa25c +
             1;
        *(undefined2 *)0xc390 = uVar3;
      }
      else {
        uVar9 = *(undefined2 *)0xa27a;
        *(int *)0xc38e = (uint)*(byte *)(iVar4 + iStack_14 * 8 + 1) * 0x1b + *(int *)0xa278 + 2;
        *(undefined2 *)0xc390 = uVar9;
      }
      puStack_8 = (undefined2 *)&stack0xfffc;
      puStack_a = (undefined2 *)0x0;
      piStack_c = (int *)0x20f4;
      iStack_e = 0xe39b;
      func_0x00024a42();
    }
    puStack_8 = param_4;
    puStack_a = param_3;
    piStack_c = param_2;
    iStack_e = param_1;
    uStack_10 = 0x20f4;
    uStack_12 = 0xe3af;
    func_0x0001afe8();
    puStack_8 = (undefined2 *)0x1abf;
    puStack_a = (undefined2 *)0xe3b7;
    func_0x00021070();
    *(undefined2 *)(*(int *)0xc358 + 1) = *param_3;
    *(undefined2 *)(*(int *)0xc358 + 3) = *param_4;
    puStack_8 = (undefined2 *)0x20f4;
    uVar9 = 0x20f4;
    puStack_a = (undefined2 *)0xe3d4;
    uVar3 = func_0x000210f2();
  } while( true );
}
