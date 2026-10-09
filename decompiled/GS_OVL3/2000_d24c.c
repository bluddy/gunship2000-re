/* GS.GS2 2000:d24c undefined FUN_2000_d24c(void) */
void __cdecl16far FUN_2000_d24c(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined2 unaff_SI;
  int *piVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_86;
  undefined1 local_84 [82];
  int iStack_32;
  int iStack_30;
  int iStack_2e;
  int in_stack_0000ffd4;
  int iStack_2a;
  int iStack_28;
  int local_26;
  int local_24;
  int local_22;
  int iStack_20;
  int iStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  int *piStack_c;
  int *piStack_a;
  int *piStack_8;
  
  func_0x00000eb0();
  iStack_2a = 0x13f - *(int *)0x9be8;
  piStack_8 = (int *)0xffff;
  iStack_2e = 0xbe - *(int *)0x9bea;
  iStack_e = *(undefined2 *)0x9bea;
  iStack_10 = *(undefined2 *)0x9be8;
  uStack_12 = 0x880;
  uStack_14 = 0xbf;
  uStack_16 = 0xd281;
  piStack_c = (int *)iStack_2a;
  piStack_a = (int *)iStack_2e;
  func_0x0000c8c0();
  piStack_8 = (int *)*(undefined2 *)0x9bea;
  piStack_a = (int *)*(undefined2 *)0x9be8;
  piStack_c = (int *)0x880;
  iStack_e = iStack_2e;
  iStack_10 = iStack_2a;
  uStack_12 = *(undefined2 *)0x9bea;
  uStack_14 = *(undefined2 *)0x9be8;
  uStack_16 = 0x8a4;
  uStack_18 = 0xc87;
  uStack_1a = 0xd2a5;
  func_0x00016658();
  piStack_8 = (int *)0x4;
  piStack_a = (int *)0x1658;
  piStack_c = (int *)0xd2af;
  func_0x0000c980();
  piStack_8 = (int *)0x0;
  piStack_a = (int *)0xc87;
  piStack_c = (int *)0xd2b9;
  func_0x0000c928();
  piStack_8 = (int *)0x24;
  piStack_a = (int *)0x0;
  piStack_c = &local_26;
  iStack_e = 0xc87;
  iStack_10 = 0xd2c9;
  func_0x0000382a();
  iStack_28 = 0;
  iStack_86 = 0;
  piStack_a = (int *)0xbf;
  for (iStack_32 = 0; iStack_32 < 4; iStack_32 = iStack_32 + 1) {
    piStack_8 = (int *)*(undefined2 *)(*(char *)(iStack_32 * 0x29 + -0x52aa) * 2 + *(int *)0x1a90);
    piStack_c = (int *)0xd2fb;
    iStack_2a = func_0x0000cd58();
    if (iStack_86 < iStack_2a) {
      iStack_86 = iStack_2a;
    }
    piStack_a = (int *)0xc87;
  }
  uVar6 = piStack_a;
  for (iStack_32 = 0; iStack_32 < 4; iStack_32 = iStack_32 + 1) {
    piStack_8 = (int *)(iStack_32 * 0x29 + -0x52cc);
    piStack_c = (int *)0xd32c;
    piStack_a = (int *)uVar6;
    iStack_2a = func_0x0000cd58();
    if (iStack_28 < iStack_2a) {
      iStack_28 = iStack_2a;
    }
    uVar6 = 0xc87;
  }
  for (iStack_32 = 0; iStack_32 < 4; iStack_32 = iStack_32 + 1) {
    iVar3 = iStack_32 * 0x29;
    piStack_8 = (int *)(iVar3 + -0x52b2);
    piStack_a = (int *)local_84;
    iStack_e = 0xd366;
    piStack_c = (int *)uVar6;
    func_0x000141a6();
    piStack_8 = &local_22;
    piStack_a = &local_24;
    piStack_c = (int *)0x1414;
    iStack_e = 0xd376;
    func_0x0000cf8e();
    piStack_8 = (int *)0x0;
    piStack_a = (int *)0x0;
    piStack_c = (int *)*(undefined2 *)(*(char *)(iVar3 + -0x52aa) * 2 + *(int *)0x1a90);
    iStack_e = 0xc87;
    iStack_10 = 0xd391;
    func_0x0000c93a();
    piStack_8 = (int *)(iStack_86 + 4);
    piStack_a = (int *)0x0;
    piStack_c = (int *)(iVar3 + -0x52cc);
    iStack_e = 0xc87;
    iStack_10 = 0xd3a8;
    func_0x0000c93a();
    piStack_8 = (int *)(iStack_28 + iStack_86 + 0xc);
    piStack_a = (int *)0x0;
    piStack_c = (int *)local_84;
    iStack_e = 0xc87;
    iStack_10 = 0xd3c2;
    func_0x0000c93a();
    local_24 = local_24 + iStack_86 + 4;
    local_26 = iStack_32 + 1;
    iStack_20 = 200;
    iStack_1e = 8;
    uStack_1c = 1;
    piVar5 = &iStack_2a;
    piVar4 = &local_26;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      piVar2 = piVar5;
      piVar5 = piVar5 + 1;
      piVar1 = piVar4;
      piVar4 = piVar4 + 1;
      *piVar2 = *piVar1;
    }
    in_stack_0000ffd4 = 0xc87;
    iStack_2e = -0x2c07;
    func_0x00000770();
    if (iStack_32 == 0) {
      iStack_30 = local_22;
      *(int *)0xb60b = (int)(char)unaff_SI + (iStack_20 + -1) / 2 + local_24;
      *(int *)0xb60d = (int)(char)((uint)unaff_SI >> 8) + (iStack_1e + -1) / 2 + local_22;
      in_stack_0000ffd4 = local_24;
    }
    piStack_8 = (int *)0x6f;
    uVar6 = 0xc87;
    piStack_a = (int *)0xd442;
    func_0x0000cd22();
  }
  if (*(int *)0x8c8 != 0) {
    piStack_8 = (int *)((iStack_1e - iStack_30) + local_22 + 1);
    piStack_a = (int *)iStack_20;
    piStack_c = (int *)iStack_30;
    uStack_12 = 0xd466;
    iStack_10 = uVar6;
    iStack_e = in_stack_0000ffd4;
    func_0x0000ef70();
  }
  return;
}
