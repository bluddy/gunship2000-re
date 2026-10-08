/* GS2.GS2 1000:00e8 undefined FUN_1000_00e8(void) */
int __cdecl16far FUN_1000_00e8(uint param_1,uint param_2)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  uint uStack_4;
  
  iVar3 = 0;
  if (((param_2 & 0x80) != 0) && (0x7fff < param_1)) {
    *(undefined1 *)0x3554 = 0x30;
    iVar3 = 1;
    uStack_4 = param_1;
    param_1 = -param_1;
  }
  *(char *)(iVar3 + 0x3554) = (char)((ulong)param_1 / 10000) + '0';
  *(char *)(iVar3 + 0x3555) = (char)(((ulong)param_1 % 10000) / 1000) + '0';
  uVar1 = ((ulong)param_1 % 10000) % 1000;
  if ((param_2 & 8) == 0) {
    *(char *)(iVar3 + 0x3556) = (char)(uVar1 / 100) + '0';
    *(char *)(iVar3 + 0x3557) = (char)((uVar1 % 100) / 10) + '0';
    cVar2 = (char)((uVar1 % 100) % 10);
    iVar3 = iVar3 + 4;
  }
  else {
    *(undefined1 *)(iVar3 + 0x3556) = 0x2e;
    cVar2 = (char)(uVar1 / 100);
    iVar3 = iVar3 + 3;
  }
  *(char *)(iVar3 + 0x3554) = cVar2 + '0';
  iVar4 = iVar3 + 1;
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(undefined1 *)(iVar3 + 0x3555) = 0x6b;
      *(undefined1 *)(iVar3 + 0x3556) = 0x6d;
      iVar4 = iVar3 + 3;
      goto LAB_1000_01c0;
    }
    if ((param_2 & 0x40) == 0) goto LAB_1000_01c0;
    *(undefined1 *)(iVar3 + 0x3555) = 0x25;
  }
  else {
    *(undefined1 *)(iVar3 + 0x3555) = 0x60;
  }
  iVar4 = iVar3 + 2;
LAB_1000_01c0:
  *(undefined1 *)(iVar4 + 0x3554) = 0;
  cVar2 = *(char *)0x3554;
  for (iVar3 = 0;
      ((cVar2 == '0' && (*(char *)(iVar3 + 0x3555) != '.')) && ((param_2 & 7) + iVar3 < 5));
      iVar3 = iVar3 + 1) {
    cVar2 = *(char *)(iVar3 + 0x3555);
  }
  iVar4 = iVar3;
  if (((param_2 & 0x80) != 0) && ((int)uStack_4 < 0)) {
    iVar4 = iVar3 + -1;
    *(undefined1 *)(iVar3 + 0x3553) = 0x2d;
  }
  return iVar4 + 0x3554;
}
