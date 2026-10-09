/* GS.GS2 2000:a81e undefined FUN_2000_a81e(void) */
void __cdecl16far FUN_2000_a81e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  uStack_a = 0xbf;
  uStack_c = 0xa833;
  iVar3 = func_0x00014e66();
  if (iVar3 < 0) {
    return;
  }
  uStack_a = 0x14e6;
  uStack_c = 0xa845;
  func_0x0000dd4a();
  uStack_a = 0xa84c;
  FUN_2000_a948();
  uStack_a = 0xd02;
  uStack_c = 0xa854;
  func_0x0000d5d0();
  uStack_a = 0xd02;
  uStack_c = 0xa85e;
  puVar4 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_a = uStack_24;
  uStack_c = 3;
  uStack_e = 0x6f;
  uStack_10 = 0xa87a;
  uStack_c = func_0x00013a46();
  uStack_e = 0;
  uStack_10 = 0x139c;
  uStack_12 = 0xa885;
  func_0x0001077a();
  uStack_a = 0x32e;
  uStack_c = 0x1a79;
  uStack_e = 0x1fe;
  uStack_10 = 0x106a;
  uStack_12 = 0xa899;
  func_0x000156c4();
  uStack_a = 0xa8a1;
  func_0x0001540e();
  uStack_a = 0x14e6;
  uStack_c = 0xa8a8;
  func_0x0000dd2e();
  return;
}
