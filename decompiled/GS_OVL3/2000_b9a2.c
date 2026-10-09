/* GS.GS2 2000:b9a2 undefined FUN_2000_b9a2(void) */
void __cdecl16far FUN_2000_b9a2(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  int iStack_24;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  
  func_0x00000eb0();
  if ((param_1 < *(char *)0x9bc6) && (-1 < param_1)) {
    iStack_a = 0xbf;
    uStack_c = 0xb9ce;
    puVar3 = (undefined2 *)func_0x00000b20();
    puVar5 = &local_26;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    iStack_a = iStack_24 + 9;
    uStack_c = 0x6f;
    uStack_e = 0xb9f0;
    func_0x0000c9f6();
    iStack_a = 0xc87;
    uStack_c = 0xba04;
    func_0x0000c928();
    iStack_a = 1;
    uStack_c = 1;
    uStack_e = 0xc87;
    uStack_10 = 0xba2b;
    func_0x0000c9a6();
    if (*(char *)(param_1 + -0x6438) == '\0') {
      iStack_a = *(char *)(param_1 + -0x643e) * 0x29 + -0x45b9;
      uStack_c = 0x511f;
      uStack_e = 0xc87;
      uStack_10 = 0xba84;
      func_0x0000ca66();
    }
    else {
      iStack_a = *(undefined2 *)(*(char *)(param_1 + -0x6438) * 2 + *(int *)0x1a8e);
      uStack_c = 0x510c;
      uStack_e = 0xc87;
      uStack_10 = 0xba59;
      func_0x0000ca66();
    }
    return;
  }
  iStack_a = 0xbf;
  uStack_c = 0xba93;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = iStack_24 + 9;
  uStack_c = 0x6f;
  uStack_e = 0xbab5;
  func_0x0000c9f6();
  iStack_a = 0xc87;
  uStack_c = 0xbabf;
  func_0x0000c928();
  iStack_a = 0xc87;
  uStack_c = 0xbaca;
  func_0x0000ca50();
  return;
}
