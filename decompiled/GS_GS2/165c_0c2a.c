/* GS.GS2 165c:0c2a undefined FUN_165c_0c2a(void) */
void __cdecl16far
FUN_165c_0c2a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar2 = FUN_10bf_2efc(param_3,param_4,0x2000,0);
  iVar3 = FUN_10bf_2efc(param_1,param_2,0x2000,0);
  pbVar1 = (byte *)(iVar3 + iVar2 * -0x40 + 0xfc0);
  *pbVar1 = *pbVar1 | 0x80;
  return;
}
