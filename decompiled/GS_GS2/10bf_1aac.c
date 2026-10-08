/* GS.GS2 10bf:1aac undefined FUN_10bf_1aac(void) */
undefined2 __cdecl16far FUN_10bf_1aac(void)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 unaff_DS;
  
  piVar1 = (int *)0x68c4;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10bf_096c(0x68c2);
    uVar3 = extraout_AH;
  }
  else {
    *(int *)0x68c2 = *(int *)0x68c2 + 1;
    uVar2 = *(undefined1 *)(*(int *)0x68c2 + -1);
    uVar3 = 0;
  }
  return CONCAT11(uVar3,uVar2);
}
