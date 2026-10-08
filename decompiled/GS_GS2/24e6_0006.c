/* GS.GS2 24e6:0006 undefined FUN_24e6_0006(void) */
undefined2 __cdecl16far FUN_24e6_0006(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 **ppuVar3;
  int iVar4;
  undefined2 *puVar5;
  int unaff_SI;
  undefined2 **ppuVar6;
  undefined2 unaff_DI;
  int *piVar7;
  undefined2 uVar8;
  undefined2 ***pppuVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *local_f2 [7];
  int iStack_e4;
  int iStack_e2;
  undefined2 local_e0 [6];
  undefined1 auStack_d4 [44];
  undefined2 *local_a8 [8];
  int iStack_98;
  undefined2 *local_96 [19];
  undefined2 *local_70 [7];
  undefined2 *local_62 [4];
  undefined1 uStack_5a;
  undefined2 *local_54 [7];
  undefined2 *local_46;
  int iStack_44;
  undefined2 **ppuStack_42;
  int in_stack_0000ffc0;
  int iStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_30;
  undefined2 uStack_2a;
  undefined1 uStack_27;
  char cStack_26;
  char cStack_25;
  undefined2 *local_22 [2];
  undefined2 *local_1e;
  undefined2 uStack_1c;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  undefined2 ***local_c;
  undefined2 ***pppuStack_a;
  
  FUN_10bf_02c0();
  iStack_e4 = 0;
  pppuStack_a = (undefined2 ***)param_1;
  local_c = (undefined2 ***)local_62;
  iStack_e = 0x10bf;
  uStack_10 = 0x4e87;
  FUN_10bf_2250();
  uStack_5a = 0;
  pppuStack_a = (undefined2 ***)local_62;
  local_c = (undefined2 ***)0x10bf;
  iStack_e = 0x4e9a;
  FUN_10bf_2196();
  pppuStack_a = (undefined2 ***)0x10bf;
  local_c = (undefined2 ***)0x4ea6;
  FUN_20bc_0020();
  pppuStack_a = (undefined2 ***)local_62;
  local_c = (undefined2 ***)0x20bc;
  iStack_e = 0x4eb6;
  iVar4 = FUN_1f61_029a();
  if (-1 < iVar4) {
    pppuStack_a = (undefined2 ***)0x1db1;
    local_c = (undefined2 ***)local_22;
    iStack_e = 0x1f61;
    uStack_10 = 0x4ecb;
    iVar4 = FUN_10bf_2278();
    if (iVar4 == 0) {
      pppuStack_a = (undefined2 ***)0x4edf;
      FUN_1000_06f2();
      pppuStack_a = (undefined2 ***)0x4ee4;
      FUN_1000_0000();
      pppuStack_a = (undefined2 ***)0x4ee9;
      FUN_202b_000c();
      pppuStack_a = (undefined2 ***)0x4eee;
      FUN_206a_000a();
      pppuStack_a = (undefined2 ***)0x4ef3;
      FUN_2330_000e();
      pppuStack_a = (undefined2 ***)0x4ef8;
      FUN_1b63_0004();
      pppuStack_a = (undefined2 ***)0x4efd;
      FUN_1b63_02a6();
      uVar8 = 0x25f0;
      pppuStack_a = (undefined2 ***)0x4f02;
      FUN_25f0_0006();
      while( true ) {
        local_c = (undefined2 ***)0x4f0b;
        pppuStack_a = (undefined2 ***)uVar8;
        iStack_e2 = FUN_1f61_0428();
        if (iStack_e2 < 0) break;
        pppuStack_a = (undefined2 ***)0x1db6;
        local_c = (undefined2 ***)local_22;
        iStack_e = 0x1f61;
        uStack_10 = 0x4f28;
        iVar4 = FUN_10bf_2278();
        if (iVar4 == 0) {
          iStack_e4 = 1;
          pppuStack_a = (undefined2 ***)0xb5f0;
          local_c = (undefined2 ***)0x10bf;
          uVar8 = 0x1f61;
          iStack_e = 0x4f3f;
          FUN_1f61_053c();
        }
        else {
          pppuStack_a = (undefined2 ***)0x1dbb;
          local_c = (undefined2 ***)local_22;
          iStack_e = 0x10bf;
          uStack_10 = 0x4f54;
          pppuStack_a = (undefined2 ***)FUN_10bf_2278();
          if (pppuStack_a == (undefined2 ***)0x0) {
            local_c = (undefined2 ***)&local_46;
            iStack_e = 0x10bf;
            uStack_10 = 0x4f67;
            FUN_10bf_2c3a();
            if (0x24 < iStack_e2) {
              iStack_e2 = 0x24;
            }
            pppuStack_a = (undefined2 ***)&local_46;
            local_c = (undefined2 ***)0x10bf;
            iStack_e = 0x4f84;
            FUN_1f61_053c();
            uStack_27 = 0;
            puVar5 = &uStack_2a;
            ppuVar6 = &local_46;
            for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar1 = puVar5;
              puVar5 = puVar5 + 1;
              ppuVar3 = ppuVar6;
              ppuVar6 = ppuVar6 + 1;
              *puVar1 = *ppuVar3;
            }
            uVar8 = 0x106f;
            FUN_106f_0080();
          }
          else {
            pppuStack_a = (undefined2 ***)0x1dc0;
            local_c = (undefined2 ***)local_22;
            iStack_e = 0x10bf;
            uStack_10 = 0x4fb4;
            pppuStack_a = (undefined2 ***)FUN_10bf_2278();
            if (pppuStack_a == (undefined2 ***)0x0) {
              local_c = (undefined2 ***)local_96;
              iStack_e = 0x10bf;
              uStack_10 = 0x4fc8;
              FUN_10bf_2c3a();
              pppuStack_a = (undefined2 ***)local_96;
              local_c = (undefined2 ***)0x10bf;
              iStack_e = 0x4fd9;
              FUN_1f61_053c();
              puVar5 = (undefined2 *)&stack0xffd4;
              ppuVar6 = local_96;
              for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
                puVar1 = puVar5;
                puVar5 = puVar5 + 1;
                ppuVar3 = ppuVar6;
                ppuVar6 = ppuVar6 + 1;
                *puVar1 = *ppuVar3;
              }
              uVar8 = 0x1000;
              uStack_30 = 0x4ff1;
              FUN_1000_0010();
            }
            else {
              pppuStack_a = (undefined2 ***)0x1dc5;
              local_c = (undefined2 ***)local_22;
              iStack_e = 0x10bf;
              uStack_10 = 0x5006;
              pppuStack_a = (undefined2 ***)FUN_10bf_2278();
              if (pppuStack_a == (undefined2 ***)0x0) {
                local_c = (undefined2 ***)&local_1e;
                iStack_e = 0x10bf;
                uStack_10 = 0x5019;
                FUN_10bf_2c3a();
                pppuStack_a = (undefined2 ***)&local_1e;
                local_c = (undefined2 ***)0x10bf;
                iStack_e = 0x5029;
                FUN_1f61_053c();
                puVar5 = (undefined2 *)&stack0xffe8;
                ppuVar6 = &local_1e;
                for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar1 = puVar5;
                  puVar5 = puVar5 + 1;
                  ppuVar3 = ppuVar6;
                  ppuVar6 = ppuVar6 + 1;
                  *puVar1 = *ppuVar3;
                }
                uVar8 = 0x1000;
                uStack_1c = 0x5040;
                FUN_1000_039e();
              }
              else {
                pppuStack_a = (undefined2 ***)0x1dca;
                local_c = (undefined2 ***)local_22;
                iStack_e = 0x10bf;
                uStack_10 = 0x5054;
                pppuStack_a = (undefined2 ***)FUN_10bf_2278();
                if (pppuStack_a == (undefined2 ***)0x0) {
                  local_c = &local_c;
                  iStack_e = 0x10bf;
                  uStack_10 = 0x5067;
                  FUN_10bf_2c3a();
                  pppuStack_a = &local_c;
                  local_c = (undefined2 ***)0x10bf;
                  iStack_e = 0x5077;
                  FUN_1f61_053c();
                  uStack_12 = 0x1f61;
                  uVar8 = 0x2330;
                  uStack_14 = 0x508e;
                  uStack_10 = unaff_DI;
                  iStack_e = unaff_SI;
                  FUN_2330_001c();
                }
                else {
                  pppuStack_a = (undefined2 ***)0x1dcf;
                  local_c = (undefined2 ***)local_22;
                  iStack_e = 0x10bf;
                  uStack_10 = 0x50a2;
                  pppuStack_a = (undefined2 ***)FUN_10bf_2278();
                  if (pppuStack_a == (undefined2 ***)0x0) {
                    local_c = (undefined2 ***)local_f2;
                    iStack_e = 0x10bf;
                    uStack_10 = 0x50b6;
                    FUN_10bf_2c3a();
                    pppuStack_a = (undefined2 ***)local_f2;
                    local_c = (undefined2 ***)0x10bf;
                    iStack_e = 0x50c7;
                    FUN_1f61_053c();
                    puVar5 = &uStack_14;
                    ppuVar6 = local_f2;
                    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                      puVar1 = puVar5;
                      puVar5 = puVar5 + 1;
                      ppuVar3 = ppuVar6;
                      ppuVar6 = ppuVar6 + 1;
                      *puVar1 = *ppuVar3;
                    }
                    uVar8 = 0x1b63;
                    FUN_1b63_0012();
                  }
                  else {
                    pppuStack_a = (undefined2 ***)0x1dd4;
                    local_c = (undefined2 ***)local_22;
                    iStack_e = 0x10bf;
                    uStack_10 = 0x50f4;
                    pppuStack_a = (undefined2 ***)FUN_10bf_2278();
                    if (pppuStack_a == (undefined2 ***)0x0) {
                      local_c = (undefined2 ***)local_70;
                      iStack_e = 0x10bf;
                      uStack_10 = 0x5107;
                      FUN_10bf_2c3a();
                      pppuStack_a = (undefined2 ***)local_70;
                      local_c = (undefined2 ***)0x10bf;
                      iStack_e = 0x5117;
                      FUN_1f61_053c();
                      puVar5 = &uStack_14;
                      ppuVar6 = local_70;
                      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                        puVar1 = puVar5;
                        puVar5 = puVar5 + 1;
                        ppuVar3 = ppuVar6;
                        ppuVar6 = ppuVar6 + 1;
                        *puVar1 = *ppuVar3;
                      }
                      uVar8 = 0x1b63;
                      FUN_1b63_02d6();
                    }
                    else {
                      pppuStack_a = (undefined2 ***)0x1dd9;
                      local_c = (undefined2 ***)local_22;
                      iStack_e = 0x10bf;
                      uStack_10 = 0x5142;
                      pppuStack_a = (undefined2 ***)FUN_10bf_2278();
                      if (pppuStack_a == (undefined2 ***)0x0) {
                        local_c = (undefined2 ***)local_54;
                        iStack_e = 0x10bf;
                        uStack_10 = 0x5155;
                        FUN_10bf_2c3a();
                        pppuStack_a = (undefined2 ***)local_54;
                        local_c = (undefined2 ***)0x10bf;
                        iStack_e = 0x5165;
                        FUN_1f61_053c();
                        puVar5 = &uStack_14;
                        ppuVar6 = local_54;
                        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                          puVar1 = puVar5;
                          puVar5 = puVar5 + 1;
                          ppuVar3 = ppuVar6;
                          ppuVar6 = ppuVar6 + 1;
                          *puVar1 = *ppuVar3;
                        }
                        uVar8 = 0x206a;
                        FUN_206a_0018();
                      }
                      else {
                        pppuStack_a = (undefined2 ***)0x1dde;
                        local_c = (undefined2 ***)local_22;
                        iStack_e = 0x10bf;
                        uStack_10 = 0x5190;
                        pppuStack_a = (undefined2 ***)FUN_10bf_2278();
                        if (pppuStack_a == (undefined2 ***)0x0) {
                          local_c = (undefined2 ***)local_a8;
                          iStack_e = 0x10bf;
                          uStack_10 = 0x51a4;
                          FUN_10bf_2c3a();
                          pppuStack_a = (undefined2 ***)local_a8;
                          local_c = (undefined2 ***)0x10bf;
                          iStack_e = 0x51b5;
                          FUN_1f61_053c();
                          puVar5 = (undefined2 *)&stack0xffea;
                          ppuVar6 = local_a8;
                          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                            puVar1 = puVar5;
                            puVar5 = puVar5 + 1;
                            ppuVar3 = ppuVar6;
                            ppuVar6 = ppuVar6 + 1;
                            *puVar1 = *ppuVar3;
                          }
                          uVar8 = 0x25f0;
                          FUN_25f0_0014();
                        }
                        else {
                          pppuStack_a = (undefined2 ***)0x1de3;
                          local_c = (undefined2 ***)local_22;
                          iStack_e = 0x10bf;
                          uVar8 = 0x10bf;
                          uStack_10 = 0x51e0;
                          iVar4 = FUN_10bf_2278();
                          if (iVar4 == 0) {
                            pppuStack_a = (undefined2 ***)local_e0;
                            local_c = (undefined2 ***)0x10bf;
                            iStack_e = 0x51f5;
                            FUN_1f61_053c();
                            iStack_98 = iStack_e2 + -0xc;
                            if (iStack_98 < 0) {
                              iStack_98 = 0;
                            }
                            else if (0x27 < iStack_98) {
                              iStack_98 = 0x27;
                            }
                            auStack_d4[iStack_98] = 0;
                            piVar7 = &iStack_3e;
                            puVar5 = local_e0;
                            for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
                              puVar2 = piVar7;
                              piVar7 = piVar7 + 1;
                              puVar1 = puVar5;
                              puVar5 = puVar5 + 1;
                              *puVar2 = *puVar1;
                            }
                            in_stack_0000ffc0 = 0x1f61;
                            uVar8 = 0x202b;
                            ppuStack_42 = (undefined2 ***)0x5239;
                            FUN_202b_001a();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (iStack_e4 != 0) {
        pppuStack_a = (undefined2 ***)0x1f61;
        local_c = (undefined2 ***)0x5257;
        puVar5 = (undefined2 *)FUN_106f_0430();
        ppuVar6 = &local_46;
        for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
          ppuVar3 = ppuVar6;
          ppuVar6 = ppuVar6 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *ppuVar3 = (undefined2 *)*puVar1;
        }
        *(undefined2 *)0x957a = local_46;
        *(undefined2 *)0x9572 = uStack_3c;
        if (*(int *)0xb60b < 0) {
          *(int *)0xb60b = (int)cStack_26 + (in_stack_0000ffc0 + -1) / 2 + iStack_44;
        }
        if (*(int *)0xb60d < 0) {
          *(int *)0xb60d = (int)cStack_25 + (iStack_3e + -1) / 2 + (int)ppuStack_42;
        }
        pppuStack_a = (undefined2 ***)0x106f;
        for (iStack_98 = 0; iStack_98 < 3; iStack_98 = iStack_98 + 1) {
          pppuVar9 = pppuStack_a;
          if (*(char *)(iStack_98 * 9 + -0x4a10) != '\0') {
            pppuVar9 = (undefined2 ***)0x1d02;
            iStack_e = 0x52e1;
            local_c = pppuStack_a;
            pppuStack_a = (undefined2 ***)(iStack_98 + 1);
            FUN_1d02_0608();
          }
          pppuStack_a = pppuVar9;
        }
        local_c = (undefined2 ***)0x52ed;
        puVar5 = (undefined2 *)FUN_106f_0430();
        ppuVar6 = &local_46;
        for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
          ppuVar3 = ppuVar6;
          ppuVar6 = ppuVar6 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *ppuVar3 = (undefined2 *)*puVar1;
        }
        if (*(int *)0x8c8 != 0) {
          local_c = (undefined2 ***)ppuStack_42;
          iStack_e = iStack_44;
          uStack_10 = 0x106f;
          uStack_12 = 0x5314;
          pppuStack_a = (undefined2 ***)in_stack_0000ffc0;
          FUN_1ef4_0030();
        }
        pppuStack_a = (undefined2 ***)0x531c;
        FUN_1f61_040a();
        *(undefined2 *)0x9576 = 0;
        *(undefined2 *)0x9574 = 0;
        *(undefined2 *)0x954a = 0;
        *(undefined2 *)0x9548 = 0;
        *(undefined1 *)0xb613 = 0;
        pppuStack_a = (undefined2 ***)0x1f61;
        local_c = (undefined2 ***)0x5334;
        FUN_24e6_0982();
        pppuStack_a = (undefined2 ***)0x7;
        local_c = (undefined2 ***)0x4;
        iStack_e = 0x1f61;
        uStack_10 = 0x5341;
        FUN_24e6_0994();
        return 0;
      }
      return 0xffff;
    }
  }
  return 0xffff;
}
