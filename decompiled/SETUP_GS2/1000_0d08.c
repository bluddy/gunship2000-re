/* SETUP.GS2 1000:0d08 undefined FUN_1000_0d08(void) */
byte __cdecl16far FUN_1000_0d08(void)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = FUN_111d_02c6();
  out(0x201,uVar1);
  iVar3 = 0;
  bVar2 = in(0x201);
  bVar2 = bVar2 & 0xf;
  if (bVar2 != 0) {
    do {
      bVar2 = in(0x201);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    bVar2 = bVar2 & 0xf ^ 0xf;
  }
  return bVar2;
}
