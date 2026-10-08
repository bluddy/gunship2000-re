/* GS.GS2 28d4:13f2 undefined FUN_28d4_13f2(void) */
uint __cdecl16near FUN_28d4_13f2(void)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  FUN_28d4_1429();
  iVar4 = 0;
  uVar5 = 0;
  while( true ) {
    pbVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    uVar2 = (uint)iVar4 >> 8;
    bVar3 = *pbVar1 - 0x30;
    if ((*pbVar1 < 0x30) || (9 < bVar3)) break;
    iVar4 = (int)((ulong)uVar5 * 10);
    if ((int)((ulong)uVar5 * 10 >> 0x10) == 0) {
      uVar5 = CONCAT11((char)uVar2,bVar3) + iVar4;
      iVar4 = 0;
    }
    else {
      uVar5 = 0xffff;
    }
  }
  return uVar5;
}
