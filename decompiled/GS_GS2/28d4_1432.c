/* GS.GS2 28d4:1432 undefined FUN_28d4_1432(void) */
undefined2 __cdecl16near FUN_28d4_1432(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 in_AX;
  int in_CX;
  char *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  do {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    cVar2 = *pcVar1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar1 = cVar2;
    if (cVar2 == '\0') {
      return in_AX;
    }
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  *unaff_DI = '\0';
  return in_AX;
}
