/* GS2.GS2 1926:0031 undefined FUN_1926_0031(void) */
void __cdecl16near FUN_1926_0031(void)

{
  byte bVar1;
  byte bVar2;
  byte in_AL;
  byte bVar4;
  byte bVar5;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  byte bVar3;
  
  bVar4 = (in_AL & 0xf) + 0x90;
  bVar2 = 9 < (bVar4 & 0xf) | in_AF;
  bVar4 = bVar4 + bVar2 * '\x06';
  bVar3 = 0x90 < (bVar4 & 0xf0) | 0x6f < (in_AL & 0xf) | bVar2 * (0xf9 < bVar4);
  bVar4 = bVar4 + bVar3 * '`';
  bVar1 = bVar4 + 0x40;
  bVar5 = bVar1 + bVar3;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06';
  *unaff_DI = bVar5 + (0x90 < (bVar5 & 0xf0) |
                      (0xbf < bVar4 || CARRY1(bVar1,bVar3)) | bVar2 * (0xf9 < bVar5)) * '`';
  return;
}
