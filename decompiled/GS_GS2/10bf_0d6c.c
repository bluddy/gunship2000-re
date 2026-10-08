/* GS.GS2 10bf:0d6c undefined FUN_10bf_0d6c(void) */
int FUN_10bf_0d6c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iStack_4;
  
  iVar3 = 0;
  iStack_4 = 0;
  for (uVar2 = 0x68c2; uVar2 <= *(uint *)0x6a02; uVar2 = uVar2 + 8) {
    if ((*(byte *)(uVar2 + 6) & 0x83) != 0) {
      iVar1 = FUN_10bf_0cf0(uVar2);
      if (iVar1 == -1) {
        iStack_4 = -1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
    }
  }
  if (param_1 == 1) {
    iStack_4 = iVar3;
  }
  return iStack_4;
}
