/* GS.GS2 28d4:145f undefined FUN_28d4_145f(void) */
void FUN_28d4_145f(void)

{
  byte bVar1;
  byte bVar2;
  byte in_AL;
  byte bVar3;
  byte bVar4;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  
  FUN_28d4_146c();
  bVar3 = (in_AL & 0xf) + 0x90;
  in_AF = 9 < (bVar3 & 0xf) | in_AF;
  bVar3 = bVar3 + in_AF * '\x06';
  bVar2 = 0x90 < (bVar3 & 0xf0) | 0x6f < (in_AL & 0xf) | in_AF * (0xf9 < bVar3);
  bVar3 = bVar3 + bVar2 * '`';
  bVar1 = bVar3 + 0x40;
  bVar4 = bVar1 + bVar2;
  in_AF = 9 < (bVar4 & 0xf) | in_AF;
  bVar4 = bVar4 + in_AF * '\x06';
  *unaff_DI = bVar4 + (0x90 < (bVar4 & 0xf0) |
                      (0xbf < bVar3 || CARRY1(bVar1,bVar2)) | in_AF * (0xf9 < bVar4)) * '`';
  return;
}
