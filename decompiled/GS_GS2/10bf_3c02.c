/* GS.GS2 10bf:3c02 undefined FUN_10bf_3c02(void) */
void FUN_10bf_3c02(void)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  byte in_AL;
  uint in_CX;
  uint in_DX;
  byte bVar4;
  uint in_BX;
  uint uVar5;
  uint unaff_BP;
  int iVar6;
  uint unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar7;
  bool bVar8;
  
  iVar6 = 4;
  while ((uVar5 = in_BX, in_BX = in_CX, unaff_DI == 0 && ((uVar5 & 0xe000) == 0))) {
    bVar7 = unaff_BP < 0x200;
    unaff_BP = unaff_BP - 0x200;
    if ((bVar7 || unaff_BP == 0) || (iVar6 = iVar6 + -1, iVar6 == 0)) goto LAB_10bf_3c55;
    in_CX = in_DX;
    in_DX = 0;
    unaff_DI = uVar5;
  }
  if ((unaff_DI & 0x1fe0) == 0) {
    bVar7 = unaff_BP < 0x100;
    unaff_BP = unaff_BP - 0x100;
    if (bVar7 || unaff_BP == 0) {
LAB_10bf_3c55:
      FUN_10bf_3cbb();
      return;
    }
    unaff_DI = CONCAT11((char)unaff_DI,(char)(uVar5 >> 8));
    uVar5 = CONCAT11((char)uVar5,(char)(in_BX >> 8));
    in_BX = CONCAT11((char)in_BX,(char)(in_DX >> 8));
    in_DX = in_DX << 8;
  }
  for (; (unaff_DI & 0x1000) == 0; unaff_DI = unaff_DI << 1 | (uint)bVar7) {
    unaff_BP = unaff_BP - 0x20;
    if (unaff_BP == 0) goto code_r0x000148ab;
    bVar7 = (int)in_DX < 0;
    in_DX = in_DX << 1;
    bVar8 = (int)in_BX < 0;
    in_BX = in_BX << 1 | (uint)bVar7;
    bVar7 = (int)uVar5 < 0;
    uVar5 = uVar5 << 1 | (uint)bVar8;
  }
  if (*(char *)0x6eca != '\0') {
    FUN_10bf_3fe7();
    return;
  }
  bVar4 = (byte)(in_DX >> 8);
  if ((0x80 < (byte)in_DX) || ((0x7f < (byte)in_DX && ((in_DX & 0x100) != 0)))) {
    in_DX = (uint)(byte)(bVar4 + 1) << 8;
    uVar3 = (uint)(0xfe < bVar4);
    bVar7 = CARRY2(in_BX,uVar3);
    in_BX = in_BX + uVar3;
    uVar3 = (uint)bVar7;
    bVar7 = CARRY2(uVar5,uVar3);
    uVar5 = uVar5 + uVar3;
    unaff_DI = unaff_DI + bVar7;
    if (((unaff_DI & 0x2000) != 0) && (unaff_BP = unaff_BP + 0x20, unaff_BP == 0xffe0)) {
      FUN_10bf_5198();
      return;
    }
  }
  puVar1 = (undefined1 *)*(int *)0x6ea8;
  if (unaff_BP >> 1 != 0) {
    *(uint *)(puVar1 + 6) =
         CONCAT11(in_AL & 0x80 | (byte)(unaff_BP >> 9),
                  (byte)(unaff_BP >> 1) | (byte)((unaff_DI & 0xfff) >> 8));
    puVar1[5] = (char)(unaff_DI & 0xfff);
    *puVar1 = (char)(in_DX >> 8);
    *(uint *)(puVar1 + 1) = in_BX;
    *(uint *)(puVar1 + 3) = uVar5;
    return;
  }
code_r0x000148ab:
  if (*(char *)0x6eca != '\0') {
    FUN_10bf_403d();
    return;
  }
  puVar2 = (undefined2 *)*(undefined2 *)0x6ea8;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}
