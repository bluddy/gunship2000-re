/* GS.GS2 10bf:43d5 undefined FUN_10bf_43d5(void) */
void __cdecl16near FUN_10bf_43d5(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *unaff_SI;
  uint uVar9;
  undefined2 unaff_DS;
  bool bVar10;
  
  uVar8 = *unaff_SI;
  uVar6 = unaff_SI[1];
  uVar7 = unaff_SI[2];
  uVar4 = unaff_SI[3];
  uVar9 = 0;
  iVar5 = 5;
  do {
    bVar10 = (uVar4 & 1) != 0;
    uVar4 = uVar4 >> 1;
    uVar1 = uVar7 & 1;
    uVar3 = uVar7 >> 1;
    uVar7 = uVar3 | (uint)bVar10 << 0xf;
    uVar2 = uVar6 & 1;
    uVar6 = uVar6 >> 1 | (uint)(uVar1 != 0) << 0xf;
    uVar1 = uVar8 & 1;
    uVar8 = uVar8 >> 1 | (uint)(uVar2 != 0) << 0xf;
    uVar9 = uVar9 >> 1 | (uint)(uVar1 != 0) << 0xf;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar7 = uVar4 << 1 | (uint)bVar10;
  *unaff_SI = uVar9;
  unaff_SI[1] = uVar8;
  unaff_SI[2] = uVar6;
  unaff_SI[3] = uVar3 | (uint)(uVar7 != 0) << 0xf;
  unaff_SI[4] = uVar7 - 0x3fe;
  return;
}
