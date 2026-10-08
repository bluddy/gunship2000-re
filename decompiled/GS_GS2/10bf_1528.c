/* GS.GS2 10bf:1528 undefined FUN_10bf_1528(void) */
uint FUN_10bf_1528(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar3 = FUN_10bf_096c(param_1);
  }
  else {
    pbVar2 = (byte *)*param_1;
    *param_1 = *param_1 + 1;
    uVar3 = (uint)*pbVar2;
  }
  return uVar3;
}
