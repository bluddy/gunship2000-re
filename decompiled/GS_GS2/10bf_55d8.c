/* GS.GS2 10bf:55d8 undefined FUN_10bf_55d8(void) */
undefined1 * __cdecl16far
FUN_10bf_55d8(undefined2 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  int *piStack_4;
  
  if (*(char *)0x7146 == '\0') {
    piStack_4 = (int *)FUN_10bf_526e(*param_1,param_1[1],param_1[2],param_1[3]);
    FUN_10bf_236c(param_2 + (uint)(*piStack_4 == 0x2d) + (uint)(0 < param_3),param_3 + 1,piStack_4);
  }
  else {
    piStack_4 = (int *)*(undefined2 *)0x9e70;
    FUN_10bf_5942(0 < param_3,param_2 + (*piStack_4 == 0x2d));
  }
  puVar1 = param_2;
  if (*piStack_4 == 0x2d) {
    *param_2 = 0x2d;
    puVar1 = param_2 + 1;
  }
  if (0 < param_3) {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    *puVar1 = 0x2e;
  }
  puVar1 = (undefined1 *)FUN_10bf_21d6(puVar1 + (uint)(*(char *)0x7146 == '\0') + param_3,0x7140);
  if (param_4 != 0) {
    *puVar1 = 0x45;
  }
  if (*(char *)piStack_4[3] != '0') {
    iVar2 = piStack_4[1] + -1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      puVar1[1] = 0x2d;
    }
    if (99 < iVar2) {
      puVar1[2] = puVar1[2] + (char)(iVar2 / 100);
      iVar2 = iVar2 % 100;
    }
    if (9 < iVar2) {
      puVar1[3] = puVar1[3] + (char)(iVar2 / 10);
      iVar2 = iVar2 % 10;
    }
    puVar1[4] = puVar1[4] + (char)iVar2;
  }
  return param_2;
}
