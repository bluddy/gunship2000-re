/* GS.GS2 3000:7e26 undefined FUN_3000_7e26(void) */
void __cdecl16far FUN_3000_7e26(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  int iVar7;
  
  uVar5 = 0xbf;
  func_0x00000eb0();
  for (iVar7 = 0; iVar7 < *(int *)(param_1 + 4) + -2; iVar7 = iVar7 + 1) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(param_1 + 8) >> 0x10);
    iVar3 = (int)*(undefined4 *)(param_1 + 8) + iVar7 * 9;
    if ((*(byte *)(iVar3 + 0x1a) & 0x40) == 0) {
      iVar1 = func_0x00003aec(uVar5,*(undefined2 *)(iVar3 + 0x1f),*(undefined2 *)(iVar3 + 0x21),
                              0x2000,0,0xb);
      uVar6 = func_0x00003aec(0xbf,*(undefined2 *)(iVar3 + 0x1b),*(undefined2 *)(iVar3 + 0x1d),
                              0x2000,0,2,0,-(iVar1 * 2 + -0x83));
      iVar1 = (int)((ulong)uVar6 >> 0x10);
      uVar2 = (uint)uVar6;
      iVar1 = func_0x00003aec(0xbf,uVar2 * 5,
                              ((iVar1 << 1 | (uint)((int)uVar2 < 0)) << 1 |
                              (uint)((int)(uVar2 << 1) < 0)) + iVar1 + (uint)CARRY2(uVar2 * 4,uVar2)
                             );
      iVar1 = func_0x00003aec(0xbf,*(undefined2 *)(iVar3 + 0x16),*(undefined2 *)(iVar3 + 0x18),
                              0x2000,0,iVar1 + 5);
      uVar6 = func_0x00003aec(0xbf,*(undefined2 *)(iVar3 + 0x12),*(undefined2 *)(iVar3 + 0x14),
                              0x2000,0,2,0,-(iVar1 * 2 + -0x83));
      iVar3 = (int)((ulong)uVar6 >> 0x10);
      uVar2 = (uint)uVar6;
      iVar3 = func_0x00003aec(0xbf,uVar2 * 5,
                              ((iVar3 << 1 | (uint)((int)uVar2 < 0)) << 1 |
                              (uint)((int)(uVar2 << 1) < 0)) + iVar3 + (uint)CARRY2(uVar2 * 4,uVar2)
                             );
      uVar5 = 0x1658;
      func_0x00016e72(0xbf,0x880,iVar3 + 5);
    }
  }
  return;
}
