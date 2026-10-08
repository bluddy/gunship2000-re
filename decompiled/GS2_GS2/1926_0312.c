/* GS2.GS2 1926:0312 undefined FUN_1926_0312(void) */
undefined4 __cdecl16near FUN_1926_0312(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 in_AX;
  int iVar4;
  char *unaff_DI;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_ES;
  
  cVar3 = (char)in_AX;
  if (cVar3 == '\0') {
    pcVar2 = (code *)swi(0x21);
    cVar3 = (*pcVar2)();
    cVar3 = cVar3 + '\x01';
  }
  *unaff_DI = cVar3 + '@';
  pcVar5 = unaff_DI + 3;
  (unaff_DI + 1)[0] = ':';
  (unaff_DI + 1)[1] = '\\';
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  iVar4 = 0x40;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  pcVar6 = pcVar5 + -1;
  if (pcVar5[-2] != '\\') {
    pcVar5[-1] = '\\';
    pcVar6 = pcVar5;
  }
  *pcVar6 = '\0';
  return CONCAT22(in_AX,param_1);
}
