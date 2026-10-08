/* GS2.GS2 171d:0293 undefined FUN_171d_0293(void) */
int __cdecl16far FUN_171d_0293(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_171d_00ae + 0x2c);
  if (iVar1 != 0) {
    *(undefined2 *)(DAT_171d_00ae + 0x2c) = 0;
    DAT_171d_00ae = DAT_171d_00ae + 2 & 0x3f;
    if ((iVar1 == 0x3920) && ((DAT_171d_00b5 & 1) != 0)) {
      iVar1 = 0x3900;
    }
  }
  return iVar1;
}
