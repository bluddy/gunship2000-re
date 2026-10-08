/* GS.GS2 10bf:2b66 undefined FUN_10bf_2b66(void) */
char * __cdecl16far FUN_10bf_2b66(char *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_DS;
  bool bVar7;
  
  uVar2 = 0xffff;
  pcVar5 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  if (~uVar2 != 1) {
    uVar2 = ~uVar2 - 2;
    uVar3 = 0xffff;
    pcVar5 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    iVar4 = (~uVar3 - 1) - uVar2;
    bVar7 = iVar4 == 0;
    if (~uVar3 - 1 < uVar2 || bVar7) {
LAB_10bf_2bbe:
      param_1 = (char *)0x0;
    }
    else {
      do {
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar1 = param_1;
          param_1 = param_1 + 1;
          bVar7 = *param_2 == *pcVar1;
        } while (!bVar7);
        if (!bVar7) goto LAB_10bf_2bbe;
        uVar3 = uVar2;
        pcVar6 = param_1;
        pcVar5 = param_2;
        if (uVar2 == 0) break;
        do {
          pcVar5 = pcVar5 + 1;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar1 = pcVar6;
          pcVar6 = pcVar6 + 1;
          bVar7 = *pcVar5 == *pcVar1;
        } while (bVar7);
      } while (!bVar7);
      param_1 = param_1 + -1;
    }
  }
  return param_1;
}
