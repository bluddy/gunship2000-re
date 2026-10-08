/* GS.GS2 165c:0dd2 undefined FUN_165c_0dd2(void) */
void __cdecl16far FUN_165c_0dd2(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int unaff_SS;
  undefined2 unaff_DS;
  uint local_38;
  uint uStack_36;
  int iStack_34;
  uint uStack_32;
  int iStack_30;
  undefined1 uStack_2e;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 local_29 [17];
  uint uStack_18;
  int iStack_16;
  uint uStack_14;
  int iStack_12;
  int iStack_10;
  uint uStack_e;
  undefined1 *puStack_c;
  uint uStack_a;
  int iVar6;
  
  FUN_10bf_02c0();
  if (*(char *)0xe282 == '\x01') {
    iVar6 = 0;
  }
  else if (*(char *)0xbabf == *(char *)0xba1b) {
    iVar6 = 0;
  }
  else if (*(char *)0xba1b == '\0') {
    iVar6 = 2;
  }
  else {
    iVar6 = 1;
  }
  uStack_e = *(uint *)0xa286;
  for (iStack_10 = 0; iStack_10 < *(char *)0xe282; iStack_10 = iStack_10 + 1) {
    uStack_a = 0x10bf;
    puStack_c = (undefined1 *)0x7410;
    FUN_2581_039c();
    uStack_a = 0x2581;
    puStack_c = (undefined1 *)0x7439;
    puVar3 = (uint *)FUN_165c_10d6();
    puVar5 = &local_38;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    if (iStack_10 == 0) {
      uStack_2a = 0x4f;
    }
    if (*(char *)(iStack_10 * 0x24 + -0x44f5) == '\x01') {
      uStack_2b = 0xa6;
      uStack_2c = 0xa6;
    }
    iVar4 = (iVar6 * 5 + iStack_10) * 0xb;
    if (*(char *)(iVar4 + 0x12e) == '!') {
      uStack_36 = *(uint *)(iVar4 + 0x126) - uStack_14;
      iStack_34 = (*(int *)(iVar4 + 0x128) - iStack_12) -
                  (uint)(*(uint *)(iVar4 + 0x126) < uStack_14);
      uStack_32 = *(uint *)(iVar4 + 0x12a) - uStack_18;
      iStack_30 = (*(int *)(iVar4 + 300) - iStack_16) - (uint)(*(uint *)(iVar4 + 0x12a) < uStack_18)
      ;
    }
    else {
      iVar4 = (iVar6 * 5 + iStack_10) * 0xb;
      uStack_14 = *(uint *)(iVar4 + 0x126);
      iStack_12 = *(int *)(iVar4 + 0x128);
      uStack_18 = *(uint *)(iVar4 + 0x12a);
      iStack_16 = *(int *)(iVar4 + 300);
      if (*(char *)0xe282 < '\x02') {
        uStack_36 = uStack_a;
        uStack_32 = uStack_e;
        iStack_30 = (int)puStack_c;
        iStack_34 = unaff_SS;
      }
      else {
        uStack_36 = uStack_14 + uStack_a;
        iStack_34 = iStack_12 + unaff_SS + (uint)CARRY2(uStack_14,uStack_a);
        uStack_32 = uStack_18 + uStack_e;
        iStack_30 = iStack_16 + (int)puStack_c + (uint)CARRY2(uStack_18,uStack_e);
      }
    }
    iVar4 = (iVar6 * 5 + iStack_10) * 0xb;
    local_38 = local_38 | *(uint *)(iVar4 + 0x124);
    uStack_2e = *(undefined1 *)(iVar4 + 0x12e);
    uStack_a = iStack_10 * 0x29 + -0x45c8;
    puStack_c = local_29;
    uStack_e = 0x2581;
    iStack_10 = 0x7555;
    FUN_10bf_2250();
    puVar3 = (uint *)(iStack_10 * 0x20 + -0x5d80);
    puVar5 = &local_38;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
  }
  if (*(char *)0xe282 == '\x05') {
    for (iStack_10 = 0; iStack_10 < 4; iStack_10 = iStack_10 + 1) {
      uStack_a = iStack_10 * 0x20 + -0x5d51;
      puStack_c = (undefined1 *)(iStack_10 * 0x20 + -0x5cd1);
      uStack_e = 0x10bf;
      iStack_10 = 0x75a1;
      FUN_10bf_2250();
    }
  }
  return;
}
