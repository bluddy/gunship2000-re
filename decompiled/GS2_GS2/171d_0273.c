/* GS2.GS2 171d:0273 undefined FUN_171d_0273(void) */
void __cdecl16far FUN_171d_0273(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0x40;
  do {
    *(undefined2 *)(iVar2 + 0x2c) = 0;
    iVar2 = iVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  DAT_171d_00ae = 0;
  DAT_171d_00ac = 0;
  DAT_171d_00b7 = 0;
  return;
}
