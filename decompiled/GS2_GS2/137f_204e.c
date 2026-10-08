/* GS2.GS2 137f:204e undefined FUN_137f_204e(void) */
void __cdecl16near FUN_137f_204e(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  
  puVar3 = (undefined2 *)0x196c;
  *(undefined2 *)0x196a = 0x8000;
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0x8000;
  }
  return;
}
