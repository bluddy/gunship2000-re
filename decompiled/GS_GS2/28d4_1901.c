/* GS.GS2 28d4:1901 undefined FUN_28d4_1901(void) */
undefined2 __cdecl16near FUN_28d4_1901(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 in_AX;
  undefined2 *unaff_BP;
  char *pcVar5;
  char *unaff_DI;
  char *pcVar6;
  undefined2 unaff_SS;
  
  uVar3 = unaff_BP[6];
  uVar4 = *unaff_BP;
  pcVar5 = (char *)unaff_BP[4];
  do {
    pcVar6 = unaff_DI;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
    *pcVar6 = cVar2;
    unaff_DI = pcVar6 + 1;
  } while (cVar2 != '\0');
  DAT_28d4_193d = 0;
  if (((*(uint *)(pcVar6 + -4) | 0x2000) == 0x652e) && ((*(uint *)(pcVar6 + -2) | 0x2020) == 0x6578)
     ) {
    DAT_28d4_193d = 1;
  }
  return in_AX;
}
