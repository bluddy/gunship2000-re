/* GS.GS2 3000:0574 undefined FUN_3000_0574(void) */
/* WARNING: Instruction at (ram,0x00032adc) overlaps instruction at (ram,0x00032ada)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000384fa) */
/* WARNING: Type propagation algorithm not settling */

undefined2 ****** __cdecl16far
FUN_3000_0574(undefined2 ****param_1,undefined2 ****param_2,undefined2 *****param_3,int *param_4,
             int param_5)

{
  undefined2 ****ppppuVar1;
  undefined2 *puVar2;
  undefined2 ****ppppuVar3;
  undefined2 *****pppppuVar4;
  undefined2 *****pppppuVar5;
  uint *puVar6;
  undefined2 ******ppppppuVar7;
  int iVar8;
  undefined2 *****pppppuVar9;
  undefined2 ******in_CX;
  undefined2 *****pppppuVar10;
  undefined2 *puVar11;
  undefined2 ***unaff_SI;
  undefined2 ***pppuVar12;
  undefined2 ****ppppuVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined2 ***unaff_DI;
  undefined2 ***pppuVar16;
  uint *puVar17;
  undefined2 ***unaff_ES;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 *****pppppuVar20;
  undefined2 ******ppppppuVar21;
  undefined2 unaff_SS;
  undefined2 ***unaff_DS;
  undefined2 ***pppuVar22;
  undefined2 ******ppppppuStack_12;
  undefined2 *******local_10;
  undefined2 *****local_e;
  undefined2 *****pppppuStack_c;
  undefined2 ******ppppppuStack_a;
  
  func_0x00000eb0();
  ppppppuStack_a = (undefined2 ******)*(undefined2 *)0x2a38;
  pppppuStack_c = (undefined2 *****)*(undefined2 *)0x2a36;
  local_e = (undefined2 *****)*(uint *)0x2a34;
  local_10 = (undefined2 *******)*param_4;
  ppppppuStack_12 = (undefined2 ******)*param_3;
  pppppuVar10 = param_3;
  ppppppuVar7 = (undefined2 ******)func_0x0002118e();
  if ((ppppppuVar7 == (undefined2 ******)0x0) && (ppppppuStack_12 == (undefined2 ******)0x0)) {
    return ppppppuVar7;
  }
  if (param_5 == 0) {
    for (ppppppuStack_12 = (undefined2 ******)0x1; (int)ppppppuStack_12 < 0xf;
        ppppppuStack_12 = (undefined2 ******)((int)ppppppuStack_12 + 1)) {
      iVar8 = (int)ppppppuStack_12 * 9;
      ppppppuStack_a = (undefined2 ******)*(undefined2 *)(iVar8 + 0x2a38);
      pppppuStack_c = (undefined2 *****)*(undefined2 *)(iVar8 + 0x2a36);
      local_e = (undefined2 *****)*(uint *)(iVar8 + 0x2a34);
      local_10 = (undefined2 *******)*param_4;
      ppppppuStack_12 = (undefined2 ******)*param_3;
      pppppuVar10 = param_3;
      iVar8 = func_0x0002118e();
      if (iVar8 != 0) break;
    }
  }
  ppppppuVar7 = ppppppuStack_12;
  if ((int)ppppppuStack_12 < 0xf) {
    ppppppuStack_a = (undefined2 ******)0x20f4;
    pppppuStack_c = (undefined2 *****)0x61b;
    in_CX = ppppppuStack_12;
    func_0x000214fc();
  }
  pppppuVar9 = (undefined2 *****)0x20f4;
  pppuVar12 = unaff_SI;
  pppuVar16 = unaff_DI;
  if ((ppppppuStack_12 != (undefined2 ******)0x0) && ((int)ppppppuStack_12 < 0xf)) {
    if ((int)ppppppuStack_12 - *(int *)0xc01c == -10) {
      if (*(int *)0xc01c == 0xd) {
        if (*(int *)0xc4f6 == 9999) {
          ppppppuStack_a = (undefined2 ******)0x5d;
          pppppuStack_c = (undefined2 *****)0x20;
          local_e = (undefined2 *****)0xd6;
          unaff_ES = (undefined2 ***)*(undefined2 *)0x71aa;
          local_10 = (undefined2 *******)*(undefined2 *)0x986;
          func_0x0002126e();
          ppppppuStack_a = (undefined2 ******)0x6;
          pppppuStack_c = (undefined2 *****)0x82;
          local_e = (undefined2 *****)0x28;
          local_10 = (undefined2 *******)0xb2;
          func_0x0000c8c0();
          ppppppuStack_a = (undefined2 ******)0x68a;
          func_0x000219cc();
        }
      }
      else if ((*(int *)0xc01c == 0xe) && (*(int *)0xc50a == 9999)) {
        ppppppuStack_a = (undefined2 ******)0x5d;
        pppppuStack_c = (undefined2 *****)0x31;
        local_e = (undefined2 *****)0xe0;
        unaff_ES = (undefined2 ***)*(undefined2 *)0x71aa;
        local_10 = (undefined2 *******)*(undefined2 *)0x986;
        func_0x0002126e();
        ppppppuStack_a = (undefined2 ******)0x6;
        pppppuStack_c = (undefined2 *****)0x82;
        local_e = (undefined2 *****)0x39;
        local_10 = (undefined2 *******)0xb2;
        func_0x0000c8c0();
        ppppppuStack_a = (undefined2 ******)0x6d0;
        func_0x000219cc();
      }
      ppppppuStack_a = (undefined2 ******)0x6e7;
      func_0x00026cfc();
    }
    else {
      if ((*(char *)0xe289 == '\0') && (*(int *)0xc020 != 0)) {
        pppppuVar10 = (undefined2 *****)((int)ppppppuStack_12 * 9);
        ppppppuStack_a = (undefined2 ******)pppppuVar10[0x151a];
        pppppuStack_c = (undefined2 *****)0x880;
        local_e = (undefined2 *****)pppppuVar10[0x151d];
        local_10 = (undefined2 *******)pppppuVar10[0x151c];
        ppppppuStack_12 = (undefined2 ******)pppppuVar10[0x151b];
        pppppuVar9 = (undefined2 *****)0x1658;
        func_0x00016658();
      }
      if ((int)ppppppuVar7 < 5) {
        if (ppppppuVar7 == (undefined2 ******)0x1) {
          ppppppuStack_a = (undefined2 ******)0x59;
          local_e = (undefined2 *****)0x740;
          pppppuStack_c = pppppuVar9;
          iVar8 = func_0x0003ecb4();
          if (iVar8 != 0) {
            if (*(int *)0xc01c != 0) {
              if (*(int *)0xc4d8 == 9999) {
                ppppppuStack_a = (undefined2 ******)0x78;
                pppppuStack_c = (undefined2 *****)0xc;
                local_e = (undefined2 *****)0xc6;
                unaff_ES = (undefined2 ***)*(undefined2 *)0x71aa;
                local_10 = (undefined2 *******)*(int *)0x982;
                pppppuVar9 = (undefined2 *****)0x20f4;
                func_0x0002126e();
              }
              if (*(int *)0xc01c < 0xb) {
                in_CX = (undefined2 ******)*(uint *)0xc01c;
                pppppuStack_c = (undefined2 *****)0x792;
                ppppppuStack_a = (undefined2 ******)pppppuVar9;
                func_0x000214fc();
              }
              ppppppuStack_a = (undefined2 ******)0x799;
              func_0x0003fb9c();
              ppppppuStack_a = (undefined2 ******)0x79d;
              func_0x0003fc5e();
              pppppuVar9 = (undefined2 *****)0x20f4;
              ppppppuStack_a = (undefined2 ******)0x7a2;
              func_0x00026cfc();
            }
            *(int *)0xc018 = *(int *)0xc018 + 1;
            pppppuVar20 = pppppuVar9;
            if (*(int *)0xc4d8 != 9999) {
              ppppppuStack_a = (undefined2 ******)0xc4d2;
              pppppuVar20 = (undefined2 *****)0x20f4;
              local_e = (undefined2 *****)0x7b8;
              pppppuStack_c = pppppuVar9;
              func_0x00022f9c();
            }
            *(int *)0xc018 = *(int *)0xc018 + -1;
            *(undefined2 *)0xc01c = 0xb;
            pppppuStack_c = (undefined2 *****)0x7cf;
            ppppppuStack_a = (undefined2 ******)pppppuVar20;
            func_0x00022290();
          }
        }
        else if (ppppppuVar7 == (undefined2 ******)0x2) {
          ppppppuStack_a = (undefined2 ******)0x7da;
          iVar8 = func_0x0003ec0a();
          if (iVar8 != 0) {
            if (*(int *)0xc01c != 0) {
              if (*(int *)0xc4e6 == 9999) {
                ppppppuStack_a = (undefined2 ******)0x78;
                pppppuStack_c = (undefined2 *****)0xc;
                local_e = (undefined2 *****)0xc6;
                unaff_ES = (undefined2 ***)*(undefined2 *)0x71aa;
                local_10 = (undefined2 *******)*(int *)0x982;
                pppppuVar9 = (undefined2 *****)0x20f4;
                func_0x0002126e();
              }
              if (*(int *)0xc01c < 0xb) {
                in_CX = (undefined2 ******)*(uint *)0xc01c;
                pppppuStack_c = (undefined2 *****)0x829;
                ppppppuStack_a = (undefined2 ******)pppppuVar9;
                func_0x000214fc();
              }
              ppppppuStack_a = (undefined2 ******)0x830;
              func_0x0003fb9c();
              ppppppuStack_a = (undefined2 ******)0x834;
              func_0x0003fc5e();
              pppppuVar9 = (undefined2 *****)0x20f4;
              ppppppuStack_a = (undefined2 ******)0x839;
              func_0x00026cfc();
            }
            pppppuVar20 = pppppuVar9;
            if (*(int *)0xc4e6 != 9999) {
              ppppppuStack_a = (undefined2 ******)0xc4e0;
              pppppuVar20 = (undefined2 *****)0x20f4;
              local_e = (undefined2 *****)0x84b;
              pppppuStack_c = pppppuVar9;
              func_0x00022f9c();
            }
            *(undefined2 *)0xc01c = 0xc;
            pppppuStack_c = (undefined2 *****)0x85e;
            ppppppuStack_a = (undefined2 ******)pppppuVar20;
            func_0x00022290();
          }
        }
        else {
          ppppppuStack_a = (undefined2 ******)pppppuVar9;
          if (ppppppuVar7 == (undefined2 ******)0x3) {
            if (*(int *)0xc018 == 0) {
              unaff_ES = (undefined2 ***)*(undefined2 *)0x71a8;
              ppppppuStack_a = (undefined2 ******)*(undefined2 *)0xa24;
              local_e = (undefined2 *****)0x87e;
              pppppuStack_c = pppppuVar9;
              func_0x000212b0();
              if (*(int *)0xc4f6 == 9999) {
                ppppppuStack_a = (undefined2 ******)0x20f4;
                pppppuStack_c = (undefined2 *****)0x89c;
                func_0x000214fc();
                in_CX = ppppppuStack_12;
              }
            }
            else {
              *(undefined1 *)0xe291 = 0xff;
              *(undefined1 *)0x2a57 = 0;
              pppppuVar10 = (undefined2 *****)0x2a4f;
              pppppuStack_c = (undefined2 *****)0x8c0;
              func_0x000214fc();
              *(undefined1 *)0xe291 = 0;
              ppppppuStack_a = (undefined2 ******)0xd6;
              pppppuStack_c = (undefined2 *****)0x48;
              local_e = (undefined2 *****)0x61;
              local_10 = &local_10;
              iVar8 = func_0x0003ef78();
              if (iVar8 == 0) {
                if (*(int *)0xc4f6 == 9999) {
                  ppppppuStack_a = (undefined2 ******)0x20f4;
                  pppppuStack_c = (undefined2 *****)0x9bf;
                  in_CX = ppppppuVar7;
                  func_0x000214fc();
                }
              }
              else {
                if ((*(int *)0xc01c != 0) && (*(int *)0xc01c != 0xf)) {
                  ppppppuStack_a = (undefined2 ******)0x8fa;
                  func_0x0003fb9c();
                  if (*(int *)0xc01c < 0xb) {
                    ppppppuStack_a = (undefined2 ******)0x20f4;
                    pppppuStack_c = (undefined2 *****)0x914;
                    func_0x000214fc();
                  }
                  ppppppuStack_a = (undefined2 ******)0x91c;
                  func_0x00026cfc();
                }
                pppppuVar10 = &local_e;
                puVar11 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
                for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
                  pppppuVar4 = pppppuVar10;
                  pppppuVar10 = pppppuVar10 + 1;
                  puVar2 = puVar11;
                  puVar11 = puVar11 + 1;
                  *pppppuVar4 = (undefined2 ****)*puVar2;
                }
                *(undefined1 *)pppppuVar10 = *(undefined1 *)puVar11;
                if (*(int *)0xc368 != 9999) {
                  ppppppuStack_a = (undefined2 ******)0xc368;
                  pppppuStack_c = (undefined2 *****)0x20f4;
                  local_e = (undefined2 *****)0x94e;
                  func_0x00022c94();
                }
                *(int *)0xc375 = (int)local_10;
                if (*(int *)0xc4f6 != 9999) {
                  ppppppuStack_a = (undefined2 ******)0xc368;
                  pppppuStack_c = (undefined2 *****)0xc4f0;
                  local_e = (undefined2 *****)0x20f4;
                  local_10 = (undefined2 *******)0x96c;
                  func_0x00022b4c();
                }
                pppppuVar10 = (undefined2 *****)(*(int *)0xc018 * 0xb);
                pppppuVar20 = pppppuVar10 + -0x21b1;
                pppppuVar9 = &local_e;
                for (in_CX = (undefined2 ******)0x5; in_CX != (undefined2 ******)0x0;
                    in_CX = (undefined2 ******)((int)in_CX - 1)) {
                  pppppuVar5 = pppppuVar20;
                  pppppuVar20 = pppppuVar20 + 1;
                  pppppuVar4 = pppppuVar9;
                  pppppuVar9 = pppppuVar9 + 1;
                  *pppppuVar5 = *pppppuVar4;
                }
                *(undefined1 *)pppppuVar20 = *(undefined1 *)pppppuVar9;
                *(undefined2 *)0xc01c = 0xd;
                ppppppuStack_a = (undefined2 ******)0x20f4;
                pppppuStack_c = (undefined2 *****)0x99f;
                func_0x00022290();
                pppuVar12 = (undefined2 ***)((int)pppppuVar9 + 1);
                pppuVar16 = (undefined2 ***)((int)pppppuVar20 + 1);
                unaff_ES = unaff_DS;
              }
            }
          }
          else if (ppppppuVar7 == (undefined2 ******)0x4) {
            if (*(int *)0xc018 == 0) {
              unaff_ES = (undefined2 ***)*(undefined2 *)0x71a8;
              ppppppuStack_a = (undefined2 ******)*(undefined2 *)0xa24;
              local_e = (undefined2 *****)0x9e0;
              pppppuStack_c = pppppuVar9;
              func_0x000212b0();
              if (*(int *)0xc50a == 9999) {
                ppppppuStack_a = (undefined2 ******)0x20f4;
                pppppuStack_c = (undefined2 *****)0x9fe;
                func_0x000214fc();
                in_CX = ppppppuStack_12;
              }
            }
            else {
              *(undefined1 *)0xe291 = 0xff;
              *(undefined1 *)((int)ppppppuStack_12 * 9 + 0x2a3c) = 0;
              pppppuVar10 = (undefined2 *****)((int)ppppppuStack_12 * 9 + 0x2a34);
              pppppuStack_c = (undefined2 *****)0xa22;
              func_0x000214fc();
              *(undefined1 *)0xe291 = 0;
              ppppppuStack_a = (undefined2 ******)0xe0;
              pppppuStack_c = (undefined2 *****)0x59;
              local_e = (undefined2 *****)0x66;
              local_10 = &local_10;
              iVar8 = func_0x0003ef78();
              if (iVar8 == 0) {
                if (*(int *)0xc50a == 9999) {
                  ppppppuStack_a = (undefined2 ******)0x20f4;
                  pppppuStack_c = (undefined2 *****)0xb21;
                  in_CX = ppppppuVar7;
                  func_0x000214fc();
                }
              }
              else {
                if ((*(int *)0xc01c != 0) && (*(int *)0xc01c != 0x10)) {
                  ppppppuStack_a = (undefined2 ******)0xa5c;
                  func_0x0003fb9c();
                  if (*(int *)0xc01c < 0xb) {
                    ppppppuStack_a = (undefined2 ******)0x20f4;
                    pppppuStack_c = (undefined2 *****)0xa76;
                    func_0x000214fc();
                  }
                  ppppppuStack_a = (undefined2 ******)0xa7e;
                  func_0x00026cfc();
                }
                pppppuVar10 = &local_e;
                puVar11 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
                for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
                  pppppuVar4 = pppppuVar10;
                  pppppuVar10 = pppppuVar10 + 1;
                  puVar2 = puVar11;
                  puVar11 = puVar11 + 1;
                  *pppppuVar4 = (undefined2 ****)*puVar2;
                }
                *(undefined1 *)pppppuVar10 = *(undefined1 *)puVar11;
                if (*(int *)0xbc70 != 9999) {
                  ppppppuStack_a = (undefined2 ******)0xbc70;
                  pppppuStack_c = (undefined2 *****)0x20f4;
                  local_e = (undefined2 *****)0xab0;
                  func_0x00022c94();
                }
                *(int *)0xbc7d = (int)local_10;
                if (*(int *)0xc50a != 9999) {
                  ppppppuStack_a = (undefined2 ******)0xbc70;
                  pppppuStack_c = (undefined2 *****)0xc504;
                  local_e = (undefined2 *****)0x20f4;
                  local_10 = (undefined2 *******)0xace;
                  func_0x00022b4c();
                }
                pppppuVar10 = (undefined2 *****)(*(int *)0xc018 * 0xb);
                pppppuVar20 = pppppuVar10 + -0x21b1;
                pppppuVar9 = &local_e;
                for (in_CX = (undefined2 ******)0x5; in_CX != (undefined2 ******)0x0;
                    in_CX = (undefined2 ******)((int)in_CX - 1)) {
                  pppppuVar5 = pppppuVar20;
                  pppppuVar20 = pppppuVar20 + 1;
                  pppppuVar4 = pppppuVar9;
                  pppppuVar9 = pppppuVar9 + 1;
                  *pppppuVar5 = *pppppuVar4;
                }
                *(undefined1 *)pppppuVar20 = *(undefined1 *)pppppuVar9;
                *(undefined2 *)0xc01c = 0xe;
                ppppppuStack_a = (undefined2 ******)0x20f4;
                pppppuStack_c = (undefined2 *****)0xb01;
                func_0x00022290();
                pppuVar12 = (undefined2 ***)((int)pppppuVar9 + 1);
                pppuVar16 = (undefined2 ***)((int)pppppuVar20 + 1);
                unaff_ES = unaff_DS;
              }
            }
          }
          else {
            if ((*(int *)0xc01c == 0) || (10 < *(int *)0xc01c)) {
              ppppppuStack_a = (undefined2 ******)0xb56;
              func_0x0003fb9c();
            }
            else {
              in_CX = (undefined2 ******)*(uint *)0xc01c;
              pppppuStack_c = (undefined2 *****)0xb47;
              func_0x000214fc();
              pppppuVar9 = (undefined2 *****)0x20f4;
              ppppppuStack_a = (undefined2 ******)0xb4f;
              func_0x00026cfc();
            }
            *(int *)0xc01c = (int)(ppppppuVar7 + 5);
            pppppuStack_c = (undefined2 *****)0xb66;
            ppppppuStack_a = (undefined2 ******)pppppuVar9;
            func_0x00022290();
          }
        }
      }
    }
  }
  ppppppuVar21 = (undefined2 ******)0x20f4;
  ppppppuStack_a = (undefined2 ******)0xb8d;
  func_0x000219cc();
  if ((*(char *)0xe289 == '\0') && (*(int *)0xc020 != 0)) {
    pppppuVar10 = (undefined2 *****)((int)ppppppuVar7 * 9);
    ppppppuStack_a = (undefined2 ******)pppppuVar10[0x151a];
    pppppuStack_c = (undefined2 *****)0x880;
    local_e = (undefined2 *****)((int)pppppuVar10[0x151d] + 1);
    local_10 = (undefined2 *******)((int)pppppuVar10[0x151c] + 1);
    ppppppuVar21 = (undefined2 ******)0x1658;
    func_0x00016658();
  }
  ppppppuStack_a = (undefined2 ******)param_3;
  pppppuStack_c = (undefined2 *****)param_2;
  local_e = (undefined2 *****)param_1;
  local_10 = (undefined2 *******)ppppppuVar21;
  func_0x000210a4();
  ppppppuStack_a = (undefined2 ******)0xbe7;
  func_0x0003fc5e();
  if ((undefined2 ******)0xe < ppppppuVar7) {
    ppppppuStack_a = (undefined2 ******)0xf31;
    func_0x000219cc();
    return ppppppuVar7;
  }
  pppppuVar9 = (undefined2 *****)((int)ppppppuVar7 * 2);
  switch(ppppppuVar7) {
  case (undefined2 ******)0x0:
    if (in_CX == (undefined2 ******)0x0) {
      if ((int)ppppppuVar7 < 0 != (int)pppppuVar9 < 0) {
        (&stack0x9af9)[(int)pppuVar16] = (&stack0x9af9)[(int)pppuVar16];
        pppuVar12 = unaff_DI;
        unaff_DI = unaff_ES;
      }
    }
    else {
      pppppuVar9 = (undefined2 *****)((int)pppppuVar9 + (int)pppppuVar10);
      pppuVar12 = (undefined2 ***)*(undefined2 *)0xb858;
    }
    ppppuVar13 = (undefined2 ****)*(int *)((int)pppppuVar9 + (int)pppuVar12);
    ppppppuStack_a = (undefined2 ******)0x73fe;
    pppuVar22 = (undefined2 ***)func_0x00003aec();
    pppuVar12 = param_1[3];
    if (((int)(undefined2 ***)pppuVar22 - (int)pppuVar12 == 1) &&
       ((int)((ulong)pppuVar22 >> 0x10) - ((int)pppuVar12 >> 0xf) ==
        (uint)((undefined2 ***)pppuVar22 < pppuVar12))) {
      ppppppuStack_a = (undefined2 ******)0xfe39;
      pppppuStack_c = (undefined2 *****)*(undefined2 *)((int)pppppuVar9 + *(int *)0xb858 + 6);
      local_e = (undefined2 *****)*(undefined2 *)((int)pppppuVar9 + *(int *)0xb858 + 4);
      local_10 = (undefined2 *******)0xbf;
      iVar8 = func_0x00003aec();
      if (iVar8 - (int)param_1[4] == -0x481) goto LAB_3000_745a;
    }
    do {
      unaff_DI = (undefined2 ***)((int)unaff_DI + 1);
    } while (*(char *)((int)*(undefined4 *)0xb858 + (int)unaff_DI * 9 + 8) != '\b');
LAB_3000_745a:
    if ((char)param_3 == '\0') {
      param_2[2] = (undefined2 ***)0x2;
      local_e = (undefined2 *****)(undefined2 ****)0xbf;
      do {
        ppppppuStack_a = (undefined2 ******)param_2[5];
        pppppuStack_c = (undefined2 *****)param_2[4];
        local_10 = (undefined2 *******)0x7487;
        pppuVar22 = (undefined2 ***)func_0x0000eeb2();
        param_2[4] = (undefined2 ***)pppuVar22;
        param_2[5] = (undefined2 ***)((ulong)pppuVar22 >> 0x10);
        puVar11 = (undefined2 *)((int)((int)ppppuVar13 + (int)unaff_DI) * 9 + *(int *)0xb858);
        uVar18 = *(undefined2 *)0xb85a;
        uVar19 = (undefined2)((ulong)*(undefined4 *)(param_2 + 4) >> 0x10);
        iVar8 = (int)ppppuVar13 * 9 + (int)*(undefined4 *)(param_2 + 4);
        *(undefined2 *)(iVar8 + 0x12) = *puVar11;
        *(undefined2 *)(iVar8 + 0x14) = puVar11[1];
        *(undefined2 *)(iVar8 + 0x16) = puVar11[2];
        *(undefined2 *)(iVar8 + 0x18) = puVar11[3];
        *(undefined1 *)(iVar8 + 0x1a) = *(undefined1 *)(puVar11 + 4);
        param_2[2] = (undefined2 ***)((int)param_2[2] + 1);
        ppppuVar1 = (undefined2 ****)((int)ppppuVar13 + 1);
        puVar14 = (undefined1 *)((int)ppppuVar13 + (int)unaff_DI);
        uVar18 = (undefined2)((ulong)*(undefined4 *)0xb858 >> 0x10);
        local_e = (undefined2 *****)(undefined2 ****)0xdea;
        ppppuVar13 = ppppuVar1;
      } while (*(char *)((int)*(undefined4 *)0xb858 + (int)puVar14 * 9 + 8) != '@');
      ppppppuStack_a = (undefined2 ******)0x155;
      iVar8 = (int)((int)ppppuVar1 + (int)unaff_DI) * 9 + *(int *)0xb858;
      pppppuStack_c = (undefined2 *****)*(undefined2 *)(iVar8 + -7);
      local_e = (undefined2 *****)*(undefined2 *)(iVar8 + -9);
      local_10 = (undefined2 *******)0xdea;
      iVar15 = func_0x00003aec();
      iVar8 = *(int *)0xc018;
      *(int *)(iVar8 * 0xb + -0x435c) = iVar15 + -1;
      local_10 = (undefined2 *******)0xffff;
      iVar15 = func_0x00003aec();
      *(int *)(iVar8 * 0xb + -0x435a) = iVar15 + 0x47f;
      ppppppuVar7 = (undefined2 ******)FUN_3000_2c36();
      return ppppppuVar7;
    }
    iVar8 = (int)unaff_DI * 9;
    uVar19 = (undefined2)((ulong)*(undefined4 *)0xb858 >> 0x10);
    iVar15 = (int)*(undefined4 *)0xb858;
    uVar18 = *(undefined2 *)(iVar8 + iVar15 + 2);
    *(undefined2 *)0xa27c = *(undefined2 *)(iVar8 + iVar15);
    *(undefined2 *)0xa27e = uVar18;
    ppppppuVar7 = (undefined2 ******)*(undefined2 *)(iVar8 + iVar15 + 4);
    uVar18 = *(undefined2 *)(iVar8 + iVar15 + 6);
    *(undefined2 *)0xaca0 = ppppppuVar7;
    *(undefined2 *)0xaca2 = uVar18;
    return ppppppuVar7;
  case (undefined2 ******)0x1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined2 ******)0x2:
    in(0x6b);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined2 ******)0x3:
    if (in_CX != (undefined2 ******)0x0) {
      pppppuVar9 = (undefined2 *****)((int)pppppuVar9 + (int)pppppuVar10);
    }
    pppppuVar20 = pppppuVar10 + (int)pppppuVar9 + -0x21b1;
    puVar17 = (uint *)((int)pppppuVar10 + (int)pppppuVar9 * 2 + -0x4357);
    pppppuVar10 = pppppuVar20;
    for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar6 = puVar17;
      puVar17 = puVar17 + 1;
      pppppuVar4 = pppppuVar10;
      pppppuVar10 = pppppuVar10 + 1;
      *puVar6 = (uint)*pppppuVar4;
    }
    *(undefined1 *)puVar17 = *(undefined1 *)pppppuVar10;
    ppppuVar13 = param_1;
    for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
      pppppuVar4 = pppppuVar20;
      pppppuVar20 = pppppuVar20 + 1;
      ppppuVar3 = ppppuVar13;
      ppppuVar13 = ppppuVar13 + 1;
      *pppppuVar4 = (undefined2 ****)*ppppuVar3;
    }
    *(undefined1 *)pppppuVar20 = *(undefined1 *)ppppuVar13;
    *(int *)0xc018 = *(int *)0xc018 + 1;
    puVar17 = (uint *)(*(int *)0xc018 * 0xb + -0x4362);
    ppppuVar13 = param_1;
    for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar6 = puVar17;
      puVar17 = puVar17 + 1;
      ppppuVar3 = ppppuVar13;
      ppppuVar13 = ppppuVar13 + 1;
      *puVar6 = (uint)*ppppuVar3;
    }
    *(undefined1 *)puVar17 = *(undefined1 *)ppppuVar13;
    param_1[3] = (undefined2 ***)0x270f;
    *(int *)0xc01c = (int)param_3 + 0xd;
    ppppppuStack_a = (undefined2 ******)0x3000;
    pppppuStack_c = (undefined2 *****)0x2c2a;
    FUN_3000_2290();
    ppppppuStack_a = (undefined2 ******)0x2c31;
    ppppppuVar7 = (undefined2 ******)FUN_3000_19cc();
    return ppppppuVar7;
  case (undefined2 ******)0x4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined2 ******)0x5:
    ppppppuStack_a = (undefined2 ******)0x3000;
    pppppuStack_c = (undefined2 *****)0x2b32;
    FUN_3000_12b0();
    break;
  case (undefined2 ******)0x6:
    ppppppuStack_a = (undefined2 ******)0x3000;
    pppppuStack_c = (undefined2 *****)0x3da;
    func_0x0000582f();
    ppppppuStack_a = (undefined2 ******)0xbf;
    pppppuStack_c = (undefined2 *****)0x3e3;
    func_0x00005ba0();
    ppppppuStack_a = (undefined2 ******)0xbf;
    pppppuStack_c = (undefined2 *****)0x3e8;
    ppppppuStack_a = (undefined2 ******)func_0x000059f5();
    pppppuStack_c = (undefined2 *****)0xbf;
    local_e = (undefined2 *****)0x3f2;
    func_0x0000582f();
    pppppuStack_c = (undefined2 *****)0xbf;
    local_e = (undefined2 *****)0x3fb;
    func_0x00005ba0();
    pppppuStack_c = (undefined2 *****)0xbf;
    local_e = (undefined2 *****)0x400;
    pppppuStack_c = (undefined2 *****)func_0x000059f5();
    local_e = (undefined2 *****)0xbf;
    local_10 = (undefined2 *******)0x406;
    iVar8 = func_0x0002118e();
    if (iVar8 != 0) {
      ppppppuStack_a = (undefined2 ******)0x41a;
      func_0x00022b4c();
      if (*(int *)0xbc7d % 2 == 0) {
        func_0x000212b0();
      }
      else {
        func_0x000212b0();
      }
      return (undefined2 ******)0xffff;
    }
    ppppppuVar7 = (undefined2 ******)0x0;
    if (*(int *)0xc368 != 9999) {
      ppppppuStack_a = (undefined2 ******)0x20f4;
      pppppuStack_c = (undefined2 *****)0x489;
      func_0x0000582f();
      ppppppuStack_a = (undefined2 ******)0xbf;
      pppppuStack_c = (undefined2 *****)0x492;
      func_0x00005ba0();
      ppppppuStack_a = (undefined2 ******)0xbf;
      pppppuStack_c = (undefined2 *****)0x497;
      ppppppuStack_a = (undefined2 ******)func_0x000059f5();
      pppppuStack_c = (undefined2 *****)0xbf;
      local_e = (undefined2 *****)0x4a1;
      func_0x0000582f();
      pppppuStack_c = (undefined2 *****)0xbf;
      local_e = (undefined2 *****)0x4aa;
      func_0x00005ba0();
      pppppuStack_c = (undefined2 *****)0xbf;
      local_e = (undefined2 *****)0x4af;
      pppppuStack_c = (undefined2 *****)func_0x000059f5();
      local_e = (undefined2 *****)0xbf;
      local_10 = (undefined2 *******)0x4b5;
      ppppppuVar7 = (undefined2 ******)func_0x0002118e();
      if ((ppppppuVar7 != (undefined2 ******)0x0) &&
         ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc4f0 * 0x27 + 0x24) & 2) == 0)) {
        func_0x00022c94();
        func_0x000219cc();
        return (undefined2 ******)0xffff;
      }
    }
    if (*(int *)0xbc70 != 9999) {
      ppppppuStack_a = (undefined2 ******)0x20f4;
      pppppuStack_c = (undefined2 *****)0x50f;
      func_0x0000582f();
      ppppppuStack_a = (undefined2 ******)0xbf;
      pppppuStack_c = (undefined2 *****)0x518;
      func_0x00005ba0();
      ppppppuStack_a = (undefined2 ******)0xbf;
      pppppuStack_c = (undefined2 *****)0x51d;
      ppppppuStack_a = (undefined2 ******)func_0x000059f5();
      pppppuStack_c = (undefined2 *****)0xbf;
      local_e = (undefined2 *****)0x527;
      func_0x0000582f();
      pppppuStack_c = (undefined2 *****)0xbf;
      local_e = (undefined2 *****)0x530;
      func_0x00005ba0();
      pppppuStack_c = (undefined2 *****)0xbf;
      local_e = (undefined2 *****)0x535;
      pppppuStack_c = (undefined2 *****)func_0x000059f5();
      local_e = (undefined2 *****)0xbf;
      local_10 = (undefined2 *******)0x53b;
      ppppppuVar7 = (undefined2 ******)func_0x0002118e();
      if ((ppppppuVar7 != (undefined2 ******)0x0) &&
         ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc504 * 0x27 + 0x24) & 2) == 0)) {
        func_0x00022c94();
        func_0x000219cc();
        ppppppuVar7 = (undefined2 ******)0xffff;
      }
    }
    return ppppppuVar7;
  case (undefined2 ******)0x7:
    while (unaff_DI = (undefined2 ***)((int)unaff_DI + -1), 0 < (int)unaff_DI) {
      *(int *)0xc4d0 = *(int *)0xc4d0 << 1;
      if (*(char *)((int)unaff_DI * 9 + 0x297e) != '\0') {
        *(int *)0xc4d0 = *(int *)0xc4d0 + 1;
      }
      *(undefined1 *)((int)unaff_DI * 9 + 0x297e) = 0xff;
      ppppppuStack_a = (undefined2 ******)0x3000;
      pppppuStack_c = (undefined2 *****)0x6849;
      FUN_3000_14fc();
    }
    if (*(int *)0xc01c != 0) {
      if (*(int *)0xc01c < 10) {
        ppppppuStack_a = (undefined2 ******)0x3000;
        pppppuStack_c = (undefined2 *****)0x686e;
        FUN_3000_14fc();
      }
      else {
        ppppppuStack_a = (undefined2 ******)0x3000;
        pppppuStack_c = (undefined2 *****)0x6886;
        FUN_3000_14fc();
      }
    }
    ppppppuStack_a = (undefined2 ******)param_3;
    pppppuStack_c = (undefined2 *****)param_2;
    local_e = (undefined2 *****)param_1;
    local_10 = (undefined2 *******)0x3000;
    FUN_3000_10a4();
    *(undefined1 *)0xe28f = 1;
    ppppppuStack_a = (undefined2 ******)0x3000;
    pppppuStack_c = (undefined2 *****)0x68a8;
    FUN_3000_14fc();
    *(undefined1 *)0xe28e = 0xff;
    ppppppuStack_a = (undefined2 ******)0x68b4;
    ppppppuVar7 = (undefined2 ******)FUN_3000_0fe2();
    *(undefined2 *)0xc02e = 0x3d;
    return ppppppuVar7;
  case (undefined2 ******)0x8:
    ppppppuStack_a = (undefined2 ******)0x8c;
    pppppuStack_c = (undefined2 *****)0xc4;
    local_e = (undefined2 *****)0x880;
    local_10 = (undefined2 *******)0x3000;
    func_0x00016658();
    ppppppuStack_a = (undefined2 ******)0x45;
    pppppuStack_c = (undefined2 *****)0x123;
    local_e = (undefined2 *****)0x880;
    local_10 = (undefined2 *******)0x1658;
    func_0x00016658();
    FUN_3000_10f2();
    ppppppuVar7 = (undefined2 ******)func_0x0000c928();
    return ppppppuVar7;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined2 ******)0xc:
    pppuVar12 = unaff_SI;
  case (undefined2 ******)0xa:
    out(0x83,CONCAT11((byte)((uint)pppppuVar10 >> 8) | *(byte *)0x36ff,(char)pppppuVar10));
    unaff_ES = (undefined2 ***)((ulong)*(undefined4 *)pppuVar12 >> 0x10);
  case (undefined2 ******)0xe:
    ppppppuStack_a = (undefined2 ******)*(undefined2 *)0xa5c;
    pppppuStack_c = (undefined2 *****)0x3000;
    local_e = (undefined2 *****)0x2ae8;
    FUN_3000_12b0();
    break;
  case (undefined2 ******)0xd:
    ppppppuStack_a = (undefined2 ******)0x8;
    pppppuStack_c = (undefined2 *****)0xa0;
    local_e = (undefined2 *****)0x74;
    local_10 = (undefined2 *******)0x52;
    func_0x0000c8c0();
    ppppppuStack_a = (undefined2 ******)0xc87;
    pppppuStack_c = (undefined2 *****)0x84ac;
    func_0x0000c928();
    ppppppuStack_a = (undefined2 ******)0xc87;
    pppppuStack_c = (undefined2 *****)0x84b7;
    func_0x0000c8aa();
    ppppppuStack_a = (undefined2 ******)0x84be;
    FUN_3000_8324();
    ppppppuStack_a = (undefined2 ******)0xc87;
    pppppuStack_c = (undefined2 *****)0x84c5;
    func_0x0000c980();
    ppppppuStack_a = (undefined2 ******)0x84cc;
    FUN_3000_1008();
    ppppppuStack_a = (undefined2 ******)&stack0xfffa;
    pppppuStack_c = (undefined2 *****)&stack0xfffc;
    local_e = &pppppuStack_c;
    local_10 = (undefined2 *******)0xc87;
    FUN_3000_10a4();
    ppppppuVar7 = (undefined2 ******)0xc87;
    do {
      if (pppppuStack_c != (undefined2 *****)0x0) {
        if ((pppppuStack_c == (undefined2 *****)0x1) || (pppppuStack_c == (undefined2 *****)0x31)) {
LAB_3000_8596:
          pppppuStack_c = (undefined2 *****)0x85a8;
          ppppppuStack_a = ppppppuVar7;
          FUN_3000_14fc();
          ppppppuStack_a = (undefined2 ******)0x85af;
          FUN_3000_1008();
          ppppppuStack_a = (undefined2 ******)&stack0xfffa;
          pppppuStack_c = (undefined2 *****)&stack0xfffc;
          local_e = &pppppuStack_c;
          local_10 = (undefined2 *******)ppppppuVar7;
          FUN_3000_10a4();
          *(int *)(*(int *)0xc358 + 1) = (int)unaff_SI;
          *(int *)(*(int *)0xc358 + 3) = (int)ppppppuStack_a;
          return &ppppppuStack_a;
        }
        local_10 = (undefined2 *******)*(undefined2 *)0x2ac9;
        pppppuStack_c = (undefined2 *****)*(int *)0x2ac7;
        local_e = (undefined2 *****)*(int *)0x2ac5;
        ppppppuStack_a = local_10;
        FUN_3000_118e();
        if (pppppuStack_c == (undefined2 *****)0x15) goto LAB_3000_8596;
      }
      ppppppuStack_a = (undefined2 ******)&stack0xfffa;
      pppppuStack_c = (undefined2 *****)&stack0xfffc;
      local_e = &pppppuStack_c;
      local_10 = (undefined2 *******)ppppppuVar7;
      func_0x0001afe8();
      ppppppuStack_a = (undefined2 ******)0x857a;
      FUN_3000_1070();
      *(int *)(*(int *)0xc358 + 1) = (int)unaff_SI;
      *(undefined2 *)(*(int *)0xc358 + 3) = ppppppuStack_a;
      ppppppuStack_a = (undefined2 ******)0x8592;
      FUN_3000_10f2();
      ppppppuVar7 = (undefined2 ******)0x1abf;
    } while( true );
  }
  FUN_3000_19cc();
  return (undefined2 ******)0x0;
}
