/* GS.GS2 3000:357e undefined FUN_3000_357e(void) */
void __cdecl16far FUN_3000_357e(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iVar4;
  int iVar5;
  
  func_0x00000eb0();
  for (iVar5 = 0; iVar5 < *(int *)0xb8c8; iVar5 = iVar5 + 1) {
    if ((*(byte *)((int)*(undefined4 *)0xb860 + iVar5 * 0x27 + 0x24) & 0x40) != 0) {
      *(int *)(*(int *)0xc018 * 0xb + -0x4362) = iVar5;
      iVar4 = 0;
      while ((uint)*(byte *)(iVar4 * 8 + (int)*(undefined4 *)0xb85c) !=
             *(uint *)((int)*(undefined4 *)0xb860 + iVar5 * 0x27 + 0x19)) {
        iVar4 = iVar4 + 1;
      }
      iVar2 = *(int *)0xc018;
      *(int *)(iVar2 * 0xb + -0x4360) = iVar4;
      uVar1 = FUN_3000_3a48(iVar4);
      *(undefined2 *)(iVar2 * 0xb + -0x435e) = uVar1;
      iVar3 = iVar5 * 0x27 + *(int *)0xb860;
      uVar1 = *(undefined2 *)0xb862;
      iVar2 = func_0x00003aec(0xbf,*(undefined2 *)(iVar3 + 0x1b),*(undefined2 *)(iVar3 + 0x1d),0x155
                              ,0);
      iVar4 = *(int *)0xc018;
      *(int *)(iVar4 * 0xb + -0x435c) = iVar2 + -1;
      iVar2 = func_0x00003aec(0xbf,*(undefined2 *)(iVar3 + 0x1f),*(undefined2 *)(iVar3 + 0x21),
                              0xfe39,0xffff);
      *(int *)(iVar4 * 0xb + -0x435a) = iVar2 + 0x47f;
      FUN_3000_25f0();
    }
  }
  return;
}
