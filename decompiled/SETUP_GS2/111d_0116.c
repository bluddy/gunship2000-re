/* SETUP.GS2 111d:0116 undefined FUN_111d_0116(void) */
void __cdecl16far FUN_111d_0116(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x962 = in_BX;
  *(undefined2 *)0x964 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0xba8 != 0) {
    bVar9 = false;
    (*(code *)*(undefined2 *)0xba6)();
    if (bVar9) {
      FUN_111d_02c0();
      return;
    }
    (*(code *)*(undefined2 *)0xba6)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      bVar9 = *pbVar8 == 0;
      if (bVar9) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x954;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar1 == *pbVar3;
      } while (bVar9);
      if (bVar9) {
        pbVar7 = (byte *)0x97f;
        goto LAB_111d_0198;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar9 = *pbVar1 == 0;
      } while (!bVar9);
    } while (bVar9);
  }
LAB_111d_01ac:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + 0x97f) = *(byte *)(iVar6 + 0x97f) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + 0x97f) = *(byte *)(iVar6 + 0x97f) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_111d_028b();
  FUN_111d_028b();
  return;
LAB_111d_0198:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_111d_01ac;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_111d_01ac;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_111d_0198;
}
