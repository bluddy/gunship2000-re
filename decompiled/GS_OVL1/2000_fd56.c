/* GS.GS2 2000:fd56 undefined FUN_2000_fd56(void) */
/* WARNING: Control flow encountered bad instruction data */

void FUN_2000_fd56(undefined2 param_1,undefined2 param_2,int param_3,undefined2 *param_4,
                  int *param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iVar7;
  int local_e;
  undefined2 *puStack_c;
  int *piStack_a;
  int iStack_8;
  
  func_0x00000eb0();
  iStack_8 = *(undefined2 *)0x297c;
  piStack_a = (int *)*(undefined2 *)0x297a;
  puStack_c = (undefined2 *)*(undefined2 *)0x2978;
  local_e = *(int *)0x2976;
  iVar7 = *param_5;
  iVar3 = func_0x0002118e(0xbf,*param_4);
  if ((iVar3 == 0) && (iVar7 == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_6 == 0) {
    for (iVar7 = 1; iVar7 < 0x15; iVar7 = iVar7 + 1) {
      iVar7 = iVar7 * 9;
      iStack_8 = *(undefined2 *)(iVar7 + 0x297c);
      piStack_a = (int *)*(undefined2 *)(iVar7 + 0x297a);
      puStack_c = (undefined2 *)*(undefined2 *)(iVar7 + 0x2978);
      local_e = *(int *)(iVar7 + 0x2976);
      iVar7 = *param_5;
      iVar3 = func_0x0002118e(0x20f4,*param_4);
      if (iVar3 != 0) break;
    }
  }
  if (iVar7 < 0x15) {
    iStack_8 = iVar7 * 9 + 0x2976;
    piStack_a = (int *)0x20f4;
    puStack_c = (undefined2 *)0xfdfd;
    func_0x000214fc();
  }
  if ((0 < iVar7) && (iVar7 < 0xb)) {
    if (iVar7 == *(int *)0xc01c) {
      iStack_8 = 0x20f4;
      piStack_a = (int *)0xfe1f;
      func_0x00026cfc();
      iStack_8 = 10;
      piStack_a = (int *)0x20f4;
      puStack_c = (undefined2 *)0xfe26;
      func_0x000112a0();
      *(undefined2 *)0xc01c = 0;
    }
    else {
      iStack_8 = 0x20f4;
      piStack_a = (int *)0xfe36;
      iVar3 = FUN_2000_fc5e();
      if ((10 < *(int *)0xc01c) && (iVar3 == 9999)) {
        iStack_8 = *(int *)0xc01c * 9 + 0x29da;
        piStack_a = (int *)0x20f4;
        puStack_c = (undefined2 *)0xfe58;
        func_0x000214fc();
      }
      if ((*(int *)0xc01c != 0) && (*(int *)0xc01c < 0xb)) {
        iStack_8 = *(int *)0xc01c * 9 + 0x2976;
        piStack_a = (int *)0x20f4;
        puStack_c = (undefined2 *)0xfe7c;
        func_0x000214fc();
      }
      piVar5 = &local_e;
      piVar4 = (int *)(*(int *)0xc018 * 0xb + -0x4362);
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        piVar2 = piVar5;
        piVar5 = piVar5 + 1;
        piVar1 = piVar4;
        piVar4 = piVar4 + 1;
        *piVar2 = *piVar1;
      }
      *(char *)piVar5 = (char)*piVar4;
      iStack_8 = 0x20f4;
      uVar6 = 0x20f4;
      piStack_a = (int *)0xfea4;
      func_0x000219cc();
      if ((*(char *)0xe289 == '\0') && (*(int *)0xc020 != 0)) {
        iVar3 = iVar7 * 9;
        iStack_8 = *(int *)(iVar3 + 0x2978) + -1;
        piStack_a = (int *)(*(int *)(iVar3 + 0x2976) + -1);
        puStack_c = (undefined2 *)0x880;
        local_e = *(int *)(iVar3 + 0x297c) + 3;
        uVar6 = 0x1658;
        func_0x00016658(0x20f4,0x8a4,piStack_a,iStack_8,*(int *)(iVar3 + 0x297a) + 3);
      }
      iStack_8 = iVar7 + -1;
      piStack_a = param_5;
      puStack_c = param_4;
      local_e = param_3;
      iVar7 = FUN_2000_e3dc(param_2);
      if (iVar7 == 0) {
        piVar4 = (int *)(*(int *)0xc018 * 0xb + -0x4362);
        piVar5 = &local_e;
        for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
          piVar2 = piVar4;
          piVar4 = piVar4 + 1;
          piVar1 = piVar5;
          piVar5 = piVar5 + 1;
          *piVar2 = *piVar1;
        }
        *(char *)piVar4 = (char)*piVar5;
        if (10 < *(int *)0xc01c) {
          iStack_8 = *(int *)0xc01c * 9 + 0x29da;
          puStack_c = (undefined2 *)0xff43;
          piStack_a = (int *)uVar6;
          func_0x000214fc();
        }
      }
      else {
        piStack_a = (int *)0xff4c;
        iStack_8 = uVar6;
        FUN_2000_fc5e();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
