/* GS.GS2 23ac:000c undefined FUN_23ac_000c(void) */
void __cdecl16far FUN_23ac_000c(void)

{
  int ***pppiVar1;
  undefined1 uVar2;
  int iVar3;
  int in_DX;
  undefined2 uVar4;
  int ***pppiVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined1 local_42 [4];
  undefined1 uStack_3e;
  int **ppiStack_32;
  int iStack_30;
  int **ppiStack_2e;
  undefined1 *puStack_2a;
  undefined1 local_28 [16];
  undefined1 local_18 [8];
  undefined2 uStack_10;
  undefined2 uStack_e;
  int **ppiStack_c;
  int ***pppiStack_a;
  undefined1 *puStack_8;
  int ***local_6;
  
  uVar4 = 0x10bf;
  local_6 = (int ***)0x3ad7;
  FUN_10bf_02c0();
  if (*(int *)0xb8be != 0) {
LAB_23ac_0395:
    local_6 = (int ***)0x1b76;
    puStack_8 = (undefined1 *)0xb84a;
    ppiStack_c = (int **)0x3e60;
    pppiStack_a = (int ***)uVar4;
    ppiStack_2e = (int **)FUN_10bf_06dc();
    if ((int ***)ppiStack_2e != (int ***)0x0) {
      for (puStack_2a = (undefined1 *)0x0; (int)puStack_2a < 0x1000; puStack_2a = puStack_2a + 1) {
        pppiVar1 = (int ***)(ppiStack_2e + 1);
        *pppiVar1 = (int **)((int)*pppiVar1 + -1);
        if ((int)*pppiVar1 < 0) {
          local_6 = (int ***)ppiStack_2e;
          puStack_8 = (undefined1 *)0x10bf;
          pppiStack_a = (int ***)0x3ea0;
          uVar2 = FUN_10bf_096c();
          *puStack_2a = uVar2;
        }
        else {
          *puStack_2a = *(undefined1 *)*ppiStack_2e;
          *ppiStack_2e = (int *)((int)*ppiStack_2e + 1);
        }
      }
      local_6 = (int ***)ppiStack_2e;
      puStack_8 = (undefined1 *)0x10bf;
      pppiStack_a = (int ***)0x3eba;
      FUN_10bf_05f6();
    }
    *(undefined2 *)0xb8bc = 0;
    *(uint *)0xb832 = *(byte *)0xb848 & 0xf;
    *(uint *)0xb834 = *(byte *)0xb848 & 0x10;
    return;
  }
  local_6 = (int ***)0x10bf;
  puStack_8 = (undefined1 *)0x3aec;
  FUN_165c_0118();
  local_6 = (int ***)0x1ac0;
  puStack_8 = (undefined1 *)0x165c;
  pppiStack_a = (int ***)0x3af4;
  FUN_20bc_0020();
  *(undefined2 *)0xb8bc = 0;
  *(undefined2 *)0xb8be = 0;
  local_6 = (int ***)0x4;
  puStack_8 = (undefined1 *)(*(int *)0xb8ce * 0x36 + -0x49eb);
  pppiStack_a = (int ***)local_42;
  ppiStack_c = (int **)0x20bc;
  uStack_e = 0x3b16;
  FUN_10bf_2250();
  uStack_3e = 0;
  local_6 = (int ***)*(undefined2 *)0xb8d0;
  puStack_8 = local_42;
  pppiStack_a = (int ***)0x1ad7;
  ppiStack_c = (int **)local_18;
  uStack_e = 0x10bf;
  uStack_10 = 0x3b31;
  FUN_10bf_26e0();
  local_6 = (int ***)&local_6;
  puStack_8 = local_18;
  pppiStack_a = (int ***)0x10bf;
  ppiStack_c = (int **)0x3b41;
  iVar3 = FUN_1f61_029a();
  if (-1 < iVar3) {
    local_6 = (int ***)0x4;
    puStack_8 = (undefined1 *)0x1ae3;
    pppiStack_a = (int ***)&local_6;
    ppiStack_c = (int **)0x1f61;
    uVar4 = 0x10bf;
    uStack_e = 0x3b56;
    iVar3 = FUN_10bf_2278();
    if (iVar3 == 0) {
      while( true ) {
        local_6 = (int ***)&local_6;
        pppiStack_a = (int ***)0x3b69;
        puStack_8 = (undefined1 *)uVar4;
        ppiStack_32 = (int **)FUN_1f61_0428();
        if (in_DX < 0) break;
        local_6 = (int ***)0x4;
        puStack_8 = (undefined1 *)0x1ae8;
        pppiStack_a = (int ***)&local_6;
        ppiStack_c = (int **)0x1f61;
        pppiVar5 = (int ***)0x10bf;
        uStack_e = 0x3b86;
        iVar3 = FUN_10bf_2278();
        if (iVar3 == 0) {
          local_6 = (int ***)0xb;
          puStack_8 = (undefined1 *)0xb83e;
          pppiStack_a = (int ***)0x10bf;
          pppiVar5 = (int ***)0x1f61;
          ppiStack_c = (int **)0x3b97;
          FUN_1f61_053c();
        }
        uVar4 = 0x1f61;
        puStack_8 = (undefined1 *)0x3ba4;
        local_6 = pppiVar5;
        FUN_1f61_040a();
      }
      local_6 = (int ***)0xb83f;
      puStack_8 = (undefined1 *)0x1aed;
      pppiStack_a = (int ***)local_28;
      ppiStack_c = (int **)0x1f61;
      uStack_e = 0x3bb5;
      iStack_30 = in_DX;
      FUN_10bf_26e0();
      local_6 = (int ***)&local_6;
      puStack_8 = local_28;
      pppiStack_a = (int ***)0x10bf;
      ppiStack_c = (int **)0x3bc5;
      iVar3 = FUN_1f61_029a();
      if (-1 < iVar3) {
        local_6 = (int ***)0x4;
        puStack_8 = (undefined1 *)0x1af4;
        pppiStack_a = (int ***)&local_6;
        ppiStack_c = (int **)0x1f61;
        uVar4 = 0x10bf;
        uStack_e = 0x3bda;
        iVar3 = FUN_10bf_2278();
        if (iVar3 == 0) {
          while( true ) {
            local_6 = (int ***)&local_6;
            pppiStack_a = (int ***)0x3bed;
            puStack_8 = (undefined1 *)uVar4;
            ppiStack_32 = (int **)FUN_1f61_0428();
            iStack_30 = in_DX;
            if (in_DX < 0) break;
            local_6 = (int ***)0x4;
            puStack_8 = (undefined1 *)0x1af9;
            pppiStack_a = (int ***)&local_6;
            ppiStack_c = (int **)0x1f61;
            uStack_e = 0x3c0c;
            iVar3 = FUN_10bf_2278();
            if (iVar3 == 0) {
              local_6 = (int ***)0x9;
              puStack_8 = (undefined1 *)0xb84a;
              pppiStack_a = (int ***)0x10bf;
              uVar4 = 0x1f61;
              ppiStack_c = (int **)0x3c1d;
              FUN_1f61_053c();
            }
            else {
              local_6 = (int ***)0x4;
              puStack_8 = (undefined1 *)0x1afe;
              pppiStack_a = (int ***)&local_6;
              ppiStack_c = (int **)0x10bf;
              uStack_e = 0x3c36;
              local_6 = (int ***)FUN_10bf_2278();
              if (local_6 == (int ***)0x0) {
                puStack_8 = (undefined1 *)0x9;
                pppiStack_a = (int ***)iStack_30;
                ppiStack_c = ppiStack_32;
                uStack_e = 0x10bf;
                uStack_10 = 0x3c4b;
                uVar6 = FUN_10bf_2efc();
                in_DX = (int)((ulong)uVar6 >> 0x10);
                *(int *)0xb8c0 = (int)uVar6;
                local_6 = (int ***)((int)uVar6 * 9);
                puStack_8 = (undefined1 *)0x10bf;
                pppiStack_a = (int ***)0x3c5b;
                uVar4 = FUN_1dea_1048();
                *(undefined2 *)0xb858 = uVar4;
                *(int *)0xb85a = in_DX;
                local_6 = (int ***)0x1b03;
                puStack_8 = (undefined1 *)0x1dea;
                pppiStack_a = (int ***)0x3c6d;
                FUN_20bc_0020();
                local_6 = (int ***)ppiStack_32;
                puStack_8 = (undefined1 *)*(undefined2 *)0xb85a;
                pppiStack_a = (int ***)*(undefined2 *)0xb858;
                ppiStack_c = (int **)0x20bc;
                uVar4 = 0x1f61;
                uStack_e = 0x3c80;
                FUN_1f61_056a();
              }
              else {
                local_6 = (int ***)0x4;
                puStack_8 = (undefined1 *)0x1b12;
                pppiStack_a = (int ***)&local_6;
                ppiStack_c = (int **)0x10bf;
                uStack_e = 0x3c94;
                local_6 = (int ***)FUN_10bf_2278();
                if (local_6 == (int ***)0x0) {
                  puStack_8 = (undefined1 *)0x8;
                  pppiStack_a = (int ***)iStack_30;
                  ppiStack_c = ppiStack_32;
                  uStack_e = 0x10bf;
                  uStack_10 = 0x3ca9;
                  uVar6 = FUN_10bf_2efc();
                  in_DX = (int)((ulong)uVar6 >> 0x10);
                  *(int *)0xb8c6 = (int)uVar6;
                  local_6 = (int ***)((int)uVar6 << 3);
                  puStack_8 = (undefined1 *)0x10bf;
                  pppiStack_a = (int ***)0x3cb5;
                  uVar4 = FUN_1dea_1048();
                  *(undefined2 *)0xb864 = uVar4;
                  *(int *)0xb866 = in_DX;
                  local_6 = (int ***)0x1b17;
                  puStack_8 = (undefined1 *)0x1dea;
                  pppiStack_a = (int ***)0x3cc7;
                  FUN_20bc_0020();
                  local_6 = (int ***)ppiStack_32;
                  puStack_8 = (undefined1 *)*(undefined2 *)0xb866;
                  pppiStack_a = (int ***)*(undefined2 *)0xb864;
                  ppiStack_c = (int **)0x20bc;
                  uVar4 = 0x1f61;
                  uStack_e = 0x3cda;
                  FUN_1f61_056a();
                }
                else {
                  local_6 = (int ***)0x4;
                  puStack_8 = (undefined1 *)0x1b26;
                  pppiStack_a = (int ***)&local_6;
                  ppiStack_c = (int **)0x10bf;
                  uStack_e = 0x3cee;
                  local_6 = (int ***)FUN_10bf_2278();
                  if (local_6 == (int ***)0x0) {
                    puStack_8 = (undefined1 *)0x11;
                    ppiStack_c = ppiStack_32 + -0x20;
                    pppiStack_a = (int ***)(iStack_30 - (uint)(ppiStack_32 < (int ***)0x40));
                    uStack_e = 0x10bf;
                    uStack_10 = 0x3d0b;
                    uVar6 = FUN_10bf_2efc();
                    in_DX = (int)((ulong)uVar6 >> 0x10);
                    *(undefined2 *)0xb8c4 = (int)uVar6;
                    local_6 = (int ***)ppiStack_32;
                    puStack_8 = (undefined1 *)0x10bf;
                    pppiStack_a = (int ***)0x3d16;
                    uVar4 = FUN_1dea_1048();
                    *(undefined2 *)0xb854 = uVar4;
                    *(int *)0xb856 = in_DX;
                    local_6 = (int ***)0x1b2b;
                    puStack_8 = (undefined1 *)0x1dea;
                    pppiStack_a = (int ***)0x3d28;
                    FUN_20bc_0020();
                    local_6 = (int ***)ppiStack_32;
                    puStack_8 = (undefined1 *)*(undefined2 *)0xb856;
                    pppiStack_a = (int ***)*(undefined2 *)0xb854;
                    ppiStack_c = (int **)0x20bc;
                    uVar4 = 0x1f61;
                    uStack_e = 0x3d3b;
                    FUN_1f61_056a();
                  }
                  else {
                    local_6 = (int ***)0x4;
                    puStack_8 = (undefined1 *)0x1b3a;
                    pppiStack_a = (int ***)&local_6;
                    ppiStack_c = (int **)0x10bf;
                    uStack_e = 0x3d50;
                    local_6 = (int ***)FUN_10bf_2278();
                    if (local_6 == (int ***)0x0) {
                      puStack_8 = (undefined1 *)0x27;
                      pppiStack_a = (int ***)iStack_30;
                      ppiStack_c = ppiStack_32;
                      uStack_e = 0x10bf;
                      uStack_10 = 0x3d65;
                      uVar6 = FUN_10bf_2efc();
                      in_DX = (int)((ulong)uVar6 >> 0x10);
                      *(int *)0xb8c8 = (int)uVar6;
                      local_6 = (int ***)((int)uVar6 * 0x27);
                      puStack_8 = (undefined1 *)0x10bf;
                      pppiStack_a = (int ***)0x3d71;
                      uVar4 = FUN_1dea_1048();
                      *(undefined2 *)0xb860 = uVar4;
                      *(int *)0xb862 = in_DX;
                      local_6 = (int ***)0x1b3f;
                      puStack_8 = (undefined1 *)0x1dea;
                      pppiStack_a = (int ***)0x3d83;
                      FUN_20bc_0020();
                      local_6 = (int ***)ppiStack_32;
                      puStack_8 = (undefined1 *)*(undefined2 *)0xb862;
                      pppiStack_a = (int ***)*(undefined2 *)0xb860;
                      ppiStack_c = (int **)0x20bc;
                      uVar4 = 0x1f61;
                      uStack_e = 0x3d96;
                      FUN_1f61_056a();
                    }
                    else {
                      local_6 = (int ***)0x4;
                      puStack_8 = (undefined1 *)0x1b4e;
                      pppiStack_a = (int ***)&local_6;
                      ppiStack_c = (int **)0x10bf;
                      uStack_e = 0x3daa;
                      local_6 = (int ***)FUN_10bf_2278();
                      if (local_6 == (int ***)0x0) {
                        puStack_8 = (undefined1 *)0x8;
                        pppiStack_a = (int ***)iStack_30;
                        ppiStack_c = ppiStack_32;
                        uStack_e = 0x10bf;
                        uStack_10 = 0x3dbf;
                        uVar6 = FUN_10bf_2efc();
                        in_DX = (int)((ulong)uVar6 >> 0x10);
                        *(int *)0xb8ca = (int)uVar6;
                        local_6 = (int ***)((int)uVar6 << 3);
                        puStack_8 = (undefined1 *)0x10bf;
                        pppiStack_a = (int ***)0x3dcb;
                        uVar4 = FUN_1dea_1048();
                        *(undefined2 *)0xb85c = uVar4;
                        *(int *)0xb85e = in_DX;
                        local_6 = (int ***)0x1b53;
                        puStack_8 = (undefined1 *)0x1dea;
                        pppiStack_a = (int ***)0x3ddd;
                        FUN_20bc_0020();
                        local_6 = (int ***)ppiStack_32;
                        puStack_8 = (undefined1 *)*(undefined2 *)0xb85e;
                        pppiStack_a = (int ***)*(undefined2 *)0xb85c;
                        ppiStack_c = (int **)0x20bc;
                        uVar4 = 0x1f61;
                        uStack_e = 0x3df0;
                        FUN_1f61_056a();
                      }
                      else {
                        local_6 = (int ***)0x4;
                        puStack_8 = (undefined1 *)0x1b62;
                        pppiStack_a = (int ***)&local_6;
                        ppiStack_c = (int **)0x10bf;
                        uVar4 = 0x10bf;
                        uStack_e = 0x3e04;
                        local_6 = (int ***)FUN_10bf_2278();
                        if (local_6 == (int ***)0x0) {
                          puStack_8 = (undefined1 *)0x20;
                          pppiStack_a = (int ***)iStack_30;
                          ppiStack_c = ppiStack_32;
                          uStack_e = 0x10bf;
                          uStack_10 = 0x3e19;
                          uVar6 = FUN_10bf_2efc();
                          in_DX = (int)((ulong)uVar6 >> 0x10);
                          *(int *)0xb8cc = (int)uVar6;
                          local_6 = (int ***)((int)uVar6 << 5);
                          puStack_8 = (undefined1 *)0x10bf;
                          pppiStack_a = (int ***)0x3e25;
                          uVar4 = FUN_1dea_1048();
                          *(undefined2 *)0xb868 = uVar4;
                          *(int *)0xb86a = in_DX;
                          local_6 = (int ***)0x1b67;
                          puStack_8 = (undefined1 *)0x1dea;
                          pppiStack_a = (int ***)0x3e37;
                          FUN_20bc_0020();
                          local_6 = (int ***)ppiStack_32;
                          puStack_8 = (undefined1 *)*(undefined2 *)0xb86a;
                          pppiStack_a = (int ***)*(undefined2 *)0xb868;
                          ppiStack_c = (int **)0x20bc;
                          uVar4 = 0x1f61;
                          uStack_e = 0x3e4a;
                          FUN_1f61_056a();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          local_6 = (int ***)0x1f61;
          uVar4 = 0x1f61;
          puStack_8 = (undefined1 *)0x3e55;
          FUN_1f61_040a();
          goto LAB_23ac_0395;
        }
      }
      return;
    }
  }
  return;
}
