/* GS.GS2 25f0:0324 undefined FUN_25f0_0324(void) */
void __cdecl16far FUN_25f0_0324(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uStack_6;
  
  FUN_10bf_02c0();
  iVar2 = 0x10bf;
  for (uStack_6 = 0; uStack_6 < *(int *)0x9820; uStack_6 = uStack_6 + 1) {
    iVar3 = iVar2;
    if (*(int *)(uStack_6 * 0xf + -0x6869) != 0) {
      iVar1 = *(int *)(uStack_6 * 0xf + -0x6869);
      iVar3 = 0x212a;
      FUN_212a_003c();
      *(undefined2 *)(iVar1 + 0xd) = 0;
      uStack_6 = iVar2;
    }
    iVar2 = iVar3;
  }
  return;
}
