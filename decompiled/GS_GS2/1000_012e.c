/* GS.GS2 1000:012e undefined FUN_1000_012e(void) */
void __cdecl16far FUN_1000_012e(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uVar3 = 0x10bf;
  for (uStack_4 = 0; uStack_4 < *(int *)0x76b0; uStack_4 = uStack_4 + 1) {
    iVar1 = uStack_4 * 0x26;
    uVar2 = uVar3;
    if (*(char *)(iVar1 + 0x748a) != '\0') {
      *(undefined1 *)(iVar1 + 0x748a) = 0;
      uStack_4 = *(int *)(iVar1 + 0x7483);
      uVar2 = 0x2658;
      thunk_EXT_FUN_0000_0000
                (uVar3,0x880,*(undefined2 *)(iVar1 + 0x7481),*(undefined2 *)(iVar1 + 0x7483),
                 *(undefined2 *)(iVar1 + 0x747b),*(undefined2 *)(iVar1 + 0x747d),0x86e,
                 *(undefined2 *)(iVar1 + 0x7481));
    }
    uVar3 = uVar2;
  }
  for (uStack_4 = 0; uStack_4 < *(int *)0x76b2; uStack_4 = uStack_4 + 1) {
    iVar1 = uStack_4 * 0x12;
    uVar2 = uVar3;
    if (*(char *)(iVar1 + 0x743f) != '\0') {
      *(undefined1 *)(iVar1 + 0x743f) = 0;
      uStack_4 = *(int *)(iVar1 + 0x743b);
      uVar2 = 0x2658;
      thunk_EXT_FUN_0000_0000
                (uVar3,0x880,*(undefined2 *)(iVar1 + 0x7439),*(undefined2 *)(iVar1 + 0x743b),
                 *(undefined2 *)(iVar1 + 0x7433),*(undefined2 *)(iVar1 + 0x7435),0x86e,
                 *(undefined2 *)(iVar1 + 0x7439));
    }
    uVar3 = uVar2;
  }
  return;
}
