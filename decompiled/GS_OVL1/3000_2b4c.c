/* GS.GS2 3000:2b4c undefined FUN_3000_2b4c(void) */
void __cdecl16far FUN_3000_2b4c(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  uVar3 = *(uint *)((int)*(undefined4 *)0xb860 + *param_1 * 0x27 + 0x23);
  if (*param_2 != 9999) {
    FUN_3000_2c94(param_2,param_3);
  }
  if (*(int *)0xc01c != 0) {
    FUN_3000_6cfc();
  }
  if (((uVar3 & 0x18) == 0) && ((uVar3 & 4) == 0)) {
    piVar5 = (int *)(*(int *)0xc018 * 0xb + -0x4362);
    piVar7 = (int *)(*(int *)0xc018 * 0xb + -0x4357);
    piVar6 = piVar5;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar2 = piVar7;
      piVar7 = piVar7 + 1;
      piVar1 = piVar6;
      piVar6 = piVar6 + 1;
      *piVar2 = *piVar1;
    }
    *(char *)piVar7 = (char)*piVar6;
    piVar7 = param_1;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar2 = piVar5;
      piVar5 = piVar5 + 1;
      piVar1 = piVar7;
      piVar7 = piVar7 + 1;
      *piVar2 = *piVar1;
    }
    *(char *)piVar5 = (char)*piVar7;
    *(int *)0xc018 = *(int *)0xc018 + 1;
  }
  else {
    FUN_3000_2464(param_1 + 5,param_1[3],param_1[4],0);
    FUN_3000_24c4(param_1[1],0);
  }
  piVar7 = (int *)(*(int *)0xc018 * 0xb + -0x4362);
  piVar6 = param_1;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar7;
    piVar7 = piVar7 + 1;
    piVar1 = piVar6;
    piVar6 = piVar6 + 1;
    *piVar2 = *piVar1;
  }
  *(char *)piVar7 = (char)*piVar6;
  param_1[3] = 9999;
  *(int *)0xc01c = param_3 + 0xd;
  FUN_3000_2290(0);
  FUN_3000_19cc();
  return;
}
