/* GS.GS2 10bf:3508 undefined FUN_10bf_3508(void) */
undefined4 __cdecl16near FUN_10bf_3508(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *unaff_SI;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  uVar5 = (uint)*unaff_SI << 8;
  bVar3 = unaff_SI[3] << 1 | (int)*(uint *)(unaff_SI + 1) < 0;
  uVar2 = *(uint *)(unaff_SI + 1) & 0x7fff | 0x8000;
  if ((bVar3 != 0) && (0x7d < bVar3)) {
    if (0x20 < (byte)(bVar3 + 0x82)) {
      uVar6 = FUN_10bf_5198();
      return uVar6;
    }
    for (iVar4 = -((byte)(bVar3 + 0x82) - 0x20); '\a' < (char)iVar4;
        iVar4 = CONCAT11((char)((uint)iVar4 >> 8),(char)iVar4 + -8)) {
      uVar5 = CONCAT11((char)uVar2,(char)(uVar5 >> 8));
      uVar2 = uVar2 >> 8;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar1 = uVar2 & 1;
      uVar2 = uVar2 >> 1;
      uVar5 = uVar5 >> 1 | (uint)(uVar1 != 0) << 0xf;
    }
    return CONCAT22(uVar2,uVar5);
  }
  return 0;
}
