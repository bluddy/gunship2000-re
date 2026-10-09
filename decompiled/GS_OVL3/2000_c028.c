/* GS.GS2 2000:c028 undefined FUN_2000_c028(void) */
void __cdecl16far FUN_2000_c028(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_60 [56];
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  int iStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  uStack_a = 0xbf;
  uVar7 = 0x14e6;
  iStack_c = 0xc046;
  iVar4 = func_0x00014e66();
  if (iVar4 < 0) {
    return;
  }
  if ((*(char *)0xa26d == '\x05') || (*(char *)0xa26d == '\x04')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((*(char *)0xa26d == '\x02') || (bVar3)) {
    uStack_a = *(undefined2 *)(*(char *)0x9bd6 * 2 + 0x51c0);
    iStack_c = 0x51ba;
    puStack_e = local_60;
    uStack_10 = 0x14e6;
    uStack_12 = 0xc09c;
    func_0x000032d0();
    uStack_a = 1;
    iStack_c = 0xbf;
    uVar7 = 0xd02;
    puStack_e = (undefined1 *)0xc0aa;
    func_0x0000d628();
  }
  iStack_c = 0xc0b4;
  uStack_a = uVar7;
  func_0x0000dd4a();
  if (((*(char *)0xa26d == '\x02') || (bVar3)) && (*(char *)0x9bd6 == '\0')) {
    uStack_a = 0xd02;
    iStack_c = 0xc0d4;
    func_0x0000d5d0();
  }
  else {
    uStack_a = 0xd02;
    iStack_c = 0xc0eb;
    func_0x0000d5d0();
  }
  uStack_a = 0xd02;
  uVar7 = 0x6f;
  iStack_c = 0xc0f5;
  puVar5 = (undefined2 *)func_0x00000b20();
  puVar6 = &local_28;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  if ((!bVar3) && (*(char *)0xa26d != '\x05')) {
    uStack_a = uStack_26;
    iStack_c = (int)*(char *)0xa26d;
    puStack_e = (undefined1 *)0x0;
    uStack_10 = 0x6f;
    uVar7 = 0x106a;
    uStack_12 = 0xc123;
    func_0x0001077a();
  }
  uStack_a = 0x4c4;
  iStack_c = 0x1bf6;
  puStack_e = (undefined1 *)0x23e;
  uStack_12 = 0xc137;
  uStack_10 = uVar7;
  func_0x000156c4();
  uStack_a = 0xc13f;
  func_0x0001540e();
  uStack_a = 0x14e6;
  iStack_c = 0xc146;
  func_0x0000dd2e();
  return;
}
