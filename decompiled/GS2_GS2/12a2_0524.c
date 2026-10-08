/* GS2.GS2 12a2:0524 undefined FUN_12a2_0524(void) */
void __cdecl16near FUN_12a2_0524(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x31eb = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_12a2_0548;
  if (*(byte *)0x31e8 < 3) {
LAB_12a2_053e:
    if (0x13 < bVar1) {
LAB_12a2_0542:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_12a2_0542;
    if (bVar1 < 0x20) goto LAB_12a2_053e;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x321e);
LAB_12a2_0548:
  *(int *)0x31e0 = (int)cVar2;
  return;
}
