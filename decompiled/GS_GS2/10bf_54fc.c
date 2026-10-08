/* GS.GS2 10bf:54fc undefined FUN_10bf_54fc(void) */
void __cdecl16far FUN_10bf_54fc(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  char *pcStack_4;
  
  for (; (*param_1 != '\0' && (*param_1 != '.')); param_1 = param_1 + 1) {
  }
  if (*param_1 != '\0') {
    do {
      pcVar2 = param_1;
      param_1 = pcVar2 + 1;
      if ((*param_1 == '\0') || (*param_1 == 'e')) break;
    } while (*param_1 != 'E');
    pcStack_4 = param_1;
    for (param_1 = pcVar2; *param_1 == '0'; param_1 = param_1 + -1) {
    }
    if (*param_1 == '.') {
      param_1 = param_1 + -1;
    }
    do {
      cVar1 = *pcStack_4;
      param_1 = param_1 + 1;
      *param_1 = cVar1;
      pcStack_4 = pcStack_4 + 1;
    } while (cVar1 != '\0');
  }
  return;
}
