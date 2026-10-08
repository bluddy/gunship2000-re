/* GS.GS2 10bf:00eb undefined FUN_10bf_00eb(void) */
void FUN_10bf_00eb(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined2 in_AX;
  int iVar6;
  uint extraout_DX;
  int in_BX;
  int iVar7;
  int unaff_SI;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  
  FUN_10bf_0298();
  FUN_10bf_0543(in_AX);
  if (*(int *)0x714e == -0x292a) {
    (*(code *)*(undefined2 *)0x7152)();
  }
  (*(code *)*(undefined2 *)0x682c)(0x10bf,0xff);
  pcVar1 = (char *)(in_BX + unaff_SI + 0x3500);
  *pcVar1 = *pcVar1 + (char)((uint)in_BX >> 8);
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  *(int *)0x6856 = in_BX;
  *(undefined2 *)0x6858 = unaff_ES;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  if (*(int *)0x7160 != 0) {
    bVar10 = false;
    (*(code *)*(undefined2 *)0x715e)();
    if (bVar10) {
      FUN_10bf_02ba();
      return;
    }
    (*(code *)*(undefined2 *)0x715e)();
  }
  iVar7 = *(int *)0x2c;
  if (iVar7 != 0) {
    pbVar9 = (byte *)0x0;
    do {
      bVar10 = *pbVar9 == 0;
      if (bVar10) break;
      iVar6 = 0xd;
      pbVar8 = (byte *)0x6848;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar4 = pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar2 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar10 = *pbVar2 == *pbVar4;
      } while (bVar10);
      if (bVar10) {
        pbVar8 = (byte *)0x6873;
        goto LAB_10bf_0192;
      }
      iVar6 = 0x7fff;
      bVar10 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar2 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar10 = *pbVar2 == 0;
      } while (!bVar10);
    } while (bVar10);
  }
LAB_10bf_01a6:
  iVar7 = 4;
  do {
    bVar10 = false;
    *(byte *)(iVar7 + 0x6873) = *(byte *)(iVar7 + 0x6873) & 0xbf;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    if ((!bVar10) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + 0x6873) = *(byte *)(iVar7 + 0x6873) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  FUN_10bf_0285();
  FUN_10bf_0285();
  return;
LAB_10bf_0192:
  pbVar2 = pbVar9;
  pbVar3 = pbVar9 + 1;
  if (*pbVar2 < 0x41) goto LAB_10bf_01a6;
  pbVar9 = pbVar9 + 2;
  if (*pbVar3 < 0x41) goto LAB_10bf_01a6;
  pbVar4 = pbVar8;
  pbVar8 = pbVar8 + 1;
  *pbVar4 = *pbVar3 + 0xbf | (*pbVar2 + 0xbf) * '\x10';
  goto LAB_10bf_0192;
}
