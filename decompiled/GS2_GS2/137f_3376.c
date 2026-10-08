/* GS2.GS2 137f:3376 undefined FUN_137f_3376(void) */
void __cdecl16far
FUN_137f_3376(int param_1,int param_2,undefined2 param_3,uint param_4,byte *param_5,byte param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined2 unaff_DS;
  undefined2 uVar13;
  undefined2 uVar14;
  int iStack_8;
  int iStack_6;
  
  if ((param_4 & 0x100) == 0) {
    if (param_1 + 4 <= *(int *)0x2ae0) {
      return;
    }
    if (*(int *)0x2ae2 <= param_1 + -4) {
      return;
    }
    if (param_2 + 4 <= *(int *)0x2ae4) {
      return;
    }
    if (*(int *)0x2ae6 <= param_2 + -4) {
      return;
    }
  }
  uVar13 = (undefined2)((ulong)param_5 >> 0x10);
  pbVar9 = (byte *)param_5;
  bVar7 = (byte)param_4;
  pbVar10 = pbVar9;
  if ((param_4 & 0x200) != 0) {
    while (*pbVar10 != 0) {
      pbVar12 = pbVar10 + 2;
      uVar8 = (uint)pbVar10[1];
      iVar4 = FUN_137f_278e(param_3,(uint)*pbVar12 << 8);
      iVar5 = FUN_137f_2776(param_3,(uint)pbVar10[3] << 8,iVar4);
      iVar2 = FUN_137f_278e(param_3,(uint)pbVar10[3] << 8);
      iVar3 = FUN_137f_2776(param_3,(uint)*pbVar12 << 8,iVar2);
      iStack_8 = param_2 - (iVar5 + iVar4 >> (bVar7 & 0x1f));
      iStack_6 = (iVar3 - iVar2 >> (bVar7 & 0x1f)) + param_1;
      do {
        pbVar11 = pbVar12 + 2;
        uVar14 = uVar13;
        pbVar10 = pbVar11;
        iVar4 = FUN_137f_278e(param_3,(uint)*pbVar11 << 8,iStack_6,iStack_8);
        iVar5 = FUN_137f_2776(param_3,(uint)pbVar12[3] << 8);
        iVar5 = param_2 - (iVar5 + iVar4 >> (bVar7 & 0x1f));
        iVar4 = iVar5;
        iVar2 = FUN_137f_278e(param_3,(uint)pbVar12[3] << 8,iVar5);
        iVar3 = FUN_137f_2776(param_3,(uint)*pbVar11 << 8);
        iVar2 = (iVar3 - iVar2 >> (bVar7 & 0x1f)) + param_1;
        pcVar6 = (code *)0x197e;
        if ((param_4 & 0x100) == 0) {
          pcVar6 = (code *)0xa;
        }
        uVar13 = uVar14;
        pbVar12 = pbVar10;
        (*pcVar6)(0x137f,0,iVar2 + 1,iVar4 + 1,iStack_6 + 1,iStack_8 + 1);
        uVar8 = uVar8 - 1;
        iStack_8 = iVar5;
        iStack_6 = iVar2;
      } while (uVar8 != 0);
      pbVar10 = pbVar12 + 2;
    }
  }
  while( true ) {
    bVar1 = *pbVar9;
    if (bVar1 == 0) break;
    if (bVar1 == 0xff) {
      bVar1 = param_6;
    }
    pbVar10 = pbVar9 + 2;
    uVar8 = (uint)pbVar9[1];
    iVar4 = FUN_137f_278e(param_3,(uint)*pbVar10 << 8);
    iVar5 = FUN_137f_2776(param_3,(uint)pbVar9[3] << 8,iVar4);
    iStack_8 = param_2 - (iVar5 + iVar4 >> (bVar7 & 0x1f));
    iVar4 = FUN_137f_278e(param_3,(uint)pbVar9[3] << 8);
    iVar5 = FUN_137f_2776(param_3,(uint)*pbVar10 << 8,iVar4);
    iStack_6 = (iVar5 - iVar4 >> (bVar7 & 0x1f)) + param_1;
    do {
      pbVar12 = pbVar10 + 2;
      uVar14 = uVar13;
      pbVar9 = pbVar12;
      iVar4 = FUN_137f_278e(param_3,(uint)*pbVar12 << 8,iStack_6,iStack_8);
      iVar5 = FUN_137f_2776(param_3,(uint)pbVar10[3] << 8);
      iStack_8 = param_2 - (iVar5 + iVar4 >> (bVar7 & 0x1f));
      iVar4 = FUN_137f_278e(param_3,(uint)pbVar10[3] << 8,iStack_8);
      iVar5 = FUN_137f_2776(param_3,(uint)*pbVar12 << 8);
      iStack_6 = (iVar5 - iVar4 >> (bVar7 & 0x1f)) + param_1;
      pcVar6 = (code *)0x197e;
      if ((param_4 & 0x100) == 0) {
        pcVar6 = (code *)0xa;
      }
      uVar13 = uVar14;
      pbVar10 = pbVar9;
      (*pcVar6)(0x137f,bVar1,iStack_6);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    pbVar9 = pbVar10 + 2;
  }
  return;
}
