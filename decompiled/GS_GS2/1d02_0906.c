/* GS.GS2 1d02:0906 undefined FUN_1d02_0906(void) */
void __cdecl16far FUN_1d02_0906(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int iVar5;
  int iVar6;
  
  uVar4 = 0x10bf;
  FUN_10bf_02c0();
  for (iVar6 = 0; iVar6 < 9; iVar6 = iVar6 + 1) {
    iVar1 = iVar6 * 5;
    uVar4 = thunk_EXT_FUN_0000_0000(uVar4,1,iVar1,100,5,5);
    iVar3 = iVar6 * 0xc;
    *(undefined2 *)(iVar3 + -0x7a56) = uVar4;
    iVar5 = iVar1 + 2;
    uVar2 = thunk_EXT_FUN_0000_0000(0x2658,1,iVar5);
    *(undefined1 *)(iVar3 + -0x7a60) = uVar2;
    iVar3 = 0x68;
    uVar2 = thunk_EXT_FUN_0000_0000(0x2658,1,iVar5);
    *(undefined1 *)(iVar3 + -0x7a5f) = uVar2;
    iVar3 = 0x66;
    uVar2 = thunk_EXT_FUN_0000_0000(0x2658,1,iVar1);
    *(undefined1 *)(iVar3 + -0x7a5e) = uVar2;
    iVar3 = 0x66;
    uVar2 = thunk_EXT_FUN_0000_0000(0x2658,1,iVar1 + 4);
    *(undefined1 *)(iVar3 + -0x7a5d) = uVar2;
    iVar3 = 0x65;
    uVar2 = thunk_EXT_FUN_0000_0000(0x2658,1,iVar5);
    *(undefined1 *)(iVar3 + -0x7a5c) = uVar2;
    iVar3 = 0x67;
    uVar2 = thunk_EXT_FUN_0000_0000(0x2658,1,iVar5);
    *(undefined1 *)(iVar3 + -0x7a5b) = uVar2;
    iVar5 = 0x66;
    uVar2 = thunk_EXT_FUN_0000_0000(0x2658,1,iVar1 + 1);
    *(undefined1 *)(iVar5 + -0x7a5a) = uVar2;
    iVar5 = 0x66;
    uVar2 = thunk_EXT_FUN_0000_0000(0x2658,1,iVar1 + 3);
    *(undefined1 *)(iVar5 + -0x7a59) = uVar2;
    for (iVar5 = 0; uVar4 = 0x2658, iVar5 < 2; iVar5 = iVar5 + 1) {
      uVar2 = thunk_EXT_FUN_0000_0000(0x2658,1,iVar6 * 5 + iVar5,0x69);
      *(undefined1 *)(iVar5 + iVar6 * 0xc + -0x7a58) = uVar2;
    }
  }
  *(undefined2 *)0x860c = 99;
  return;
}
