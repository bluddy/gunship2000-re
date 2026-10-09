/* GS.GS2 2000:cd52 undefined FUN_2000_cd52(void) */
void __cdecl16far FUN_2000_cd52(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_220;
  int iStack_21e;
  uint uStack_21c;
  undefined1 uStack_21a;
  undefined1 uStack_219;
  undefined1 uStack_218;
  undefined1 uStack_217;
  undefined1 uStack_216;
  undefined2 uStack_215;
  undefined2 uStack_213;
  undefined2 uStack_211;
  int aiStack_14a [20];
  int iStack_122;
  int iStack_120;
  uint local_11e [2];
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined2 uStack_115;
  undefined2 uStack_113;
  undefined2 uStack_111;
  undefined1 local_10f [8];
  undefined1 uStack_107;
  undefined2 local_106 [4];
  char cStack_fe;
  undefined2 uStack_12;
  undefined2 uStack_10;
  uint *puStack_e;
  uint *puStack_c;
  int iVar12;
  
  func_0x00000eb0();
  puStack_c = (uint *)0xbf;
  puStack_e = (uint *)0xcd6a;
  iVar5 = func_0x000012cc();
  *(int *)0x98f6 = iVar5;
  if (iVar5 == 0) {
    return;
  }
  puStack_c = local_11e;
  puStack_e = (uint *)0xbf;
  uStack_10 = 0xcd86;
  func_0x0000382a();
  puStack_c = (uint *)0xbf;
  puStack_e = (uint *)0xcd96;
  func_0x00002dc6();
  puStack_c = (uint *)0x18;
  puStack_e = local_11e;
  uStack_10 = 0xbf;
  uStack_12 = 0xcdab;
  func_0x00001418();
  puStack_c = (uint *)0xbf;
  puStack_e = (uint *)0xcdbb;
  func_0x00002dc6();
  puStack_c = (uint *)0x18;
  puStack_e = local_11e;
  uStack_10 = 0xbf;
  puVar9 = (uint *)0xbf;
  uStack_12 = 0xcdd0;
  func_0x00001418();
  iVar5 = 2;
  if (*(char *)0xa270 != '\0') {
    iStack_122 = 0;
    while( true ) {
      if (*(char *)0xa270 == '\x01') {
        iVar12 = 1;
      }
      else {
        iVar12 = 2;
      }
      if (iVar12 <= iStack_122) break;
      puVar9 = (uint *)0x1634;
      puStack_c = (uint *)0xce15;
      iVar12 = func_0x00016544();
      if (-1 < iVar12) {
        puVar6 = (undefined2 *)(iVar12 * 0xd6 + *(int *)0xbc38);
        uVar4 = *(undefined2 *)0xbc3a;
        puVar8 = &local_220;
        for (iVar12 = 0x6b; iVar12 != 0; iVar12 = iVar12 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        local_11e[0] = uStack_21c;
        local_11e[1] = 1;
        uStack_11a = uStack_21a;
        uStack_119 = uStack_219;
        uStack_118 = uStack_218;
        uStack_117 = uStack_217;
        uStack_116 = uStack_216;
        uStack_115 = uStack_215;
        uStack_113 = uStack_213;
        uStack_111 = uStack_211;
        puStack_c = (uint *)local_10f;
        puStack_e = (uint *)0x1634;
        uStack_10 = 0xce9e;
        func_0x00002e40();
        uStack_107 = 0;
        aiStack_14a[iVar5] = 8;
        iVar5 = iVar5 + 1;
        if (((local_11e[0] & 1) != 0) && ((local_11e[0] & 2) != 0)) {
          local_11e[0] = local_11e[0] & 0xfffd;
        }
        puStack_c = (uint *)0x18;
        puStack_e = local_11e;
        uStack_10 = 0xbf;
        puVar9 = (uint *)0xbf;
        uStack_12 = 0xceda;
        func_0x00001418();
      }
      iStack_122 = iStack_122 + 1;
    }
  }
  for (iStack_122 = 0; iStack_122 < iVar5; iStack_122 = iStack_122 + 1) {
    aiStack_14a[iStack_122] = -2;
  }
  iVar12 = 0;
  do {
    if (*(char *)0xe282 <= iVar12) {
      puStack_c = local_11e;
      uStack_10 = 0xd124;
      puStack_e = puVar9;
      func_0x0000382a();
      for (; iVar5 < 0x14; iVar5 = iVar5 + 1) {
        puStack_c = (uint *)0x18;
        puStack_e = local_11e;
        uStack_10 = 0xbf;
        uStack_12 = 0xd145;
        func_0x00001418();
      }
      puStack_c = (uint *)0xd153;
      func_0x000011e6();
      return;
    }
    puStack_c = (uint *)0xcf2a;
    puVar6 = (undefined2 *)func_0x00015e16();
    puVar8 = local_106;
    for (iVar12 = 0x7e; iVar12 != 0; iVar12 = iVar12 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    puVar10 = (uint *)0x1581;
    for (iStack_122 = -1; iStack_122 < 3; iStack_122 = iStack_122 + 1) {
      if (iStack_122 < 0) {
        cVar3 = *(char *)((int)puVar9 * 0x24 + -0x4516);
LAB_2000_cfb2:
        for (iStack_120 = 0; (iStack_120 < iVar5 && (aiStack_14a[iStack_120] != (int)cVar3));
            iStack_120 = iStack_120 + 1) {
        }
        puVar11 = (uint *)0x1634;
        puStack_c = (uint *)0xcfe0;
        iVar12 = func_0x00016544();
        puVar9 = puVar10;
        if (-1 < iVar12) {
          puVar6 = (undefined2 *)(iVar12 * 0xd6 + *(int *)0xbc38);
          uVar4 = *(undefined2 *)0xbc3a;
          puVar8 = &local_220;
          for (iVar7 = 0x6b; puVar9 = unaff_SS, iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
        }
        if ((iVar5 == iStack_120) && (-1 < iVar12)) {
          local_11e[0] = uStack_21c;
          local_11e[1] = 1;
          uStack_11a = uStack_21a;
          uStack_119 = uStack_219;
          uStack_118 = uStack_218;
          uStack_117 = uStack_217;
          uStack_116 = uStack_216;
          uStack_115 = uStack_215;
          uStack_113 = uStack_213;
          uStack_111 = uStack_211;
          puStack_c = (uint *)local_10f;
          puStack_e = (uint *)0x1634;
          uStack_10 = 0xd07b;
          func_0x00002e40();
          uStack_107 = 0;
          aiStack_14a[iVar5] = 8;
          iVar5 = iVar5 + 1;
          if (((local_11e[0] & 1) != 0) && ((local_11e[0] & 2) != 0)) {
            local_11e[0] = local_11e[0] & 0xfffd;
          }
          puVar9 = (uint *)0x1;
          puStack_c = (uint *)0x18;
          puStack_e = local_11e;
          uStack_10 = 0xbf;
          puVar11 = (uint *)0xbf;
          uStack_12 = 0xd0b7;
          func_0x00001418();
        }
        if (-1 < iVar12) {
          iVar12 = ((int)puVar9 * 0x12 + iStack_122) * 2;
          *(int *)(iVar12 + -0x450c) = iStack_21e * *(int *)(iVar12 + -0x450c);
        }
        if (iStack_122 < 0) {
          if (*(char *)((int)puVar9 * 0x24 + -0x4516) < '\0') {
            *(undefined1 *)((int)puVar9 * 0x24 + -0x4516) = 0;
          }
          else {
            *(undefined1 *)((int)puVar9 * 0x24 + -0x4516) = (undefined1)iStack_120;
          }
        }
        else {
          *(undefined1 *)(iStack_122 + (int)puVar9 * 0x24 + -0x4515) = (undefined1)iStack_120;
        }
      }
      else {
        if (0 < *(int *)(((int)puVar9 * 0x12 + iStack_122) * 2 + -0x450c)) {
          cVar3 = *(char *)(iStack_122 + (int)puVar9 * 0x24 + -0x4515);
          goto LAB_2000_cfb2;
        }
        puVar11 = puVar10;
        if (iStack_122 < cStack_fe) {
          *(undefined1 *)(iStack_122 + (int)puVar9 * 0x24 + -0x4515) = 1;
        }
        else {
          *(undefined1 *)(iStack_122 + (int)puVar9 * 0x24 + -0x4515) = 0;
        }
      }
      puVar10 = puVar11;
    }
    iVar12 = (int)puVar9 + 1;
    puVar9 = puVar10;
  } while( true );
}
