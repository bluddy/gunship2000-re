/* GS.GS2 2000:cce2 undefined FUN_2000_cce2(void) */
int __cdecl16far FUN_2000_cce2(int param_1)

{
  undefined2 unaff_DS;
  undefined2 uStack_6;
  int iVar1;
  
  func_0x00000eb0();
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  for (uStack_6 = 0; uStack_6 < 8; uStack_6 = uStack_6 + 1) {
    iVar1 = iVar1 + (int)*(char *)(uStack_6 + param_1 * 0x29 + -0x52db) *
                    (int)*(char *)(uStack_6 + 0x3d1e);
  }
  iVar1 = iVar1 + *(char *)(*(char *)(param_1 * 0x29 + -0x52d3) + 0x3d14);
  if (iVar1 < 10) {
    iVar1 = 10;
  }
  return (iVar1 * 0xff) / 100;
}
