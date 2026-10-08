/* GS2.GS2 1926:01b3 undefined FUN_1926_01b3(void) */
undefined2 __cdecl16far FUN_1926_01b3(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 in_AX;
  int iVar5;
  char *unaff_SI;
  char *pcVar6;
  char *unaff_DI;
  char *pcVar7;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0x2c;
  if (iVar4 != 0) {
    pcVar7 = (char *)0x0;
LAB_1926_01c9:
    pcVar6 = unaff_SI;
    if (*pcVar7 != '\0') {
      do {
        pcVar2 = pcVar6;
        if (*pcVar2 == '\0') {
          if (*pcVar7 == '=') {
            do {
              pcVar7 = pcVar7 + 1;
              cVar3 = *pcVar7;
              pcVar2 = unaff_DI;
              unaff_DI = unaff_DI + 1;
              *pcVar2 = cVar3;
            } while (cVar3 != '\0');
            return in_AX;
          }
          break;
        }
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar2 == *pcVar1);
      iVar5 = -1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar2 = pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar2 != '\0');
      goto LAB_1926_01c9;
    }
  }
  return in_AX;
}
