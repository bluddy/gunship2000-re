/* GS.GS2 165c:02e8 undefined FUN_165c_02e8(void) */
void __cdecl16far FUN_165c_02e8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  uint uStack_12;
  undefined2 local_10;
  uint local_e;
  undefined2 uStack_c;
  uint uStack_a;
  uint *puStack_8;
  undefined2 *puStack_6;
  
  puStack_6 = (undefined2 *)0x68b3;
  FUN_10bf_02c0();
  uStack_c = 0x5c;
  uStack_a = 0x61;
  puStack_6 = (undefined2 *)0x10bf;
  puStack_8 = (uint *)0x68d1;
  FUN_165c_0276();
  uStack_12 = 0;
  uVar2 = 0x10bf;
  while ((int)uStack_12 < *(int *)0xaca4) {
    puStack_6 = &local_10;
    puStack_8 = &local_e;
    iVar1 = uStack_12 * 0x20;
    uStack_a = *(undefined2 *)(iVar1 + -0x5d78);
    uStack_c = *(undefined2 *)(iVar1 + -0x5d7a);
    local_e = *(uint *)(iVar1 + -0x5d7c);
    local_10 = *(undefined2 *)(iVar1 + -0x5d7e);
    FUN_165c_02a4();
    puStack_6 = (undefined2 *)local_10;
    puStack_8 = (uint *)local_e;
    uStack_a = (uint)*(byte *)(iVar1 + -0x5d74);
    uStack_c = 0;
    local_10 = 0x691e;
    local_e = uVar2;
    FUN_206a_00da();
    uStack_12 = uVar2 + 1;
    uVar2 = 0x206a;
  }
  for (uStack_12 = 0; (int)uStack_12 < 3; uStack_12 = uStack_12 + 1) {
    iVar1 = uStack_12 * 0x3e;
    uVar3 = uVar2;
    if (*(int *)(iVar1 + -0x46fc) != 0) {
      puStack_6 = &local_10;
      puStack_8 = &local_e;
      uStack_a = *(undefined2 *)(iVar1 + -0x46ec);
      uStack_c = *(undefined2 *)(iVar1 + -0x46ee);
      local_e = *(uint *)(iVar1 + -0x46f0);
      local_10 = *(undefined2 *)(iVar1 + -0x46f2);
      FUN_165c_02a4();
      puStack_6 = (undefined2 *)local_10;
      puStack_8 = (uint *)local_e;
      uStack_c = 0;
      uVar3 = 0x206a;
      local_10 = 0x696f;
      local_e = uVar2;
      uStack_a = uVar2;
      FUN_206a_00da();
      uStack_12 = uVar2;
    }
    uVar2 = uVar3;
  }
  puStack_8 = (uint *)0x6978;
  puStack_6 = (undefined2 *)uVar2;
  FUN_165c_0204();
  puStack_6 = (undefined2 *)0x80;
  uStack_a = 0x6980;
  puStack_8 = (uint *)uVar2;
  FUN_1c87_01f6();
  uStack_12 = 0;
  while (uStack_12 < 3) {
    puStack_6 = (undefined2 *)0x0;
    puStack_8 = (uint *)0x8000;
    iVar1 = uStack_12 * 0x3e;
    uStack_a = *(undefined2 *)(iVar1 + -0x46ec);
    uStack_c = *(undefined2 *)(iVar1 + -0x46ee);
    local_e = 0x1c87;
    local_10 = 0x69ab;
    puStack_6 = (undefined2 *)FUN_10bf_2efc();
    puStack_8 = (uint *)0x0;
    uStack_a = 0x8000;
    uStack_c = *(undefined2 *)(iVar1 + -0x46f0);
    local_e = *(uint *)(iVar1 + -0x46f2);
    local_10 = 0x10bf;
    puStack_8 = (uint *)FUN_10bf_2efc();
    uStack_a = iVar1 + -0x471c;
    uStack_c = 0x69be;
    local_e = 0x95;
    local_10 = 0x10bf;
    FUN_1c87_01f6();
    uStack_12 = 0x69d0;
  }
  return;
}
