/* GS2.GS2 137f:062a undefined FUN_137f_062a(void) */
void __cdecl16near FUN_137f_062a(void)

{
  undefined2 *puVar1;
  int iVar2;
  int in_BX;
  int unaff_SI;
  undefined2 *puVar3;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar3 = (undefined2 *)0x2a8;
  for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  *(int *)0x10a = in_BX + 2;
  if (*(int *)(unaff_SI + 0x16) != 0) {
    FUN_137f_07cf();
    FUN_137f_0672();
    return;
  }
  iVar2 = 0;
  do {
    FUN_137f_0816();
    iVar2 = iVar2 + 1;
  } while (iVar2 != *(int *)(unaff_SI + 0x18));
  return;
}
