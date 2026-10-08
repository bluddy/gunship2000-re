/* GS2.GS2 137f:0816 undefined FUN_137f_0816(void) */
void __cdecl16near FUN_137f_0816(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *in_BX;
  uint *puVar4;
  undefined2 unaff_DS;
  
  uVar3 = *in_BX >> 8;
  uVar2 = 1;
  puVar4 = in_BX;
  if ((char)*in_BX != '\0') goto LAB_137f_082e;
  do {
    in_BX = in_BX + 1;
    puVar4 = (uint *)((int)in_BX + *in_BX);
    uVar2 = uVar3;
LAB_137f_082e:
    bVar1 = (byte)*puVar4 | *(byte *)0xfd;
    if ((char)bVar1 < '\0') {
      FUN_137f_08cf();
    }
    else if (bVar1 == 1) {
      FUN_137f_0850();
    }
    else {
      FUN_137f_0aab();
    }
    uVar3 = uVar2 - 1;
  } while (uVar3 != 0);
  return;
}
