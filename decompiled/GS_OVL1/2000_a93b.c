/* GS.GS2 2000:a93b undefined FUN_2000_a93b(void) */
void __cdecl16far FUN_2000_a93b(uint *param_1)

{
  int iVar1;
  int iVar2;
  int in_BX;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  FUN_2000_a8dc();
  pbVar3 = (byte *)(in_BX + -0x145);
  iVar7 = (param_1[2] & 0x1fff) / 0x1c7 - 0x18;
  iVar5 = -7 - (*param_1 & 0x1fff) / 0x155;
  iVar1 = 0xd;
  do {
    iVar2 = 0xf;
    do {
      iVar6 = iVar5;
      pbVar4 = pbVar3;
      FUN_2000_a9c5(iVar6,iVar7,*pbVar4 & 0x3f);
      iVar2 = iVar2 + -1;
      pbVar3 = pbVar4 + 1;
      iVar5 = iVar6 + 0x18;
    } while (iVar2 != 0);
    pbVar3 = pbVar4 + 0x32;
    iVar5 = iVar6 + -0x150;
    iVar7 = iVar7 + 0x12;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
