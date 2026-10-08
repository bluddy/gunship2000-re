/* GS.GS2 165c:0cb2 undefined FUN_165c_0cb2(void) */
int __cdecl16far
FUN_165c_0cb2(uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
             uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_10bf_02c0();
  FUN_10bf_2cd6(param_5 - param_1,(param_6 - param_2) - (uint)(param_5 < param_1));
  uVar1 = param_7 - param_3;
  iVar4 = (param_8 - param_4) - (uint)(param_7 < param_3);
  iVar3 = iVar4;
  uVar2 = FUN_10bf_2cd6();
  if ((iVar3 < iVar4) || ((iVar3 <= iVar4 && (uVar1 < uVar2)))) {
    iVar4 = 2;
    iVar3 = FUN_10bf_2efc(2,0,2,0);
    iVar3 = iVar3 + iVar4;
  }
  else {
    iVar5 = 2;
    iVar3 = FUN_10bf_2efc(uVar2,iVar4,2,0);
    iVar3 = iVar3 + iVar5;
  }
  return iVar3;
}
