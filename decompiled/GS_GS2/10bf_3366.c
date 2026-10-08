/* GS.GS2 10bf:3366 undefined FUN_10bf_3366(void) */
void __cdecl16near FUN_10bf_3366(void)

{
  uint uVar1;
  undefined2 *puVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  undefined2 *unaff_SI;
  undefined2 unaff_DS;
  
  puVar2 = (undefined2 *)*(undefined2 *)0x6ea8;
  cVar4 = (char)unaff_SI[2];
  iVar7 = CONCAT11(cVar4,(char)((uint)unaff_SI[1] >> 8));
  uVar1 = unaff_SI[3];
  uVar8 = iVar7 << 3;
  iVar6 = ((CONCAT11((char)uVar1,(char)((uint)unaff_SI[2] >> 8)) << 1 | (uint)(cVar4 < '\0')) << 1 |
          (uint)(iVar7 << 1 < 0)) << 1;
  if (((char)*unaff_SI != '\0' || (char)unaff_SI[1] != '\0') || (char)((uint)*unaff_SI >> 8) != '\0'
     ) {
    uVar8 = uVar8 | 1;
  }
  uVar10 = CONCAT11((char)((uint)iVar6 >> 8),(byte)iVar6 | iVar7 << 2 < 0) | 0x8000;
  uVar5 = uVar1 & 0x7ff0;
  if (uVar5 < 0x47e1) {
    if (0x37ff < uVar5) {
      iVar6 = (uVar5 + 0xc800) * 8;
      bVar9 = (byte)(uVar8 >> 8);
      if ((0x80 < (byte)uVar8) || ((0x7f < (byte)uVar8 && ((uVar8 & 0x100) != 0)))) {
        uVar8 = (uint)(byte)(bVar9 + 1) << 8;
        uVar5 = (uint)(0xfe < bVar9);
        bVar3 = CARRY2(uVar10,uVar5);
        uVar10 = uVar10 + uVar5;
        if ((bVar3) && (iVar6 = iVar6 + 0x80, iVar6 == 0x7f80)) goto LAB_10bf_33db;
      }
      if (iVar6 != 0) {
        puVar2[1] = CONCAT11((byte)((uint)iVar6 >> 8) | (byte)(uVar1 >> 8) & 0x80,
                             (byte)iVar6 | (byte)(uVar10 >> 8) & 0x7f);
        *puVar2 = CONCAT11((char)uVar10,(char)(uVar8 >> 8));
        return;
      }
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
LAB_10bf_33db:
  FUN_10bf_5198();
  return;
}
