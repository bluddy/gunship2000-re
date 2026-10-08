/* GS.GS2 28d4:0d0b undefined FUN_28d4_0d0b(void) */
undefined4 __cdecl16near FUN_28d4_0d0b(void)

{
  uint in_AX;
  uint in_DX;
  
  return CONCAT22(in_DX >> 4,
                  ((((in_AX & 0xfff0) >> 1 | (uint)((in_DX & 1) != 0) << 0xf) >> 1 |
                   (uint)((in_DX >> 1 & 1) != 0) << 0xf) >> 1 | (uint)((in_DX >> 2 & 1) != 0) << 0xf
                  ) >> 1 | (uint)((in_DX >> 2 & 2) != 0) << 0xf);
}
