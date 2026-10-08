/* GS.GS2 10bf:2b48 undefined FUN_10bf_2b48(void) */
char * __cdecl16far FUN_10bf_2b48(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  for (pcVar2 = param_1; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
  }
  return param_1;
}
