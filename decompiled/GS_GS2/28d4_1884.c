/* GS.GS2 28d4:1884 undefined FUN_28d4_1884(void) */
undefined2 __cdecl16far FUN_28d4_1884(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  undefined2 in_AX;
  int iVar5;
  char *pcVar6;
  undefined2 in_stack_00000002;
  
  pcVar3 = (code *)swi(0x21);
  bVar4 = (*pcVar3)();
  if ((2 < bVar4) && (iVar2 = *(int *)0x2c, iVar2 != 0)) {
    iVar5 = -0x8000;
    pcVar6 = (char *)0x0;
LAB_28d4_18b3:
    if (*pcVar6 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
      goto LAB_28d4_18b3;
    }
    if (*(int *)(pcVar6 + 1) == 1) {
      pcVar6 = pcVar6 + 3;
      do {
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
    }
  }
  return in_stack_00000002;
}
