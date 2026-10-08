/* GS.GS2 202b:033e undefined FUN_202b_033e(void) */
void __cdecl16far FUN_202b_033e(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uVar2 = 0x10bf;
  for (uStack_4 = 0; uStack_4 < *(int *)0x8fc4; uStack_4 = uStack_4 + 1) {
    iVar1 = uStack_4 * 0x38;
    uVar3 = uVar2;
    if (*(char *)(iVar1 + -0x78c8) != '\0') {
      *(undefined1 *)(iVar1 + -0x78c8) = 0;
      uStack_4 = *(int *)(iVar1 + -0x78f6);
      uVar3 = 0x2658;
      thunk_EXT_FUN_0000_0000
                (uVar2,0x880,*(undefined2 *)(iVar1 + -0x78f8),*(undefined2 *)(iVar1 + -0x78f6),
                 *(undefined1 *)(iVar1 + -0x78c7),*(undefined1 *)(iVar1 + -0x78c6),0x86e,
                 *(undefined2 *)(iVar1 + -0x78f8));
    }
    uVar2 = uVar3;
  }
  return;
}
