/* GS.GS2 10bf:1e72 undefined FUN_10bf_1e72(void) */
/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_10bf_1e72(undefined2 param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  if (*(uint *)0x6871 <= param_2) {
LAB_10bf_1e85:
    uVar4 = FUN_10bf_05b5();
    return uVar4;
  }
  if (*(int *)0x714e == -0x292a) {
    (*(code *)*(undefined2 *)0x7150)();
  }
  if ((*(byte *)(param_2 + 0x6873) & 0x20) != 0) {
    bVar9 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar9) goto LAB_10bf_1e85;
  }
  if ((*(byte *)(param_2 + 0x6873) & 0x80) != 0) {
    bVar9 = true;
    iVar6 = param_4;
    pcVar8 = param_3;
    if (param_4 != 0) {
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar9 = *pcVar1 == '\n';
      } while (!bVar9);
      if (!bVar9) goto LAB_10bf_1f1d;
      pcVar7 = param_3;
      uVar5 = FUN_10bf_1fb2();
      if (uVar5 < 0xa9) {
        uVar4 = FUN_10bf_02c0();
        bVar9 = pcVar8 < pcVar7;
        if (pcVar8 != pcVar7) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)(iVar6,param_2);
          if ((bVar9) || (uVar5 < (uint)((int)pcVar8 - (int)pcVar7))) {
            uVar4 = FUN_10bf_05b5();
            return uVar4;
          }
        }
        return uVar4;
      }
      pcVar7 = &stack0xfff0;
      pcVar8 = &stack0xfff2;
      do {
        pcVar1 = param_3;
        param_3 = param_3 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar8 == pcVar7) {
            cVar3 = FUN_10bf_1f26();
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar8 == pcVar7) {
          cVar3 = FUN_10bf_1f26();
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = cVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      FUN_10bf_1f26();
    }
    uVar4 = FUN_10bf_1f70();
    return uVar4;
  }
LAB_10bf_1f1d:
  uVar4 = FUN_10bf_1f7e();
  return uVar4;
}
