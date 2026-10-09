/* GS.GS2 2000:bf34 undefined FUN_2000_bf34(void) */
void __cdecl16far FUN_2000_bf34(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  cVar1 = *(char *)0xe281;
  puVar6 = (undefined2 *)0xacb6;
  puVar5 = (undefined2 *)0xb4aa;
  for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  FUN_2000_bf88();
  *(char *)0xe281 = cVar1;
  puVar6 = (undefined2 *)0xacb6;
  puVar5 = (undefined2 *)(cVar1 * 0x122 + -0x5222);
  for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  FUN_2000_bfba();
  func_0x000135e2(0xbf);
  func_0x0000d2f0(0x1351);
  return;
}
