/* GS.GS2 2627:0000 undefined FUN_2627_0000(void) */
void __cdecl16far FUN_2627_0000(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  FUN_10bf_02c0();
  for (uStack_6 = 0; *(char *)(uStack_6 + param_2) == ' '; uStack_6 = uStack_6 + 1) {
  }
  iVar1 = FUN_10bf_2234();
  while ((iVar1 != 0 && (*(char *)(param_2 + iVar1 + -1) == ' '))) {
    iVar1 = iVar1 + -1;
  }
  uStack_a = 0;
  for (uStack_8 = param_2; uStack_8 < iVar1; uStack_8 = uStack_8 + 1) {
    *(undefined1 *)(uStack_a + param_1) = *(undefined1 *)(uStack_8 + param_2);
    uStack_a = uStack_a + 1;
  }
  *(undefined1 *)(uStack_a + param_1) = 0;
  return;
}
