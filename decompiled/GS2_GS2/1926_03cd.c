/* GS2.GS2 1926:03cd undefined FUN_1926_03cd(void) */
undefined2 __cdecl16near FUN_1926_03cd(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 in_AX;
  undefined2 *unaff_BP;
  char *pcVar5;
  char *unaff_DI;
  undefined2 unaff_SS;
  
  uVar3 = unaff_BP[6];
  uVar4 = *unaff_BP;
  pcVar5 = (char *)unaff_BP[4];
  do {
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar1 = cVar2;
  } while (cVar2 != '\0');
  return in_AX;
}
