/* GS.GS2 2581:0686 undefined FUN_2581_0686(void) */
void __cdecl16far FUN_2581_0686(int param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  uint uStack_a;
  byte *pbStack_8;
  
  FUN_10bf_02c0();
  pbStack_8 = (byte *)((ulong)*(uint *)(param_1 * 2 + -0x43d2) << 0x10);
  for (uStack_a = 0; uStack_a < 64000; uStack_a = uStack_a + 1) {
    bVar1 = *pbStack_8;
    if ((bVar1 < 0x45) || (0x4f < bVar1)) {
      if ((0xbf < bVar1) && (bVar1 < 0xe0)) {
        *pbStack_8 = bVar1 + 0x20;
      }
    }
    else {
      *pbStack_8 = (char)((ulong)((uint)bVar1 * 0x14 - 0x564) / 0xb) - 0x18;
    }
    pbStack_8 = (byte *)CONCAT22(pbStack_8._2_2_,(byte *)pbStack_8 + 1);
  }
  return;
}
