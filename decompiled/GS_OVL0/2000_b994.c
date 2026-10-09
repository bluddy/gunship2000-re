/* GS.GS2 2000:b994 undefined FUN_2000_b994(void) */
void __cdecl16far FUN_2000_b994(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_28;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  uStack_a = 0xbf;
  uStack_c = 0xb9a8;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  uStack_a = uStack_1e;
  uStack_c = uStack_20;
  uStack_e = uStack_22;
  uStack_10 = uStack_24;
  uStack_12 = 0x880;
  uStack_14 = 0x6f;
  uStack_16 = 0xb9cd;
  func_0x0000c8c0();
  uStack_a = 0xc87;
  uStack_c = 0xb9d7;
  func_0x0000c980();
  uStack_a = 0xc87;
  uStack_c = 0xb9e1;
  func_0x0000c9c8();
  uStack_a = 0;
  uStack_c = 0xc87;
  uStack_e = 0xb9ed;
  func_0x0000ca12();
  for (iStack_28 = 0; iStack_28 < *(int *)0x9884; iStack_28 = iStack_28 + 1) {
    uStack_a = 0xc87;
    uStack_c = 0xba1a;
    func_0x0000c928();
    uStack_a = 0x1fff;
    uStack_c = 0xc87;
    uStack_e = 0xba35;
    func_0x0000ca66();
  }
  if (param_1 != 0) {
    uStack_a = 0xc87;
    uStack_c = 0xba48;
    func_0x0000c87a();
  }
  return;
}
