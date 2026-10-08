/* GS.GS2 165c:37e0 undefined FUN_165c_37e0(void) */
void __cdecl16far FUN_165c_37e0(void)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  FUN_10bf_02c0();
  *(undefined2 *)0x7a1c = 0;
  for (iVar4 = 0; iVar4 < *(int *)0xb8c8; iVar4 = iVar4 + 1) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar2 = (int)*(undefined4 *)0xb860;
    uVar1 = *(uint *)(iVar2 + iVar4 * 0x27 + 0x25);
    if (((uVar1 & 1) != 0) &&
       (((*(uint *)(iVar2 + iVar4 * 0x27 + 0x23) & 0xc000) == 0 ||
        (iVar2 = FUN_165c_2170(iVar4), -1 < iVar2)))) {
      *(int *)0x7a1c = *(int *)0x7a1c + 1;
      uVar3 = FUN_1dea_1012(*(undefined2 *)0x7a28,*(undefined2 *)0x7a2a,*(int *)0x7a1c << 1);
      *(undefined2 *)0x7a28 = uVar3;
      *(uint *)0x7a2a = uVar1;
      *(int *)((int)*(undefined4 *)0x7a28 + *(int *)0x7a1c * 2 + -2) = iVar4;
    }
  }
  return;
}
