/* GS.GS2 28d4:1248 undefined FUN_28d4_1248(void) */
uint __cdecl16near FUN_28d4_1248(void)

{
  uint in_AX;
  uint in_CX;
  uint in_DX;
  uint in_BX;
  
  if ((in_CX & 0x122a) != 0) {
    in_BX = (uint)(((ulong)in_AX * (ulong)(in_BX & 0xff) + 0x32) / 100);
  }
  if ((in_CX & 0x915) != 0) {
    in_DX = (uint)(((ulong)in_AX * (ulong)(in_DX & 0xff) + 0x32) / 100);
  }
  if (in_DX < in_AX) {
    if (-(in_DX - in_AX) < in_AX) {
      in_AX = -(in_DX - in_AX);
    }
    if (in_BX < in_AX) {
      in_AX = in_BX;
    }
    return in_AX;
  }
  return 0;
}
