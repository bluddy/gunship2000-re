/* GS.GS2 10bf:4336 undefined FUN_10bf_4336(void) */
void __cdecl16near FUN_10bf_4336(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int *unaff_SI;
  int *unaff_DI;
  int iVar10;
  undefined2 unaff_DS;
  bool bVar11;
  bool bVar12;
  
  iVar5 = *unaff_SI;
  uVar4 = unaff_SI[1];
  uVar8 = unaff_SI[2];
  if (((unaff_SI[3] != 0 || uVar8 != 0) || uVar4 != 0) || iVar5 != 0) {
    uVar2 = unaff_SI[4] + 0x3fe;
    if ((int)uVar2 < 0) {
      *(byte *)0x6f00 = *(byte *)0x6f00 | 1;
    }
    else {
      uVar3 = uVar2 >> 1;
      uVar2 = unaff_SI[3] & 0x7fffU | (uint)((uVar2 & 1) != 0) << 0xf;
      bVar7 = 5;
      do {
        bVar6 = bVar7;
        bVar11 = iVar5 < 0;
        iVar5 = iVar5 << 1;
        bVar12 = (int)uVar4 < 0;
        uVar4 = uVar4 << 1 | (uint)bVar11;
        bVar11 = (int)uVar8 < 0;
        uVar8 = uVar8 << 1 | (uint)bVar12;
        bVar12 = (int)uVar2 < 0;
        uVar2 = uVar2 << 1 | (uint)bVar11;
        uVar3 = uVar3 << 1 | (uint)bVar12;
        bVar7 = bVar6 - 1;
      } while (bVar7 != 0);
      uVar1 = (uint)(0x8000 < CONCAT11((char)((uint)iVar5 >> 8),(byte)iVar5 | bVar6 & (byte)uVar4));
      iVar5 = uVar4 + uVar1;
      uVar4 = (uint)CARRY2(uVar4,uVar1);
      iVar9 = uVar8 + uVar4;
      uVar4 = (uint)CARRY2(uVar8,uVar4);
      iVar10 = uVar2 + uVar4;
      uVar3 = uVar3 + CARRY2(uVar2,uVar4);
      if ((uVar3 & 0xfff0) != 0) goto LAB_10bf_439b;
    }
  }
  uVar3 = 0;
  iVar5 = 0;
  iVar9 = 0;
  iVar10 = 0;
LAB_10bf_439b:
  *unaff_DI = iVar5;
  unaff_DI[1] = iVar9;
  unaff_DI[2] = iVar10;
  unaff_DI[3] = uVar3;
  return;
}
