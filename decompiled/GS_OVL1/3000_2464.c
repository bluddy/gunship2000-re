/* GS.GS2 3000:2464 undefined FUN_3000_2464(void) */
void __cdecl16far FUN_3000_2464(byte *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar3 = (param_3 / 0x12) * 0x40;
  if (param_4 != 0) {
    uVar2 = *(undefined2 *)0x71fa;
    pbVar4 = (byte *)(iVar3 + param_2 / 0x18);
    *param_1 = *pbVar4;
    pbVar1 = pbVar4;
    *pbVar1 = *pbVar1 | 0x80;
    return;
  }
  *(byte *)(iVar3 + param_2 / 0x18) = *param_1;
  return;
}
