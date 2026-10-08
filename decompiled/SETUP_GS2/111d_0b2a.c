/* SETUP.GS2 111d:0b2a undefined FUN_111d_0b2a(void) */
int FUN_111d_0b2a(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iStack_4;
  
  iVar3 = 0;
  iStack_4 = 0;
  for (uVar2 = 0x9ce; uVar2 <= *(uint *)0xb0e; uVar2 = uVar2 + 8) {
    if ((*(byte *)(uVar2 + 6) & 0x83) != 0) {
      iVar1 = FUN_111d_0aae(uVar2);
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
