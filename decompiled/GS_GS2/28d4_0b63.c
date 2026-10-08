/* GS.GS2 28d4:0b63 undefined FUN_28d4_0b63(void) */
int __cdecl16near FUN_28d4_0b63(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int in_AX;
  int iVar3;
  char in_DL;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_ES;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  uVar6 = unaff_ES;
  if (in_DL != '\0') {
    uVar6 = unaff_DS;
    unaff_DS = unaff_ES;
  }
  puVar4 = (undefined2 *)0x0;
  puVar5 = (undefined2 *)0x0;
  for (iVar3 = in_AX << 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return in_AX;
}
