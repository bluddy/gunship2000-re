/* GS.GS2 10bf:5726 undefined FUN_10bf_5726(void) */
undefined1 * __cdecl16far FUN_10bf_5726(undefined2 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  int *piStack_4;
  
  if (*(char *)0x7146 == '\0') {
    piStack_4 = (int *)FUN_10bf_526e(*param_1,param_1[1],param_1[2],param_1[3]);
    FUN_10bf_236c(param_2 + (*piStack_4 == 0x2d),piStack_4[1] + param_3,piStack_4);
  }
  else {
    piStack_4 = (int *)*(undefined2 *)0x9e70;
    iVar2 = *piStack_4;
    if (*(int *)0x7148 == param_3) {
      iVar1 = *(int *)0x7148;
      param_2[iVar1 + (uint)(iVar2 == 0x2d)] = 0x30;
      param_2[iVar1 + (uint)(iVar2 == 0x2d) + 1] = 0;
    }
  }
  puVar3 = param_2;
  if (*piStack_4 == 0x2d) {
    *param_2 = 0x2d;
    puVar3 = param_2 + 1;
  }
  if (piStack_4[1] < 1) {
    FUN_10bf_5942(1,puVar3);
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = puVar3 + piStack_4[1];
  }
  if (0 < param_3) {
    FUN_10bf_5942(1,puVar3);
    *puVar3 = 0x2e;
    if (piStack_4[1] < 0) {
      if (*(char *)0x7146 == '\0') {
        iVar2 = -piStack_4[1];
        if (-param_3 != piStack_4[1] && param_3 <= iVar2) {
          iVar2 = param_3;
        }
      }
      else {
        iVar2 = -piStack_4[1];
      }
      FUN_10bf_5942(iVar2,puVar3 + 1);
      FUN_10bf_2c3a(puVar3 + 1,0x30,iVar2);
    }
  }
  return param_2;
}
