/* GS.GS2 10bf:5840 undefined FUN_10bf_5840(void) */
void __cdecl16far FUN_10bf_5840(undefined2 *param_1,int param_2,int param_3,undefined2 param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  char *pcStack_4;
  
  piVar1 = (int *)FUN_10bf_526e(*param_1,param_1[1],param_1[2],param_1[3]);
  *(undefined2 *)0x9e70 = piVar1;
  *(int *)0x7148 = piVar1[1] + -1;
  pcVar2 = (char *)((uint)(*piVar1 == 0x2d) + param_2);
  FUN_10bf_236c(pcVar2,param_3,piVar1);
  iVar3 = *(int *)(*(int *)0x9e70 + 2) + -1;
  *(bool *)0x714a = *(int *)0x7148 < iVar3;
  *(int *)0x7148 = iVar3;
  if ((-5 < iVar3) && (iVar3 < param_3)) {
    if (*(char *)0x714a != '\0') {
      do {
        pcStack_4 = pcVar2;
        pcVar2 = pcStack_4 + 1;
      } while (*pcStack_4 != '\0');
      pcStack_4[-1] = '\0';
    }
    FUN_10bf_581e(param_1,param_2,param_3);
    return;
  }
  FUN_10bf_5702(param_1,param_2,param_3,param_4);
  return;
}
