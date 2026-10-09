/* GS.GS2 2000:a8dc undefined FUN_2000_a8dc(void) */
undefined4 __cdecl16near FUN_2000_a8dc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_SI;
  undefined2 unaff_DS;
  
  iVar1 = *unaff_SI;
  iVar2 = unaff_SI[2];
  uVar3 = (uint)(iVar2 << 1 < 0);
  uVar4 = (uint)(iVar2 << 2 < 0);
  return CONCAT22(((unaff_SI[3] << 1 | (uint)(iVar2 < 0)) << 1 | uVar3) << 1 | uVar4,
                  (((((unaff_SI[3] << 1 & 0x3fU | (uint)(iVar2 < 0)) << 1 | uVar3) << 1 | uVar4) <<
                   8) >> 2) +
                  (((unaff_SI[1] << 1 | (uint)(iVar1 < 0)) << 1 | (uint)(iVar1 << 1 < 0)) << 1 |
                  (uint)(iVar1 << 2 < 0)));
}
