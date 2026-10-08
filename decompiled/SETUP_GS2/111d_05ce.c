/* SETUP.GS2 111d:05ce undefined FUN_111d_05ce(void) */
void __cdecl16near FUN_111d_05ce(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x97b = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_111d_05f2;
  if (*(byte *)0x978 < 3) {
LAB_111d_05e8:
    if (0x13 < bVar1) {
LAB_111d_05ec:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_111d_05ec;
    if (bVar1 < 0x20) goto LAB_111d_05e8;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x9b4);
LAB_111d_05f2:
  *(int *)0x970 = (int)cVar2;
  return;
}
