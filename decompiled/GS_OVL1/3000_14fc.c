/* GS.GS2 3000:14fc undefined FUN_3000_14fc(void) */
void __cdecl16far FUN_3000_14fc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined2 uVar4;
  
  func_0x00000eb0();
  uVar4 = 0xf;
  bVar3 = (char)param_1[4] == '\0';
  *(bool *)(param_1 + 4) = bVar3;
  if (bVar3) {
    uVar4 = 8;
  }
  iVar2 = param_1[1];
  func_0x00016e72(0xbf,uVar4,*param_1,param_1[1] + param_1[3] + -1,*param_1,iVar2);
  iVar1 = param_1[2] + *param_1 + -1;
  func_0x00016e72(0x1658,iVar2,*param_1,param_1[1],iVar1,param_1[1]);
  iVar2 = param_1[2] + *param_1;
  func_0x00016e72(0x1658,iVar1,*param_1 + 1,param_1[1] + param_1[3],iVar2,param_1[1] + param_1[3]);
  func_0x00016e72(0x1658,iVar2,param_1[2] + *param_1,param_1[1] + param_1[3],param_1[2] + *param_1,
                  param_1[1] + 1);
  return;
}
