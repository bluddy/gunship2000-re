/* GS.GS2 10bf:1ab4 undefined FUN_10bf_1ab4(void) */
undefined2 __cdecl16far FUN_10bf_1ab4(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 unaff_DS;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10bf_096c(param_1);
    uVar3 = extraout_AH;
  }
  else {
    *param_1 = *param_1 + 1;
    uVar2 = *(undefined1 *)(*param_1 + -1);
    uVar3 = 0;
  }
  return CONCAT11(uVar3,uVar2);
}
