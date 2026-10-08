/* GS.GS2 1d02:0a52 undefined FUN_1d02_0a52(void) */
void __cdecl16far
FUN_1d02_0a52(int param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  *(undefined2 *)0x860c = 99;
  iVar5 = param_1 * 0xc;
  FUN_2658_0131(0x10bf,0x880,param_2,param_3,*(undefined2 *)(iVar5 + -0x7a56));
  iVar1 = param_4 + param_2;
  FUN_2658_0131(0x2658,0x880,iVar1 + -5,param_3,*(undefined2 *)(iVar5 + -0x7a56));
  iVar2 = param_5 + param_3 + -5;
  FUN_2658_0131(0x2658,0x880,param_2,iVar2,param_5 + param_3,iVar2);
  FUN_2658_0131(0x2658,0x880,iVar1 + -5,iVar2,*(undefined2 *)(iVar5 + -0x7a56));
  iVar2 = iVar1 + -3;
  FUN_2658_08f2(0x880,param_2 + 2,param_3,iVar2,param_2 + 2,*(undefined1 *)(iVar5 + -0x7a60));
  iVar3 = *(byte *)(iVar5 + -0x7a5f) - 1;
  FUN_2658_08f2(0x880,iVar3,iVar3,iVar2);
  iVar3 = *(byte *)(iVar5 + -0x7a5e) - 3;
  iVar4 = param_3 + 2;
  FUN_2658_08f2(0x880,param_2,iVar4,iVar3,iVar3);
  FUN_2658_08f2(0x880,iVar1 + -1,iVar4,iVar1 + -1,iVar3,*(undefined1 *)(iVar5 + -0x7a5d));
  param_3 = param_3 + 1;
  FUN_2658_08f2(0x880,param_3,param_3,iVar2,param_3,*(undefined1 *)(iVar5 + -0x7a5c));
  iVar3 = *(byte *)(iVar5 + -0x7a5b) - 2;
  FUN_2658_08f2(0x880,iVar3,iVar3,iVar2);
  param_2 = param_2 + 1;
  FUN_2658_08f2(0x880,param_2,iVar3,param_2,iVar2,*(undefined1 *)(iVar5 + -0x7a5a));
  FUN_2658_08f2(0x880,iVar1 + -2,iVar3,iVar1 + -2,param_2,*(undefined1 *)(iVar5 + -0x7a59));
  FUN_1d02_0c12(param_1,param_5 + -4,iVar3,param_4 + -4,param_5 + -4,param_6);
  *(undefined2 *)0x860c = 99;
  return;
}
