/* GS.GS2 10bf:34d3 undefined FUN_10bf_34d3(void) */
undefined4 FUN_10bf_34d3(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int unaff_SI;
  undefined2 unaff_DS;
  byte bVar6;
  undefined4 uVar7;
  
  uVar5 = *(uint *)(unaff_SI + 2);
  uVar1 = *(uint *)(unaff_SI + 4);
  bVar4 = (byte)*(uint *)(unaff_SI + 6) & 0xf | 0x10;
  uVar2 = (*(uint *)(unaff_SI + 6) & 0x7fff) >> 4;
  if ((uVar2 != 0) && (0x3fd < uVar2)) {
    if (0x20 < (int)(uVar2 - 0x3fe)) {
      uVar7 = FUN_10bf_5198();
      return uVar7;
    }
    for (iVar3 = -(uVar2 - 0x423); '\a' < (char)iVar3;
        iVar3 = CONCAT11((char)((uint)iVar3 >> 8),(char)iVar3 + -8)) {
      uVar5 = CONCAT11((char)uVar1,(char)(uVar5 >> 8));
      uVar1 = CONCAT11(bVar4,(char)(uVar1 >> 8));
      bVar4 = 0;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      bVar6 = bVar4 & 1;
      bVar4 = bVar4 >> 1;
      uVar2 = uVar1 & 1;
      uVar1 = uVar1 >> 1 | (uint)bVar6 << 0xf;
      uVar5 = uVar5 >> 1 | (uint)(uVar2 != 0) << 0xf;
    }
    return CONCAT22(uVar1,uVar5);
  }
  return 0;
}
