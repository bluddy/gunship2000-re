/* GS.GS2 2000:be54 undefined FUN_2000_be54(void) */
void __cdecl16far FUN_2000_be54(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_2c;
  int local_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  int iStack_24;
  undefined2 uStack_22;
  int iStack_20;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  int iStack_12;
  undefined2 uStack_10;
  int iStack_e;
  undefined2 uStack_c;
  int *piStack_a;
  
  func_0x00000eb0();
  piStack_a = &local_2a;
  uStack_c = 0xbf;
  uVar6 = 0xc87;
  iStack_e = -0x4192;
  func_0x0000cf8e();
  if ((*(char *)0x9bcd == '\x01') && ((local_2a != 0 || (local_2c != 0)))) {
    iStack_12 = 0xa6 - local_2c;
    piStack_a = (int *)0x6;
    uStack_c = 0x86e;
    iStack_e = local_2c + 0x10;
    uStack_10 = 0xd0;
    uStack_14 = 6;
    uStack_16 = 0x880;
    uStack_18 = 0xc87;
    uVar6 = 0x1658;
    uStack_1a = 0xbea5;
    func_0x00016658();
  }
  uStack_c = 0xbeaf;
  piStack_a = (int *)uVar6;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_28;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_12 = (uint)(*(char *)0x9bcc == '\0') * (uint)*(byte *)0x9bcd + iStack_24 + -2;
  piStack_a = (int *)uStack_26;
  uStack_c = 0x86e;
  iStack_e = iStack_20 + 4;
  uStack_10 = uStack_22;
  uStack_14 = uStack_26;
  uStack_16 = 0x880;
  uStack_18 = 0x6f;
  uStack_1a = 0xbef4;
  func_0x00016658();
  return;
}
