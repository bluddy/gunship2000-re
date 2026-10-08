/* GS2.GS2 17e0:0061 undefined FUN_17e0_0061(void) */
uint __cdecl16far FUN_17e0_0061(void)

{
  byte *pbVar1;
  int in_CX;
  int iVar2;
  byte bVar3;
  byte *in_BX;
  byte *pbVar4;
  byte *pbVar5;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  
  pbVar1 = DAT_17e0_000d;
  if ((DAT_17e0_000c & 1) != 0) {
    DAT_17e0_000c = 0;
    DAT_17e0_000d = in_BX;
    DAT_17e0_000f = unaff_DI;
    return 0xffff;
  }
  DAT_17e0_000d = in_BX;
  bVar3 = 1;
  iVar2 = in_CX;
  pbVar4 = in_BX;
  pbVar5 = pbVar1;
  do {
    if ((((byte)(((uint)*pbVar4 << (bVar3 & 0x1f)) >> 8) & *pbVar5) != 0) ||
       (((byte)(((uint)pbVar4[1] << (bVar3 & 0x1f)) >> 8) & *pbVar5) != 0)) {
      DAT_17e0_000f = DAT_17e0_000f + (uint)(byte)(10 - bVar3);
      return (uint)(byte)(10 - bVar3);
    }
    iVar2 = iVar2 + -1;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while ((iVar2 != 0) ||
          (bVar3 = bVar3 + 1, iVar2 = in_CX, pbVar4 = in_BX, pbVar5 = pbVar1, (char)bVar3 < '\t'));
  DAT_17e0_000f = unaff_DI;
  return 0;
}
