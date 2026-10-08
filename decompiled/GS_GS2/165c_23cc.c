/* GS.GS2 165c:23cc undefined FUN_165c_23cc(void) */
void __cdecl16far FUN_165c_23cc(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  int iVar3;
  
  FUN_10bf_02c0();
  if (*(int *)0xb834 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = 3;
  }
  param_2 = iVar2 * param_2;
  iVar2 = iVar2 * param_1;
  iVar3 = 0;
  iVar1 = FUN_10bf_2efc(*(undefined2 *)0xaca0,*(undefined2 *)0xaca2,0x2000,0);
  iVar1 = iVar1 * iVar3;
  iVar3 = FUN_10bf_2efc(*(undefined2 *)0xa27c,*(undefined2 *)0xa27e,0x2000,0);
  FUN_165c_0d2e(iVar3 * iVar1,iVar1,iVar2,param_2);
  return;
}
