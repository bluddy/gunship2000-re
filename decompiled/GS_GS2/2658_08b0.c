/* GS.GS2 2658:08b0 undefined FUN_2658_08b0(void) */
byte __cdecl16near FUN_2658_08b0(void)

{
  byte bVar1;
  int in_BX;
  int unaff_BP;
  undefined2 unaff_DS;
  
  bVar1 = 0xf;
  if (-1 < in_BX) {
    bVar1 = 7;
  }
  if (in_BX <= *(int *)0x6809) {
    bVar1 = bVar1 & 0xfe;
  }
  if (-1 < unaff_BP) {
    bVar1 = bVar1 & 0xfb;
  }
  if (unaff_BP <= *(int *)0x680b) {
    bVar1 = bVar1 & 0xfd;
  }
  return bVar1;
}
