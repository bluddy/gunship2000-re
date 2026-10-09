/* GS.GS2 3000:6d1c undefined FUN_3000_6d1c(void) */
int __cdecl16far FUN_3000_6d1c(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_SI;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  int iStack_c;
  int iVar8;
  
  func_0x00000eb0();
  iStack_c = 9999;
  iVar4 = iStack_c;
  iVar8 = *(int *)0xc018;
  while (iStack_c = iVar4, iVar1 = iVar8 + -1, iVar8 != 0) {
    iVar3 = iVar1 * 0xb;
    iVar6 = *(int *)(iVar3 + -0x4362) * 0x27;
    uVar7 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar5 = (int)*(undefined4 *)0xb860;
    uVar2 = *(uint *)(iVar5 + iVar6 + 0x25);
    iVar4 = iStack_c;
    iVar8 = iVar1;
    if (((uVar2 & param_4) != 0 || (*(uint *)(iVar5 + iVar6 + 0x23) & param_3) != 0) &&
       ((uVar2 & 0x10) == 0)) {
      iVar4 = *(int *)(iVar3 + -0x435c);
      iVar5 = iVar4;
      if (iVar4 < param_1) {
        iVar5 = param_1;
      }
      if (param_1 < iVar4) {
        iVar4 = param_1;
      }
      iVar3 = *(int *)(iVar3 + -0x435a);
      iVar6 = iVar3;
      if (iVar3 < param_2) {
        iVar6 = param_2;
      }
      if (param_2 < iVar3) {
        iVar3 = param_2;
      }
      if ((iVar5 - iVar4) + (iVar6 - iVar3) < iStack_c) {
        unaff_SI = iVar1;
      }
      iVar4 = (iVar6 - iVar3) + (iVar5 - iVar4);
      if (iStack_c < iVar4) {
        iVar4 = iStack_c;
      }
    }
  }
  return unaff_SI;
}
