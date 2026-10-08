/* SETUP.GS2 12fb:00ac undefined FUN_12fb_00ac(void) */
uint __cdecl16far FUN_12fb_00ac(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_111d_02c6();
  uVar1 = FUN_111d_1d2a(1);
  if ((uVar1 == 0) || ((char)uVar1 != '\0')) {
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar3 = (int)uVar1 >> 0xf;
    iVar2 = ((int)((uVar1 ^ uVar3) - uVar3) >> 8 ^ uVar3) - uVar3;
    uVar1 = CONCAT11((char)((uint)iVar2 >> 8) + '\x01',(char)iVar2);
  }
  return uVar1;
}
