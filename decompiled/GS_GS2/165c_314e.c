/* GS.GS2 165c:314e undefined FUN_165c_314e(void) */
void __cdecl16far FUN_165c_314e(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  uint local_20;
  uint local_1e [4];
  int iStack_16;
  int iStack_14;
  int iStack_12;
  undefined4 uStack_10;
  uint *puStack_c;
  uint *puStack_a;
  int iStack_8;
  uint uStack_6;
  
  uStack_6 = 0x9719;
  FUN_10bf_02c0();
  *(undefined1 *)0xe279 = 0xff;
  puVar1 = (uint *)0x7a36;
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)0x7a38 = *(int *)0x7a38 + (uint)(0xfffe < uVar5);
  puStack_c = (uint *)0x0;
  iStack_8 = 0x10bf;
  do {
    uStack_6 = *(int *)0x7a1c;
    if (((int)uStack_6 < (int)puStack_c) && (puStack_c = (uint *)0x0, param_3 < 0x3c)) {
      param_3 = param_3 + 2;
    }
    uVar7 = 0x239c;
    puStack_a = (uint *)0x9750;
    iStack_14 = FUN_239c_0086();
    iVar4 = *(int *)(iStack_14 * 2 + (int)*(undefined4 *)0x7a28);
    *(int *)0xa276 = iVar4;
    iVar4 = iVar4 * 0x27 + *(int *)0xb860;
    uVar6 = *(undefined2 *)0xb862;
    uStack_10 = CONCAT22(uVar6,iVar4);
    if (((*(uint *)(iVar4 + 0x25) & 0x20) == 0 && (*(uint *)(iVar4 + 0x23) & 0x400) == 0) ||
       (*(char *)0xe280 < '\x03')) {
      if (((*(uint *)(iVar4 + 0x23) & 0x1000) != 0) && ((*(uint *)(iVar4 + 0x23) & 0xc000) == 0)) {
        iVar4 = *(int *)0xa276 * 0x27 + *(int *)0xb860;
        uVar6 = *(undefined2 *)0xb862;
        uStack_6 = *(undefined2 *)(iVar4 + 0x21);
        iStack_8 = *(undefined2 *)(iVar4 + 0x1f);
        puStack_a = (uint *)*(undefined2 *)(iVar4 + 0x1d);
        puStack_c = (uint *)*(undefined2 *)(iVar4 + 0x1b);
        uStack_10 = 0x239c97df;
        iVar4 = FUN_165c_0c6c();
        if (iVar4 != 0) {
          *(int *)0x7a1c = *(int *)0x7a1c + -1;
          uVar6 = (undefined2)((ulong)*(undefined4 *)0x7a28 >> 0x10);
          iVar4 = (int)*(undefined4 *)0x7a28;
          *(undefined2 *)(iStack_14 * 2 + iVar4) = *(undefined2 *)(*(int *)0x7a1c * 2 + iVar4);
          goto LAB_165c_3170;
        }
      }
      uVar6 = (undefined2)((ulong)uStack_10 >> 0x10);
      iVar4 = (int)uStack_10;
      if (((*(byte *)(iVar4 + 0x25) & 0x10) == 0) || (*(char *)0xe27e < *(char *)0xe27f)) {
        if ((*(byte *)(iVar4 + 0x24) & 0x10) == 0) {
          iStack_12 = (uint)((*(uint *)(iVar4 + 0x25) & 0x3000) != 0) +
                      (uint)((*(uint *)(iVar4 + 0x25) & 0x2000) != 0);
          for (iStack_14 = 0; iStack_14 < 10; iStack_14 = iStack_14 + 1) {
            uStack_6 = param_3 + param_1;
            if (0x3a < (int)uStack_6) {
              uStack_6 = 0x3a;
            }
            iStack_8 = param_1 - param_3;
            if (iStack_8 < 5) {
              iStack_8 = 5;
            }
            puStack_a = (uint *)0x239c;
            puStack_c = (uint *)0x9914;
            local_1e[0] = FUN_239c_005c();
            iStack_8 = param_2 - param_3;
            uStack_6 = param_3 + param_2;
            if (0x3a < (int)uStack_6) {
              uStack_6 = 0x3a;
            }
            if (iStack_8 < 5) {
              iStack_8 = 5;
            }
            puStack_a = (uint *)0x239c;
            puStack_c = (uint *)0x9943;
            local_20 = FUN_239c_005c();
            uVar6 = (undefined2)((ulong)uStack_10 >> 0x10);
            uStack_6 = *(undefined2 *)((int)uStack_10 + 0x25);
            iStack_8 = *(undefined2 *)((int)uStack_10 + 0x23);
            puStack_c = (uint *)local_1e[0];
            uStack_10 = 0x239c995c;
            puStack_a = (uint *)local_20;
            iVar4 = FUN_165c_0b44();
            if (iVar4 != 0) break;
          }
          uVar7 = 0x239c;
          uVar6 = (undefined2)((ulong)uStack_10 >> 0x10);
          uStack_6 = *(undefined2 *)((int)uStack_10 + 0x25);
          iStack_8 = *(undefined2 *)((int)uStack_10 + 0x23);
          puStack_a = &local_20;
          puStack_c = local_1e;
          uStack_10 = 0x239c9981;
          iVar4 = FUN_165c_0a7a();
          if (iVar4 != 0) {
            if ((*(byte *)((int)uStack_10 + 0x25) & 0x10) != 0) {
              iStack_16 = 0x20;
              iStack_8 = uVar7;
              if ((int)local_1e[0] < 0x20) {
                uStack_6 = local_20 - 0x20;
                iStack_8 = 0x239c;
                uVar7 = 0x10bf;
                puStack_a = (uint *)0x99ad;
                uVar5 = FUN_10bf_2cc8();
                iStack_8 = uVar7;
                if ((*(int *)0xa27e <= (int)uVar5 >> 0xf) &&
                   ((*(int *)0xa27e < (int)uVar5 >> 0xf || (*(uint *)0xa27c < uVar5)))) {
                  local_1e[0] = 1;
                  goto LAB_165c_344c;
                }
              }
              uVar7 = iStack_8;
              if (iStack_16 <= (int)local_1e[0]) {
                uStack_6 = -(iStack_16 - local_20);
                uVar7 = 0x10bf;
                puStack_a = (uint *)0x99db;
                iVar4 = FUN_10bf_2cc8();
                if ((int)(iStack_16 * 2 - local_1e[0]) < iVar4) {
                  local_1e[0] = (iStack_16 + -1) * 2;
                  goto LAB_165c_344c;
                }
              }
              if ((int)local_20 < iStack_16) {
                local_20 = 1;
              }
              else {
                local_20 = (iStack_16 + -1) * 2;
              }
            }
LAB_165c_344c:
            uVar5 = local_1e[0] & 0xff;
            *(int *)0xa27c = uVar5 * 0x2000 + 0x1000;
            *(int *)0xa27e =
                 ((((((int)(char)(local_1e[0] >> 8) << 1 | (uint)((char)local_1e[0] < '\0')) << 1 |
                    (uint)((int)(uVar5 << 9) < 0)) << 1 | (uint)((int)(uVar5 << 10) < 0)) << 1 |
                  (uint)((int)(uVar5 << 0xb) < 0)) << 1 | (uint)((int)(uVar5 << 0xc) < 0)) +
                 (uint)(0xefff < uVar5 * 0x2000);
            uVar5 = local_20 & 0xff;
            *(int *)0xaca0 = uVar5 * 0x2000 + 0x1000;
            *(int *)0xaca2 =
                 ((((((int)(char)(local_20 >> 8) << 1 | (uint)((char)local_20 < '\0')) << 1 |
                    (uint)((int)(uVar5 << 9) < 0)) << 1 | (uint)((int)(uVar5 << 10) < 0)) << 1 |
                  (uint)((int)(uVar5 << 0xb) < 0)) << 1 | (uint)((int)(uVar5 << 0xc) < 0)) +
                 (uint)(0xefff < uVar5 * 0x2000);
            uStack_6 = param_2;
            iStack_8 = param_1;
            puStack_c = (uint *)0x9a70;
            puStack_a = (uint *)uVar7;
            iVar4 = FUN_165c_23cc();
            if (iVar4 <= param_3) {
              uVar6 = (undefined2)((ulong)uStack_10 >> 0x10);
              uVar5 = *(uint *)((int)uStack_10 + 0x25);
              if ((uVar5 & 4) == 0) {
                if (iStack_12 == 0) {
                  if (iStack_8 == 0) {
                    uStack_6 = (uint)((*(byte *)((int)uStack_10 + 0x25) & 8) != 0);
                    iStack_8 = 0xaca0;
                    puStack_a = (uint *)0xa27c;
                    puStack_c = (uint *)local_20;
                    uStack_10 = CONCAT22(local_1e[0],uVar7);
                    iStack_12 = 0x9ae1;
                    FUN_165c_05d4();
                  }
                }
                else {
                  uStack_6 = (uint)((uVar5 & 0x2000) != 0);
                  iStack_8 = 0xaca0;
                  puStack_a = (uint *)0xa27c;
                  puStack_c = (uint *)local_20;
                  uStack_10 = CONCAT22(local_1e[0],uVar7);
                  iStack_12 = 0x9ab3;
                  FUN_165c_0466();
                }
              }
              return;
            }
          }
        }
        else {
          uVar2 = *(undefined2 *)(iVar4 + 0x1d);
          *(undefined2 *)0xa27c = *(undefined2 *)(iVar4 + 0x1b);
          *(undefined2 *)0xa27e = uVar2;
          uVar2 = *(undefined2 *)(iVar4 + 0x21);
          *(undefined2 *)0xaca0 = *(undefined2 *)(iVar4 + 0x1f);
          *(undefined2 *)0xaca2 = uVar2;
          uStack_6 = param_2;
          iStack_8 = param_1;
          puStack_a = (uint *)0x239c;
          puStack_c = (uint *)0x9861;
          iVar4 = FUN_165c_23cc();
          if (iVar4 <= param_3) {
            if ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xa276 * 0x27 + 0x24) & 0xc0) != 0)
            {
              uStack_6 = *(undefined2 *)0xa276;
              iStack_8 = 0x239c;
              puStack_a = (uint *)0x9884;
              uVar3 = FUN_165c_2170();
              *(undefined1 *)0xe279 = uVar3;
            }
            return;
          }
        }
      }
      else {
        *(int *)0x7a1c = *(int *)0x7a1c + -1;
        uVar6 = (undefined2)((ulong)*(undefined4 *)0x7a28 >> 0x10);
        iVar4 = (int)*(undefined4 *)0x7a28;
        *(undefined2 *)(iStack_14 * 2 + iVar4) = *(undefined2 *)(*(int *)0x7a1c * 2 + iVar4);
      }
    }
    else {
      *(int *)0x7a1c = *(int *)0x7a1c + -1;
      uVar6 = (undefined2)((ulong)*(undefined4 *)0x7a28 >> 0x10);
      iVar4 = (int)*(undefined4 *)0x7a28;
      *(undefined2 *)(iStack_14 * 2 + iVar4) = *(undefined2 *)(*(int *)0x7a1c * 2 + iVar4);
    }
LAB_165c_3170:
    puStack_c = (uint *)((int)puStack_c + 1);
    iStack_8 = uVar7;
  } while( true );
}
