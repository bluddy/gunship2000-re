/* GS2.GS2 17e0:00de undefined FUN_17e0_00de(void) */
void __cdecl16far FUN_17e0_00de(int param_1,char *param_2)

{
  undefined2 uVar1;
  char cVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  uVar1 = DAT_17e0_0008;
  while( true ) {
    pcVar3 = param_2 + 1;
    cVar2 = *param_2;
    if (cVar2 == '\0') break;
    if (cVar2 == '\n') {
      cVar2 = ' ';
      *param_2 = ' ';
    }
    param_1 = param_1 + (uint)*(byte *)(ulong)((byte)(cVar2 - *(char *)0x1) + 5);
    param_2 = pcVar3;
    if (DAT_17e0_0017 <= param_1) {
      do {
        param_2 = pcVar3;
        pcVar3 = param_2 + -1;
      } while (*pcVar3 != ' ');
      *pcVar3 = '\n';
      param_1 = DAT_17e0_0013;
    }
  }
  return;
}
