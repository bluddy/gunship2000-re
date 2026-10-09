/* GS.GS2 2000:b54a undefined FUN_2000_b54a(void) */
void __cdecl16far FUN_2000_b54a(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  int iStack_1e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  uStack_a = 0xbf;
  uStack_c = 0xb55f;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  *(int *)0xb60b = (int)(char)unaff_SI + (iStack_20 + -1) / 2 + iStack_24;
  *(int *)0xb60d = (int)(char)((uint)unaff_SI >> 8) + (iStack_1e + -1) / 2 + iStack_22;
  return;
}
