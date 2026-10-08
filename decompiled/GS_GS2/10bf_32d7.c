/* GS.GS2 10bf:32d7 undefined FUN_10bf_32d7(void) */
void __cdecl16near FUN_10bf_32d7(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *unaff_DI;
  undefined2 unaff_DS;
  
  puVar1 = (uint *)unaff_DI[-2];
  unaff_DI[-2] = unaff_DI;
  *(undefined1 *)(unaff_DI + -1) = 7;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  if ((uVar3 & 0x7f80) != 0) {
    *unaff_DI = 0;
    uVar4 = uVar2 >> 1;
    unaff_DI[1] = (((uint)((uVar2 & 1) != 0) << 0xf) >> 1 | (uint)((uVar4 & 1) != 0) << 0xf) >> 1 |
                  (uint)((uVar4 & 2) != 0) << 0xf;
    unaff_DI[2] = ((uVar4 | (uint)((uVar3 & 1) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar3 >> 1 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar3 >> 2 & 1U) != 0) << 0xf;
    unaff_DI[3] = (CONCAT11((char)((int)uVar3 >> 0xb),(char)((int)uVar3 >> 3)) & 0x8fff) + 0x3800;
    return;
  }
  *unaff_DI = 0;
  unaff_DI[1] = 0;
  unaff_DI[2] = 0;
  unaff_DI[3] = 0;
  return;
}
