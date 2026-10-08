/* GS.GS2 10bf:1d88 undefined FUN_10bf_1d88(void) */
/* WARNING: Removing unreachable block (ram,0x00012a5f) */
/* WARNING: Removing unreachable block (ram,0x00012a54) */

void FUN_10bf_1d88(undefined2 param_1,uint param_2,undefined2 param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar5;
  int iVar7;
  uint extraout_DX;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar6;
  
  if (((*(uint *)0x6871 <= param_2) || (param_4 == 0)) || ((*(byte *)(param_2 + 0x6873) & 2) != 0))
  {
LAB_10bf_1e05:
    FUN_10bf_05b5();
    return;
  }
  uVar10 = *(uint *)0x714e < 0xd6d6;
  if (*(uint *)0x714e == 0xd6d6) {
    (*(code *)*(undefined2 *)0x7150)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if ((((bool)uVar10) || ((*(byte *)(param_2 + 0x6873) & 0x80) == 0)) ||
     (*(byte *)(param_2 + 0x6873) = *(byte *)(param_2 + 0x6873) & 0xfb, (int)uVar12 == 0))
  goto LAB_10bf_1e05;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_2 + 0x6873) = *(byte *)(param_2 + 0x6873) | 4;
  }
LAB_10bf_1dea:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_10bf_1dfa;
      goto LAB_10bf_1dfd;
    }
    bVar11 = false;
    if ((*(byte *)(param_2 + 0x6873) & 0x40) == 0) {
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if (!bVar11) {
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(0x21);
          iVar5 = (*pcVar3)();
          iVar7 = 1;
        }
        uVar4 = CONCAT11((char)((uint)iVar5 >> 8),0xd);
        goto LAB_10bf_1dfa;
      }
      goto LAB_10bf_1e05;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_10bf_1e05;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_2 + 0x6873) = *(byte *)(param_2 + 0x6873) | 2;
    goto LAB_10bf_1e05;
  }
LAB_10bf_1dfa:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_10bf_1dfd:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_10bf_1e05;
  goto LAB_10bf_1dea;
}
