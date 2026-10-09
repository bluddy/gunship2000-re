/* GS.GS2 3000:4684 undefined FUN_3000_4684(void) */
undefined2 __cdecl16far FUN_3000_4684(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  uint uStack_1dc;
  int iStack_1d4;
  int iStack_1d2;
  undefined2 uStack_1d0;
  undefined1 local_1ce [448];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  
  func_0x00000eb0();
  uStack_1dc = 2;
  uStack_1d0 = 0;
  puStack_8 = local_1ce;
  puStack_a = (undefined1 *)0xbf;
  uStack_c = 0x46b0;
  FUN_3000_4080();
  if (param_1 == 9) {
    uStack_1dc = 0x1002;
  }
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x0;
  uStack_c = 0xbf;
  uStack_e = 0x46cd;
  FUN_3000_1030();
  *(undefined2 *)0xc024 = 0;
  iStack_1d2 = 0;
  do {
    if (*(int *)0xb8c8 <= iStack_1d2) {
      return uStack_1d0;
    }
    if (*(int *)((int)*(undefined4 *)0xb860 + iStack_1d2 * 0x27 + 0x19) != 0) {
      iStack_1d4 = 0;
      while ((uint)*(byte *)(iStack_1d4 * 8 + (int)*(undefined4 *)0xb85c) !=
             *(uint *)((int)*(undefined4 *)0xb860 + iStack_1d2 * 0x27 + 0x19)) {
        iStack_1d4 = iStack_1d4 + 1;
      }
      if (*(int *)0xc01a == 0) {
        uVar4 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
        if (*(char *)((int)*(undefined4 *)0xb85c + iStack_1d4 * 8 + 2) == '\x02') {
          do {
            if (*(byte *)((int)*(undefined4 *)0xa278 +
                          (uint)*(byte *)(*(int *)0xb85c + iStack_1d4 * 8 + 1) * 0x1b + 1) ==
                param_1) {
              iVar2 = *(int *)0xc018;
              *(int *)(iVar2 * 0xb + -0x4362) = iStack_1d2;
              *(int *)(iVar2 * 0xb + -0x4360) = iStack_1d4;
              puStack_8 = (undefined1 *)iStack_1d4;
              puStack_a = local_1ce;
              uStack_c = 0xbf;
              uStack_e = 0x4866;
              uVar1 = FUN_3000_4288();
              if (uVar1 < 0x9d42) {
                puStack_8 = (undefined1 *)0xbf;
                puStack_a = (undefined1 *)0x4872;
                FUN_3000_48aa();
              }
              else {
                uStack_1d0 = 1;
              }
            }
            iStack_1d4 = iStack_1d4 + 1;
            uVar4 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
          } while ((*(char *)(iStack_1d4 * 8 + (int)*(undefined4 *)0xb85c) == -1) &&
                  (iStack_1d4 < *(int *)0xb8ca));
        }
      }
      else {
        iVar2 = iStack_1d4 * 8 + *(int *)0xb85c;
        if (((*(char *)(iVar2 + 2) == '\x01') &&
            (uVar4 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10),
            iVar3 = (int)*(undefined4 *)0xb860,
            (*(uint *)(iVar3 + iStack_1d2 * 0x27 + 0x25) & 0x40) == 0 &&
            (*(uint *)(iVar3 + iStack_1d2 * 0x27 + 0x23) & uStack_1dc) == 0)) &&
           (*(byte *)((int)*(undefined4 *)0xa278 + (uint)*(byte *)(iVar2 + 1) * 0x1b + 1) == param_1
           )) {
          iVar2 = *(int *)0xc018;
          *(int *)(iVar2 * 0xb + -0x4362) = iStack_1d2;
          *(int *)(iVar2 * 0xb + -0x4360) = iStack_1d4;
          puStack_8 = (undefined1 *)iStack_1d4;
          puStack_a = local_1ce;
          uStack_c = 0xbf;
          uStack_e = 0x47b6;
          uVar1 = FUN_3000_4288();
          if (uVar1 < 0x9d42) {
            if ((param_1 == 1) || (param_1 == 6)) {
              uVar4 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
              iVar2 = (int)*(undefined4 *)0xb860;
              if ((*(uint *)(iVar2 + iStack_1d2 * 0x27 + 0x23) & 0x180) == 0) {
                if (((*(int *)0xb8ce == 0) && (*(int *)0xb8d0 == 3)) &&
                   ((*(uint *)(iVar2 + iStack_1d2 * 0x27 + 0x25) & 0x3000) != 0)) {
                  puStack_8 = (undefined1 *)0xbf;
                  puStack_a = (undefined1 *)0x47f6;
                  FUN_3000_48aa();
                }
                goto LAB_3000_46dc;
              }
            }
            puStack_8 = (undefined1 *)0xbf;
            puStack_a = (undefined1 *)0x47fe;
            FUN_3000_48aa();
          }
          else {
            uStack_1d0 = 1;
          }
        }
      }
    }
LAB_3000_46dc:
    iStack_1d2 = iStack_1d2 + 1;
  } while( true );
}
