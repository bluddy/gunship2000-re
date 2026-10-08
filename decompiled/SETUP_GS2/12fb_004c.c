/* SETUP.GS2 12fb:004c undefined FUN_12fb_004c(void) */
uint __cdecl16far FUN_12fb_004c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_111d_02c6();
  while( true ) {
    uVar3 = 1;
    iVar1 = FUN_111d_1d2a();
    if (iVar1 == 0) break;
    FUN_111d_1d2a(0);
  }
  if ((uVar3 == 0) || ((char)uVar3 != '\0')) {
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar2 = (int)uVar3 >> 0xf;
    iVar1 = ((int)((uVar3 ^ uVar2) - uVar2) >> 8 ^ uVar2) - uVar2;
    uVar3 = CONCAT11((char)((uint)iVar1 >> 8) + '\x01',(char)iVar1);
  }
  return uVar3;
}
