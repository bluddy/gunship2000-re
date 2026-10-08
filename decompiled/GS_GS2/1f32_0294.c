/* GS.GS2 1f32:0294 undefined FUN_1f32_0294(void) */
bool __cdecl16far FUN_1f32_0294(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_10bf_02c0();
  while( true ) {
    uVar3 = 1;
    iVar1 = FUN_10bf_2dae();
    if (iVar1 == 0) break;
    FUN_10bf_2dae(0);
  }
  if ((uVar3 == 0) || ((char)uVar3 != '\0')) {
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar2 = (int)uVar3 >> 0xf;
    iVar1 = ((int)((uVar3 ^ uVar2) - uVar2) >> 8 ^ uVar2) - uVar2;
    uVar3 = CONCAT11((char)((uint)iVar1 >> 8) + '\x01',(char)iVar1);
  }
  return uVar3 == 0x13b;
}
