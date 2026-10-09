/* GS2.GS2 1000:f45c undefined FUN_1000_f45c(void) */
/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_f45c(void)

{
  int *piVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 unaff_CS;
  undefined2 uVar12;
  undefined2 unaff_DS;
  uint uStack_6;
  uint uStack_4;
  
  if (*(int *)0x15e8 != 0) {
    iVar9 = *(int *)0x15e8;
    if (iVar9 == 1) {
      for (uStack_4 = 0; ((*(byte *)(uStack_4 * 0x20 + 0xb56) & 0x20) != 0 && (uStack_4 < 5));
          uStack_4 = uStack_4 + 1) {
        if ((*(char *)(uStack_4 * 0x46 + 0x489) != '\0') &&
           (((*(byte *)(uStack_4 * 0x1e) & 7) == 6 && ((*(byte *)(uStack_4 * 0x1e) & 0xf8) != 0))))
        {
          uVar6 = *(uint *)0x15f0;
          uVar12 = *(undefined2 *)0x32f6;
          iVar9 = uStack_4 * 0x18;
          uVar5 = *(uint *)(iVar9 + 0x2596);
          uVar8 = *(uint *)(iVar9 + 0x2592);
          uVar5 = ((((*(uint *)0x15ee >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                  ((((*(uint *)(iVar9 + 0x2594) >> 1 | (uint)((uVar5 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar5 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar5 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar5 >> 3 & 1U) != 0) << 0xf);
          uVar7 = (int)uVar5 >> 0xf;
          uVar6 = *(uint *)0x15ec;
          uVar6 = ((((*(uint *)0x15ea >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                  ((((*(uint *)(iVar9 + 0x2590) >> 1 | (uint)((uVar8 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar8 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar8 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar8 >> 3 & 1U) != 0) << 0xf);
          uVar8 = (int)uVar6 >> 0xf;
          if (((uVar5 ^ uVar7) - uVar7) + ((uVar6 ^ uVar8) - uVar8) < 0x80) {
            uVar12 = *(undefined2 *)0x32f6;
            if (*(int *)(iVar9 + 0x2598) < 0x10) {
              uStack_6 = 0;
              goto LAB_1000_f5b1;
            }
            iVar9 = uStack_4 * 0x18;
            if ((*(char *)(iVar9 + 0x2583) == '\x01') &&
               ((*(char *)(iVar9 + 0x2582) == ' ' ||
                ((*(char *)(iVar9 + 0x2582) == '!' &&
                 (*(char *)(*(char *)(uStack_4 * 0x46 + 0x48d) * 0x18 + 0x2582) == ' '))))))
            goto LAB_1000_fa9c;
          }
        }
      }
    }
    else {
      if (iVar9 == 2) {
        uStack_4 = 0;
LAB_1000_f959:
        if (((*(byte *)(uStack_4 * 0x20 + 0xb56) & 0x20) != 0) && (uStack_4 < 5)) {
          if ((*(char *)(uStack_4 * 0x46 + 0x489) == '\0') ||
             (((*(byte *)(uStack_4 * 0x1e) & 7) != 6 || ((*(byte *)(uStack_4 * 0x1e) & 0xf8) != 0)))
             ) goto LAB_1000_f956;
          uVar6 = *(uint *)0x15f0;
          uVar12 = *(undefined2 *)0x32f6;
          iVar9 = uStack_4 * 0x18;
          uVar5 = *(uint *)(iVar9 + 0x2596);
          uVar8 = *(uint *)(iVar9 + 0x2592);
          uVar5 = ((((*(uint *)0x15ee >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                  ((((*(uint *)(iVar9 + 0x2594) >> 1 | (uint)((uVar5 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar5 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar5 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar5 >> 3 & 1U) != 0) << 0xf);
          uVar7 = (int)uVar5 >> 0xf;
          uVar6 = *(uint *)0x15ec;
          uVar6 = ((((*(uint *)0x15ea >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                  ((((*(uint *)(iVar9 + 0x2590) >> 1 | (uint)((uVar8 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar8 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar8 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar8 >> 3 & 1U) != 0) << 0xf);
          uVar8 = (int)uVar6 >> 0xf;
          if (0x7f < ((uVar5 ^ uVar7) - uVar7) + ((uVar6 ^ uVar8) - uVar8)) goto LAB_1000_f956;
          uVar12 = *(undefined2 *)0x32f6;
          if (*(int *)(iVar9 + 0x2598) < 0x10) {
            if (*(byte *)0x593c == uStack_4) {
              iVar9 = *(int *)0x476;
            }
            else {
              iVar9 = *(int *)(uStack_4 * 0x18 + 0x2588);
            }
            if (0xf < iVar9) goto LAB_1000_f956;
            for (uStack_6 = 0; uStack_6 < 0x50; uStack_6 = uStack_6 + 1) {
              if ((*(byte *)(uStack_6 * 0x20 + 0xb4c) & 0x10) != 0) {
                if (*(char *)(uStack_6 * 0x18 + 0x2582) == '\x15') {
                  *(undefined1 *)(uStack_6 * 0x18 + 0x2582) = 0x41;
                  *(undefined1 *)(uStack_6 * 0xe + 0x643) = 0x41;
                  break;
                }
              }
            }
            if (*(char *)(uStack_6 * 0x18 + 0x2583) != '\x01') goto LAB_1000_f956;
            *(undefined2 *)0x15e8 = 0;
            *(byte *)(uStack_4 * 0x1e) = *(byte *)(uStack_4 * 0x1e) & 7 | 0x18;
            uVar12 = unaff_CS;
            if ((*(byte *)0xde & 0x80) != 0) {
              uVar12 = 0x844;
              func_0x0000844b();
            }
            if (uStack_4 != 0) {
              *(byte *)(uStack_4 + 0x273) = *(byte *)(uStack_4 + 0x273) | 1;
            }
            *(int *)0x2d0e = uStack_4 + 1;
            unaff_CS = 0;
            func_0x00000bc2(uVar12,4,0,0);
            func_0x000104e4(0,0x10,uStack_4,0);
            for (; ((*(byte *)(uStack_4 * 0x20 + 0xb56) & 0x20) != 0 && (uStack_4 < 5));
                uStack_4 = uStack_4 + 1) {
              if (*(char *)(uStack_4 * 0x46 + 0x489) == '\a') {
                *(undefined1 *)(uStack_4 * 0x46 + 0x489) = 4;
                *(undefined1 *)(uStack_4 * 0x18 + 0x2582) = 0x24;
              }
            }
            goto LAB_1000_fb07;
          }
          iVar9 = uStack_4 * 0x18;
          if ((*(char *)(iVar9 + 0x2583) != '\x01') ||
             ((*(char *)(iVar9 + 0x2582) != ' ' &&
              ((*(char *)(iVar9 + 0x2582) != '!' ||
               (*(char *)(*(char *)(uStack_4 * 0x46 + 0x48d) * 0x18 + 0x2582) != ' '))))))
          goto LAB_1000_f956;
          goto LAB_1000_fa9c;
        }
        goto LAB_1000_fb07;
      }
      if (iVar9 == 3) {
        uVar12 = *(undefined2 *)0x3334;
        if (((*(int *)0x15e8 != 0) && (*(int *)0x15e8 == 3)) && (*(int *)0x15fa <= *(int *)0xaed)) {
          *(undefined2 *)0x15e8 = 0;
          if ((*(byte *)0xde & 0x80) != 0) {
            unaff_CS = 0x844;
            func_0x0000844b();
          }
          func_0x00000bc2(unaff_CS,4,0,0);
LAB_1000_fb04:
          unaff_CS = 0;
        }
      }
      else if (iVar9 == 4) {
        for (uStack_4 = 0; ((*(byte *)(uStack_4 * 0x20 + 0xb56) & 0x20) != 0 && (uStack_4 < 5));
            uStack_4 = uStack_4 + 1) {
          if ((*(char *)(uStack_4 * 0x46 + 0x489) != '\0') &&
             ((*(byte *)(uStack_4 * 0x1e) & 0xf8) == 0x20)) {
            uVar6 = *(uint *)0x15f0;
            iVar9 = uStack_4 * 0x18;
            uVar5 = *(uint *)(iVar9 + 0x2596);
            uVar8 = ((((*(uint *)0x15ee >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                    ((((*(uint *)(iVar9 + 0x2594) >> 1 | (uint)((uVar5 & 1) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar5 >> 1 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar5 >> 2 & 1U) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar5 >> 3 & 1U) != 0) << 0xf);
            uVar7 = (int)uVar8 >> 0xf;
            uVar6 = *(uint *)0x15ec;
            uVar5 = *(uint *)(iVar9 + 0x2592);
            uVar6 = ((((*(uint *)0x15ea >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                    ((((*(uint *)(iVar9 + 0x2590) >> 1 | (uint)((uVar5 & 1) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar5 >> 1 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar5 >> 2 & 1U) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar5 >> 3 & 1U) != 0) << 0xf);
            uVar5 = (int)uVar6 >> 0xf;
            if (((uVar8 ^ uVar7) - uVar7) + ((uVar6 ^ uVar5) - uVar5) < 0x400) {
              *(undefined2 *)0x15e8 = 0;
              if ((*(byte *)0xde & 0x80) != 0) {
                unaff_CS = 0x844;
                func_0x0000844b();
              }
              func_0x00000bc2(unaff_CS,4,0,0);
              func_0x000104e4(0,0x10,uStack_4,0);
              goto LAB_1000_fb04;
            }
          }
        }
      }
    }
  }
LAB_1000_fb07:
  if (*(int *)0x1626 != 0) {
    piVar1 = (int *)0x163a;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uStack_4 = 0;
      while ((uStack_4 < 0x50 &&
             (((*(byte *)(uStack_4 * 0x20 + 0xb4c) & 0x40) == 0 ||
              (*(char *)(uStack_4 * 0x18 + 0x2582) != '\x1c'))))) {
        uStack_4 = uStack_4 + 1;
      }
      if (uStack_4 == 0x50) {
        for (uStack_4 = 0; uStack_4 < 0x50; uStack_4 = uStack_4 + 1) {
          uVar12 = *(undefined2 *)0x32ea;
          if ((*(byte *)(uStack_4 * 0x20 + 0xb4c) & 0x20) == 0) {
            if ((*(byte *)(uStack_4 * 0x20 + 0xb4c) & 0x40) != 0) {
              pbVar2 = (byte *)(uStack_4 * 0x20 + 0xb4c);
              *pbVar2 = *pbVar2 ^ 0x60;
            }
          }
          else {
            pbVar2 = (byte *)(uStack_4 * 0x20 + 0xb4c);
            *pbVar2 = *pbVar2 ^ 0x60;
            if (*(char *)(uStack_4 * 0x18 + 0x2582) == '\x15') {
              *(undefined1 *)(uStack_6 * 0x18 + 0x2582) = 0x41;
              *(undefined1 *)(uStack_6 * 0xe + 0x643) = 0x41;
            }
          }
        }
        uVar12 = *(undefined2 *)0x3334;
        puVar11 = (undefined2 *)0x1606;
        puVar10 = (undefined2 *)0x1644;
        for (iVar9 = 0x1f; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar4 = puVar11;
          puVar11 = puVar11 + 1;
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar4 = *puVar3;
        }
        func_0x000104e4(unaff_CS,0xd,0,0);
      }
    }
    iVar9 = *(int *)0x1626;
    if (iVar9 == 1) {
      for (uStack_4 = 0; uStack_4 < 5; uStack_4 = uStack_4 + 1) {
        if (((*(char *)(uStack_4 * 0x46 + 0x489) != '\0') && ((*(byte *)(uStack_4 * 0x1e) & 7) == 6)
            ) && ((*(byte *)(uStack_4 * 0x1e) & 0xf8) != 0)) {
          uVar6 = *(uint *)0x162e;
          uVar12 = *(undefined2 *)0x32f6;
          iVar9 = uStack_4 * 0x18;
          uVar5 = *(uint *)(iVar9 + 0x2596);
          uVar8 = *(uint *)(iVar9 + 0x2592);
          uVar5 = ((((*(uint *)0x162c >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                  ((((*(uint *)(iVar9 + 0x2594) >> 1 | (uint)((uVar5 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar5 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar5 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar5 >> 3 & 1U) != 0) << 0xf);
          uVar7 = (int)uVar5 >> 0xf;
          uVar6 = *(uint *)0x162a;
          uVar6 = ((((*(uint *)0x1628 >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                  ((((*(uint *)(iVar9 + 0x2590) >> 1 | (uint)((uVar8 & 1) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar8 >> 1 & 1U) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar8 >> 2 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar8 >> 3 & 1U) != 0) << 0xf);
          uVar8 = (int)uVar6 >> 0xf;
          if (((uVar5 ^ uVar7) - uVar7) + ((uVar6 ^ uVar8) - uVar8) < 0x80) {
            uVar12 = *(undefined2 *)0x32f6;
            if (*(int *)(iVar9 + 0x2598) < 0x10) {
              uStack_6 = 0;
              goto LAB_1000_fd33;
            }
            iVar9 = uStack_4 * 0x18;
            if ((*(char *)(iVar9 + 0x2583) == '\x01') &&
               ((*(char *)(iVar9 + 0x2582) == ' ' ||
                ((*(char *)(iVar9 + 0x2582) == '!' &&
                 (*(char *)(*(char *)(uStack_4 * 0x46 + 0x48d) * 0x18 + 0x2582) == ' ')))))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
    }
    else {
      if (iVar9 == 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar9 == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar9 == 4) {
        for (uStack_4 = 0; ((*(byte *)(uStack_4 * 0x20 + 0xb56) & 0x20) != 0 && (uStack_4 < 5));
            uStack_4 = uStack_4 + 1) {
          if ((*(char *)(uStack_4 * 0x46 + 0x489) != '\0') &&
             ((*(byte *)(uStack_4 * 0x1e) & 0xf8) == 0x20)) {
            uVar6 = *(uint *)0x162e;
            iVar9 = uStack_4 * 0x18;
            uVar5 = *(uint *)(iVar9 + 0x2596);
            uVar8 = ((((*(uint *)0x162c >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                    ((((*(uint *)(iVar9 + 0x2594) >> 1 | (uint)((uVar5 & 1) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar5 >> 1 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar5 >> 2 & 1U) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar5 >> 3 & 1U) != 0) << 0xf);
            uVar7 = (int)uVar8 >> 0xf;
            uVar6 = *(uint *)0x162a;
            uVar5 = *(uint *)(iVar9 + 0x2592);
            uVar6 = ((((*(uint *)0x1628 >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf) -
                    ((((*(uint *)(iVar9 + 0x2590) >> 1 | (uint)((uVar5 & 1) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar5 >> 1 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar5 >> 2 & 1U) != 0) << 0xf) >> 1 |
                    (uint)(((int)uVar5 >> 3 & 1U) != 0) << 0xf);
            uVar5 = (int)uVar6 >> 0xf;
            if (((uVar8 ^ uVar7) - uVar7) + ((uVar6 ^ uVar5) - uVar5) < 0x400) {
              *(undefined2 *)0x1626 = 0;
              uVar12 = unaff_CS;
              if ((*(byte *)0xde & 0x80) != 0) {
                uVar12 = 0x844;
                func_0x0000844b(unaff_CS,0x3f);
              }
              func_0x00000bc2(uVar12,5,0,0);
              func_0x000104e4(0,0x11,uStack_4,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_1000_f956:
  uStack_4 = uStack_4 + 1;
  goto LAB_1000_f959;
LAB_1000_f5b1:
  if (0x4f < uStack_6) goto LAB_1000_f5f8;
  if ((*(byte *)(uStack_6 * 0x20 + 0xb4c) & 0x10) != 0) {
    if (*(char *)(uStack_6 * 0x18 + 0x2582) == '\x15') {
      *(undefined1 *)(uStack_6 * 0x18 + 0x2582) = 0x41;
      *(undefined1 *)(uStack_6 * 0xe + 0x643) = 0x41;
      goto LAB_1000_f5f8;
    }
  }
  uStack_6 = uStack_6 + 1;
  goto LAB_1000_f5b1;
LAB_1000_f5f8:
  *(undefined2 *)0x15e8 = 0;
  uVar6 = (uint)*(byte *)0x593c;
  if (uVar6 == uStack_4) {
    if ((*(byte *)(uVar6 * 0x1e) & 8) == 0) {
      if ((*(byte *)(uVar6 * 0x1e) & 0x10) != 0) {
        *(int *)0x63a = *(int *)0x63a + -2000;
      }
    }
    else {
      *(int *)0x63a = *(int *)0x63a + -4000;
    }
  }
  if (*(char *)(uStack_4 * 0x20 + 0xb58) == -0x5a) {
    *(undefined1 *)(*(int *)(uStack_4 * 0x26 + 0x4620) + 9) = 0xff;
  }
  *(byte *)(uStack_4 * 0x1e) = *(byte *)(uStack_4 * 0x1e) & 7;
  uVar12 = unaff_CS;
  if ((*(byte *)0xde & 0x80) != 0) {
    uVar12 = 0x844;
    func_0x0000844b();
  }
  unaff_CS = 0;
  func_0x00000bc2(uVar12,4,0,0);
  func_0x000104e4(0,0x10,uStack_4,0);
  for (; ((*(byte *)(uStack_4 * 0x20 + 0xb56) & 0x20) != 0 && (uStack_4 < 5));
      uStack_4 = uStack_4 + 1) {
    if (*(char *)(uStack_4 * 0x46 + 0x489) == '\a') {
      *(undefined1 *)(uStack_4 * 0x46 + 0x489) = 4;
      *(undefined1 *)(uStack_4 * 0x18 + 0x2582) = 0x24;
    }
  }
  goto LAB_1000_fb07;
LAB_1000_fa9c:
  *(undefined1 *)(uStack_4 * 0x46 + 0x489) = 7;
  *(undefined1 *)(uStack_4 * 0x18 + 0x2582) = 0x26;
  goto LAB_1000_fb07;
LAB_1000_fd33:
  if (0x4f < uStack_6) {
LAB_1000_fd7a:
    *(undefined2 *)0x1626 = 0;
    uVar6 = (uint)*(byte *)0x593c;
    if (uVar6 == uStack_4) {
      if ((*(byte *)(uVar6 * 0x1e) & 8) == 0) {
        if ((*(byte *)(uVar6 * 0x1e) & 0x10) != 0) {
          *(int *)0x63a = *(int *)0x63a + -2000;
        }
      }
      else {
        *(int *)0x63a = *(int *)0x63a + -4000;
      }
    }
    if (*(char *)(uStack_4 * 0x20 + 0xb58) == -0x5a) {
      *(undefined1 *)(*(int *)(uStack_4 * 0x26 + 0x4620) + 9) = 0xff;
    }
    *(byte *)(uStack_4 * 0x1e) = *(byte *)(uStack_4 * 0x1e) & 7;
    uVar12 = unaff_CS;
    if ((*(byte *)0xde & 0x80) != 0) {
      uVar12 = 0x844;
      func_0x0000844b(unaff_CS,0x3f);
    }
    func_0x00000bc2(uVar12,5,0,0);
    func_0x000104e4(0,0x11,uStack_4,0);
    while( true ) {
      if ((*(byte *)(uStack_4 * 0x20 + 0xb56) & 0x20) == 0) {
        halt_baddata();
      }
      if (4 < uStack_4) break;
      if (*(char *)(uStack_4 * 0x46 + 0x489) == '\a') {
        *(undefined1 *)(uStack_4 * 0x46 + 0x489) = 4;
        *(undefined1 *)(uStack_4 * 0x18 + 0x2582) = 0x24;
      }
      uStack_4 = uStack_4 + 1;
    }
    halt_baddata();
  }
  if ((*(byte *)(uStack_6 * 0x20 + 0xb4c) & 0x20) != 0) {
    if (*(char *)(uStack_6 * 0x18 + 0x2582) == '\x15') {
      *(undefined1 *)(uStack_6 * 0x18 + 0x2582) = 0x41;
      *(undefined1 *)(uStack_6 * 0xe + 0x643) = 0x41;
      goto LAB_1000_fd7a;
    }
  }
  uStack_6 = uStack_6 + 1;
  goto LAB_1000_fd33;
}
