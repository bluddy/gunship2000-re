/* GS.GS2 1000:03da undefined FUN_1000_03da(void) */
void __cdecl16far FUN_1000_03da(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  uint uVar6;
  int iVar7;
  
  uVar4 = 0x10bf;
  FUN_10bf_02c0();
  for (iVar7 = 0; iVar7 < *(int *)0x76b2; iVar7 = iVar7 + 1) {
    iVar3 = iVar7 * 0x12;
    if (*(char *)(iVar3 + 0x742e) == param_1) {
      *(undefined1 *)(iVar3 + 0x743f) = 1;
      if ((*(byte *)(iVar3 + 0x743d) & 1) == 0) {
        uVar6 = *(uint *)(iVar3 + 0x7433);
        uVar2 = (int)(uVar6 * param_2) / 0xff;
        uVar5 = uVar4;
        if (uVar2 < uVar6) {
          uVar2 = uVar2 + *(int *)(iVar3 + 0x7439);
          uVar5 = 0x2658;
          thunk_EXT_FUN_0000_0000
                    (uVar4,0x892,uVar2 + *(int *)(iVar3 + 0x742f),*(undefined2 *)(iVar3 + 0x7431),
                     uVar6 - uVar2,*(undefined2 *)(iVar3 + 0x7435),0x880,uVar2,
                     *(undefined2 *)(iVar3 + 0x743b));
        }
        uVar4 = uVar5;
        if (uVar2 != 0) {
          uVar4 = 0x2658;
          thunk_EXT_FUN_0000_0000
                    (uVar5,0x892,
                     (int)(1 / (long)*(int *)(iVar3 + 0x7437)) * *(int *)(iVar3 + 0x7433) +
                     *(int *)(iVar3 + 0x742f),
                     (int)(1 % (long)*(int *)(iVar3 + 0x7437)) * *(int *)(iVar3 + 0x7435) +
                     *(int *)(iVar3 + 0x7431),*(undefined2 *)(iVar3 + 0x7439),
                     *(undefined2 *)(iVar3 + 0x7435),0x880,*(undefined2 *)(iVar3 + 0x7439),
                     *(undefined2 *)(iVar3 + 0x743b));
        }
      }
      else {
        uVar2 = (int)((0xff - (uint)param_2) * *(int *)(iVar3 + 0x7435)) / 0xff;
        uVar5 = uVar4;
        uVar6 = uVar2;
        if (uVar2 != 0) {
          uVar6 = *(uint *)(iVar3 + 0x7439);
          uVar5 = 0x2658;
          thunk_EXT_FUN_0000_0000
                    (uVar4,0x892,*(undefined2 *)(iVar3 + 0x742f),*(undefined2 *)(iVar3 + 0x7431),
                     *(undefined2 *)(iVar3 + 0x7433),uVar2,0x880,uVar6,
                     *(undefined2 *)(iVar3 + 0x743b));
        }
        uVar4 = uVar5;
        if (uVar6 < *(uint *)(iVar3 + 0x7435)) {
          iVar1 = *(int *)(iVar3 + 0x7439);
          thunk_EXT_FUN_0000_0000
                    (uVar5,0x892,
                     (int)(1 / (long)*(int *)(iVar3 + 0x7437)) * *(int *)(iVar3 + 0x7433) +
                     *(int *)(iVar3 + 0x742f),
                     iVar1 + (int)(1 % (long)*(int *)(iVar3 + 0x7437)) * *(int *)(iVar3 + 0x7435) +
                             *(int *)(iVar3 + 0x7431),*(undefined2 *)(iVar3 + 0x7433),
                     *(int *)(iVar3 + 0x7435) - iVar1,0x880,iVar1,uVar6 + *(int *)(iVar3 + 0x743b));
          uVar4 = 0x2658;
        }
      }
    }
  }
  return;
}
