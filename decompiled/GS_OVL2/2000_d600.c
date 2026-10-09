/* GS.GS2 2000:d600 undefined FUN_2000_d600(void) */
void __cdecl16far FUN_2000_d600(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar4 = func_0x00015a10(0xbf,(int)*(char *)0x9a54);
  if (iVar4 < 0) {
    return;
  }
  iVar4 = func_0x00015bac(0x1581,(int)*(char *)0x9a54);
  puVar5 = (undefined2 *)(iVar4 * 0xfc + *(int *)0xb83a);
  uVar3 = *(undefined2 *)0xb83c;
  puVar6 = (undefined2 *)0x9aa2;
  for (iVar4 = 0x7e; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  func_0x0000d6ac(0x1581,1);
  func_0x000165e8(0xd02,1,0);
  FUN_2000_d678();
  FUN_2000_d7a4(0);
  FUN_2000_db50(0);
  return;
}
