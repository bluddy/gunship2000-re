/* GS.GS2 3000:2db0 undefined FUN_3000_2db0(void) */
void __cdecl16far FUN_3000_2db0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  int local_a;
  
  func_0x00000eb0();
  puVar6 = (undefined2 *)0xc4d2;
  puVar5 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
  for (iVar4 = 0; iVar4 < *(int *)0xc018; iVar4 = iVar4 + 1) {
    if ((*(int *)(iVar4 * 0xb + -0x435c) / 0x18 == *(int *)0xc4d8 / 0x18) &&
       (*(int *)(iVar4 * 0xb + -0x435a) / 0x12 == *(int *)0xc4da / 0x12)) {
      local_a = *(int *)0xa7c;
      FUN_3000_12b0();
      local_a = 0xbf;
      iVar4 = 0x2e4a;
      FUN_3000_2808();
    }
  }
  if (*(char *)0xe28c != '\x02') {
    local_a = 0xbf;
    uVar3 = FUN_3000_3a48();
    *(undefined2 *)0xc4d6 = uVar3;
  }
  local_a = *(int *)0xc4da;
  FUN_3000_2464(0xc4dc,*(undefined2 *)0xc4d8);
  local_a = 6;
  func_0x0000c8c0(0xbf,0x8a4,0xc6,0xc,0x78);
  local_a = 0xc87;
  func_0x0000c928();
  local_a = *(int *)0xc4d8 / 0x60;
  func_0x000032d0(0xc87,&local_a,0x2d5f);
  if (*(char *)0xe28c == '\x02') {
    local_a = *(int *)0xa36;
    func_0x0000ca66(0xbf,0x2d69,*(undefined2 *)0xa34);
  }
  else {
    local_a = *(int *)0x99e;
    func_0x0000ca66(0xbf,0x2d72,
                    *(int *)((int)*(undefined4 *)0xb860 + *(int *)0xc4d2 * 0x27 + 0x19) * 0x1a +
                    *(int *)0xa25c + 1,*(undefined2 *)0xa25e,*(undefined2 *)0x99c);
    local_a = *(int *)0xc4d4;
    FUN_3000_24c4();
    local_a = 0x2f2d;
    FUN_3000_1206();
  }
  if ((('\x01' < *(char *)0xe28c) && (*(int *)0xc516 != 9999)) &&
     ((*(uint *)((int)*(undefined4 *)0xb860 + *(int *)0xc510 * 0x27 + 0x25) & 0x200) != 0)) {
    local_a = *(int *)0xc512;
    FUN_3000_24c4();
    *(undefined2 *)0xc516 = 9999;
    local_a = 0x50;
    FUN_3000_126e(*(undefined2 *)0x978,*(undefined2 *)0x97a,0xd6,0x42);
    local_a = *(int *)0xa74;
    FUN_3000_12b0();
  }
  local_a = 0x2f97;
  FUN_3000_19cc();
  return;
}
