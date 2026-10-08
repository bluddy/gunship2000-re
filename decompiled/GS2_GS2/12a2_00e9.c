/* GS2.GS2 12a2:00e9 undefined FUN_12a2_00e9(void) */
void FUN_12a2_00e9(void)

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
  
  FUN_12a2_0296();
  FUN_12a2_049f(in_AX);
  if (*(int *)0x3244 == -0x292a) {
    (*(code *)*(undefined2 *)0x3248)();
  }
  (*(code *)*(undefined2 *)0x31a8)(0x12a2,0xff);
  pcVar1 = (char *)(in_BX + unaff_SI + 0x3500);
  *pcVar1 = *pcVar1 + (char)((uint)in_BX >> 8);
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  *(int *)0x31d2 = in_BX;
  *(undefined2 *)0x31d4 = unaff_ES;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  if (*(int *)0x3256 != 0) {
    bVar10 = false;
    (*(code *)*(undefined2 *)0x3254)();
    if (bVar10) {
      FUN_12a2_02b8();
      return;
    }
    (*(code *)*(undefined2 *)0x3254)();
  }
  iVar7 = *(int *)0x2c;
  if (iVar7 != 0) {
    pbVar9 = (byte *)0x0;
    do {
      bVar10 = *pbVar9 == 0;
      if (bVar10) break;
      iVar6 = 0xd;
      pbVar8 = (byte *)0x31c4;
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
        pbVar8 = (byte *)0x31ef;
        goto LAB_12a2_0190;
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
LAB_12a2_01a4:
  iVar7 = 4;
  do {
    bVar10 = false;
    *(byte *)(iVar7 + 0x31ef) = *(byte *)(iVar7 + 0x31ef) & 0xbf;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    if ((!bVar10) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + 0x31ef) = *(byte *)(iVar7 + 0x31ef) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  FUN_12a2_0283();
  FUN_12a2_0283();
  return;
LAB_12a2_0190:
  pbVar2 = pbVar9;
  pbVar3 = pbVar9 + 1;
  if (*pbVar2 < 0x41) goto LAB_12a2_01a4;
  pbVar9 = pbVar9 + 2;
  if (*pbVar3 < 0x41) goto LAB_12a2_01a4;
  pbVar4 = pbVar8;
  pbVar8 = pbVar8 + 1;
  *pbVar4 = *pbVar3 + 0xbf | (*pbVar2 + 0xbf) * '\x10';
  goto LAB_12a2_0190;
}
