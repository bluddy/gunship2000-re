/* GS2.GS2 137f:314c undefined FUN_137f_314c(void) */
void __cdecl16far FUN_137f_314c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  bool bVar5;
  
  *(int *)0x1ca7 = (*param_1 & 0x1fff | 1) - 0x1000;
  *(int *)0x1cab = (param_1[2] & 0x1fff | 1) - 0x1000;
  uVar1 = param_1[4];
  *(uint *)0x1ca9 = uVar1;
  *(uint *)0x1cb3 = uVar1;
  iVar2 = FUN_137f_2b6c();
  iVar3 = 0x50;
  piVar4 = (int *)0x2262;
  do {
    if (iVar2 == *piVar4) {
      *(int *)0x1cb1 = *(int *)0x1ca7 - piVar4[1];
      *(int *)0x1cb5 = *(int *)0x1cab - piVar4[2];
      bVar5 = piVar4 == (int *)0xfffa;
      FUN_137f_3231();
      if (!bVar5) {
        return;
      }
    }
    piVar4 = piVar4 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_137f_3231();
  return;
}
