/* GS.GS2 1b1d:02de undefined FUN_1b1d_02de(void) */
void __cdecl16far FUN_1b1d_02de(void)

{
  undefined2 unaff_DS;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = 0;
  for (uStack_6 = 0; uStack_6 < 4; uStack_6 = uStack_6 + 1) {
    if ((*(byte *)(uStack_6 + -0x4456) & 0x38) != 0) {
      uStack_4 = uStack_4 + 1;
    }
  }
  *(int *)0xad5b = uStack_4;
  return;
}
