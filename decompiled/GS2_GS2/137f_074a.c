/* GS2.GS2 137f:074a undefined FUN_137f_074a(void) */
void __cdecl16near FUN_137f_074a(void)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int in_BX;
  int iVar5;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(undefined2 *)(unaff_SI + 0x1e) = *(undefined2 *)(in_BX + 2);
  *(undefined2 *)(unaff_SI + 0x20) = *(undefined2 *)(in_BX + 4);
  *(undefined2 *)(unaff_SI + 0x22) = *(undefined2 *)(in_BX + 6);
  iVar5 = in_BX;
  FUN_137f_07cf();
  pbVar1 = (byte *)*(undefined2 *)(unaff_SI + 0x16);
  bVar3 = *pbVar1;
  while (bVar3 != 0xff) {
    uVar4 = (uint)bVar3;
    if (*(char *)(uVar4 + 0x10e) < '\0') {
      iVar5 = uVar4 * 2 + 1;
      bVar3 = pbVar1[uVar4 * 2 + 2];
    }
    else {
      iVar5 = uVar4 * 2;
      bVar3 = pbVar1[iVar5 + 1];
    }
  }
  iVar5 = iVar5 * 2;
  if (*(int *)(iVar5 + 0x188) == 0) {
    iVar2 = *(int *)0x186;
    *(int *)(iVar5 + 0x188) = iVar2;
    *(undefined2 *)(iVar2 + 0x208) = 0;
    *(int *)(iVar2 + 0x20a) = in_BX;
    *(int *)0x186 = iVar2 + 4;
    return;
  }
  for (iVar5 = *(int *)(iVar5 + 0x188); *(int *)(iVar5 + 0x208) != 0;
      iVar5 = *(int *)(iVar5 + 0x208)) {
  }
  iVar2 = *(int *)0x186;
  *(int *)(iVar5 + 0x208) = iVar2;
  *(undefined2 *)(iVar2 + 0x208) = 0;
  *(int *)(iVar2 + 0x20a) = in_BX;
  *(int *)0x186 = iVar2 + 4;
  return;
}
