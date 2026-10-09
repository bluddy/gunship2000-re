/* GS.GS2 3000:2808 undefined FUN_3000_2808(void) */
int __cdecl16far FUN_3000_2808(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_e;
  int iStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  if ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)(param_1 * 0xb + -0x4362) * 0x27 + 0x24) &
      0x40) != 0) {
    return 0;
  }
  param_1 = param_1 * 0xb;
  uStack_a = *(undefined2 *)(param_1 + -0x4360);
  iStack_c = 0xbf;
  local_e = 0x2857;
  FUN_3000_24c4();
  uStack_a = *(undefined2 *)(param_1 + -0x435a);
  iStack_c = *(int *)(param_1 + -0x435c);
  local_e = param_1 + -0x4358;
  FUN_3000_2464();
  *(int *)0xc018 = *(int *)0xc018 + -1;
  piVar5 = (int *)(param_1 + -0x4362);
  piVar6 = &local_e;
  piVar3 = piVar5;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar1 = piVar3;
    piVar3 = piVar3 + 1;
    *piVar2 = *piVar1;
  }
  *(char *)piVar6 = (char)*piVar3;
  piVar3 = (int *)(*(int *)0xc018 * 0xb + -0x4362);
  piVar6 = piVar3;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar5;
    piVar5 = piVar5 + 1;
    piVar1 = piVar6;
    piVar6 = piVar6 + 1;
    *piVar2 = *piVar1;
  }
  *(char *)piVar5 = (char)*piVar6;
  piVar6 = &local_e;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar3;
    piVar3 = piVar3 + 1;
    piVar1 = piVar6;
    piVar6 = piVar6 + 1;
    *piVar2 = *piVar1;
  }
  *(char *)piVar3 = (char)*piVar6;
  return *(byte *)((int)*(undefined4 *)0xa278 +
                   (uint)*(byte *)((int)*(undefined4 *)0xb85c + iStack_c * 8 + 1) * 0x1b + 1) + 1;
}
