/* GS2.GS2 2000:d5ca undefined FUN_2000_d5ca(void) */
void __cdecl16far
FUN_2000_d5ca(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  uVar3 = CONCAT11((char)param_3,(char)((uint)param_3 >> 8));
  puVar5 = (undefined2 *)(uVar3 + (uVar3 >> 2));
  uVar3 = CONCAT11((char)param_4,(char)((uint)param_4 >> 8));
  puVar6 = puVar5;
  for (iVar4 = (uVar3 >> 1) + (uVar3 >> 3); iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
