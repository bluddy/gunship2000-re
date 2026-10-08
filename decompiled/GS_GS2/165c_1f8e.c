/* GS.GS2 165c:1f8e undefined FUN_165c_1f8e(void) */
int __cdecl16far FUN_165c_1f8e(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int iVar7;
  int iVar8;
  
  FUN_10bf_02c0();
  puVar1 = (uint *)0x7a36;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)0x7a38 = *(int *)0x7a38 + (uint)(0xfffe < uVar2);
  do {
    do {
      do {
        do {
          *(undefined1 *)0xe279 = 0xff;
          iVar7 = 0;
          for (iVar8 = 0; iVar8 < *(int *)0xb8c8; iVar8 = iVar8 + 1) {
            uVar6 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
            iVar5 = (int)*(undefined4 *)0xb860;
            uVar2 = *(uint *)(iVar5 + iVar8 * 0x27 + 0x23);
            uVar3 = *(uint *)(iVar5 + iVar8 * 0x27 + 0x25);
            if ((((uVar2 & param_1) == param_1) && ((uVar3 & param_2) == param_2)) &&
               ((uVar3 & param_4) == 0 && (uVar2 & param_3) == 0)) {
              iVar7 = iVar7 + 1;
            }
          }
          if (iVar7 == 0) {
            *(undefined2 *)0xa276 = 0xffff;
            return -1;
          }
          iVar7 = FUN_239c_0086(iVar7);
          for (iVar8 = 0; iVar8 < *(int *)0xb8c8; iVar8 = iVar8 + 1) {
            uVar6 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
            iVar5 = (int)*(undefined4 *)0xb860;
            uVar2 = *(uint *)(iVar5 + iVar8 * 0x27 + 0x23);
            uVar3 = *(uint *)(iVar5 + iVar8 * 0x27 + 0x25);
            iVar5 = iVar7;
            if ((((uVar2 & param_1) == param_1) && ((uVar3 & param_2) == param_2)) &&
               (((uVar3 & param_4) == 0 && (uVar2 & param_3) == 0 &&
                (iVar5 = iVar7 + -1, iVar7 == 0)))) break;
            iVar7 = iVar5;
          }
          uVar6 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
          iVar7 = (int)*(undefined4 *)0xb860;
        } while (((*(uint *)(iVar7 + iVar8 * 0x27 + 0x25) & 0x20) != 0 ||
                  (*(uint *)(iVar7 + iVar8 * 0x27 + 0x23) & 0x400) != 0) &&
                ('\x02' < *(char *)0xe280));
        iVar7 = iVar8 * 0x27 + *(int *)0xb860;
      } while (((*(uint *)(iVar7 + 0x23) & 0x1000) == 0x1000) &&
              (((*(uint *)(iVar7 + 0x25) & 1) == 1 &&
               (iVar7 = FUN_165c_0c6c(*(undefined2 *)(iVar7 + 0x1b),*(undefined2 *)(iVar7 + 0x1d),
                                      *(undefined2 *)(iVar7 + 0x1f),*(undefined2 *)(iVar7 + 0x21)),
               iVar7 != 0))));
      uVar6 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
      iVar7 = (int)*(undefined4 *)0xb860;
    } while (((*(byte *)(iVar7 + iVar8 * 0x27 + 0x25) & 0x10) != 0) &&
            (*(char *)0xe27f <= *(char *)0xe27e));
    if (((param_1 & 1) == 0) || ((*(byte *)(iVar7 + iVar8 * 0x27 + 0x24) & 0xc0) == 0))
    goto LAB_165c_2152;
    cVar4 = FUN_165c_2170(iVar8);
    *(char *)0xe279 = cVar4;
  } while (cVar4 < '\0');
  FUN_165c_26c4((int)cVar4,0xa27c,0xaca0);
  iVar7 = 0;
  do {
    if (*(int *)0xb8ca <= iVar7) {
LAB_165c_2152:
      if (*(char *)0xe279 < '\0') {
        FUN_165c_1242(iVar8,0,0);
      }
      return iVar8;
    }
    if (*(uint *)((int)*(undefined4 *)0xb860 + iVar8 * 0x27 + 0x19) ==
        (uint)*(byte *)(iVar7 * 8 + (int)*(undefined4 *)0xb85c)) {
      *(int *)0xa276 = iVar8;
      goto LAB_165c_2152;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}
