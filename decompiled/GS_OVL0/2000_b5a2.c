/* GS.GS2 2000:b5a2 undefined FUN_2000_b5a2(void) */
void __cdecl16far FUN_2000_b5a2(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  int iVar8;
  
  func_0x00000eb0();
  iVar1 = func_0x00002e24(0xbf,param_1);
  uVar5 = (int)param_4 >> 0xf;
  iVar2 = ((int)((param_4 ^ uVar5) - uVar5) >> 2 ^ uVar5) - uVar5;
  if ((iVar2 + -1 < iVar1) && (1 < param_5)) {
    for (iVar3 = iVar2 + -2;
        (iVar3 != 0 &&
        ((((cVar4 = *(char *)(param_1 + iVar3), '/' < cVar4 && (cVar4 < ':')) ||
          (('`' < cVar4 && (cVar4 < '{')))) || (('@' < cVar4 && (cVar4 < '['))))));
        iVar3 = iVar3 + -1) {
    }
    if (iVar3 == 0) {
      iVar3 = iVar2 + -2;
    }
  }
  else {
    iVar3 = iVar2 + -2;
  }
  iVar2 = 0;
  iVar8 = 0;
  iVar6 = 0xbf;
  while ((iVar2 < iVar1 && (iVar8 < (int)param_4))) {
    iVar7 = iVar6;
    if ('\x1f' < *(char *)(param_1 + iVar2)) {
      cVar4 = *(char *)(param_1 + iVar2) + -0x20;
      iVar8 = param_2 + iVar8;
      iVar1 = 2;
      iVar7 = 0x106a;
      func_0x0001077a(iVar6,2,(uint)('/' < cVar4) + (cVar4 % '0') * 2,iVar8,param_3);
      iVar3 = iVar6;
    }
    iVar8 = iVar8 + 4;
    if (iVar2 == iVar3) {
      param_5 = param_5 + -1;
      if (param_5 == 0) {
        return;
      }
      param_3 = param_3 + 6;
      iVar8 = 0;
    }
    iVar2 = iVar2 + 1;
    iVar6 = iVar7;
  }
  return;
}
