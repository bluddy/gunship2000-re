/* GS.GS2 10bf:2278 undefined FUN_10bf_2278(void) */
uint __cdecl16far FUN_10bf_2278(char *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  uVar3 = param_3;
  pcVar5 = param_1;
  if (param_3 != 0) {
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    iVar4 = param_3 - uVar3;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar2 = param_1;
      param_1 = param_1 + 1;
      pcVar1 = param_2;
      param_2 = param_2 + 1;
    } while (*pcVar1 == *pcVar2);
    param_3 = 0;
    if ((byte)param_2[-1] <= (byte)param_1[-1]) {
      if (param_2[-1] == param_1[-1]) {
        return 0;
      }
      param_3 = 0xfffe;
    }
    param_3 = ~param_3;
  }
  return param_3;
}
