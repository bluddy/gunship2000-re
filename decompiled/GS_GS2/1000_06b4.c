/* GS.GS2 1000:06b4 undefined FUN_1000_06b4(void) */
void __cdecl16far FUN_1000_06b4(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  for (uStack_4 = 0; uStack_4 < *(int *)0x76b0; uStack_4 = uStack_4 + 1) {
    iVar1 = uStack_4 * 0x26;
    if (*(char *)(iVar1 + 0x7476) == param_1) {
      *(undefined2 *)(iVar1 + 0x748b) = param_2;
      *(undefined2 *)(iVar1 + 0x748d) = param_3;
    }
  }
  return;
}
