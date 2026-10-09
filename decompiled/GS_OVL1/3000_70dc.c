/* GS.GS2 3000:70dc undefined FUN_3000_70dc(void) */
void __cdecl16far FUN_3000_70dc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_DS;
  int iStackY_1c;
  int iStackY_14;
  int iStackY_10;
  int iStackY_e;
  
  func_0x00000eb0();
  iStackY_14 = 9999;
  iStackY_10 = 9999;
  iStackY_e = 9999;
  iVar1 = *(int *)0xc4fc;
  iVar4 = iVar1 + -0x3f;
  iVar5 = -iVar4;
  iVar2 = *(int *)0xc500;
  *param_1 = *param_1 / 0x18;
  *param_2 = *param_2 / 0x12;
  for (iVar8 = iVar1; iVar8 < iVar5 + 1; iVar8 = iVar8 + 1) {
    iVar6 = -(iVar2 + -0x3f);
    if (iVar8 < -(iVar2 + -0x3f)) {
      iVar6 = iVar8;
    }
    if (iVar6 < iVar2) {
      iVar6 = iVar2;
    }
    bVar3 = *(byte *)(iVar6 * 0x40 + iVar1);
    iVar8 = func_0x000038b8(0xbf,*param_1 - iVar1);
    iVar6 = func_0x000038b8(0xbf,*param_2 + -0x7180);
    if (((iVar8 + iVar6 < iStackY_14) && ((bVar3 & 0x80) == 0)) &&
       ((*(byte *)((uint)bVar3 + (int)*(undefined4 *)0xb854) & 0x40) == 0)) {
      iStackY_1c = 1;
      iStackY_10 = 0x7193;
      iStackY_14 = iVar8 + iVar6;
      iStackY_e = iVar1;
    }
    bVar3 = *(byte *)(iVar5 + 0x64c0);
    iVar8 = func_0x000038b8(0xbf,*param_1 + iVar4);
    iVar6 = func_0x000038b8(0xbf,*param_2 + -0x71f1);
    if (((iVar8 + iVar6 < iStackY_14) && ((bVar3 & 0x80) == 0)) &&
       ((*(byte *)((uint)bVar3 + (int)*(undefined4 *)0xb854) & 0x40) == 0)) {
      iStackY_1c = 2;
      iStackY_10 = 0x7204;
      iStackY_14 = iVar8 + iVar6;
      iStackY_e = iVar5;
    }
    bVar3 = *(byte *)(iVar1 * 0x40 + 0x7204);
    iVar8 = func_0x000038b8(0xbf,*param_2 - iVar1);
    iVar6 = func_0x000038b8(0xbf,*param_1 + -0x7262);
    if (((iVar8 + iVar6 < iStackY_14) && ((bVar3 & 0x80) == 0)) &&
       ((*(byte *)((uint)bVar3 + (int)*(undefined4 *)0xb854) & 0x40) == 0)) {
      iStackY_1c = 4;
      iStackY_e = 0x7275;
      iStackY_14 = iVar8 + iVar6;
      iStackY_10 = iVar1;
    }
    bVar3 = *(byte *)(iVar4 * -0x40 + 0x7275);
    iVar6 = func_0x000038b8(0xbf,*param_2 + iVar4);
    iVar8 = 0xbf;
    iVar7 = func_0x000038b8(0xbf,*param_1 + -0x72d3);
    if (((iVar6 + iVar7 < iStackY_14) && ((bVar3 & 0x80) == 0)) &&
       ((*(byte *)((uint)bVar3 + (int)*(undefined4 *)0xb854) & 0x40) == 0)) {
      iStackY_1c = 3;
      iStackY_e = 0x72e6;
      iStackY_14 = iVar6 + iVar7;
      iStackY_10 = iVar5;
    }
  }
  iVar8 = iStackY_e * 0x18 + 0xc;
  *(int *)(*(int *)0xc018 * 0xb + -0x435c) = iVar8;
  *param_1 = iVar8;
  iVar8 = iStackY_10 * 0x12 + 9;
  *(int *)(*(int *)0xc018 * 0xb + -0x435a) = iVar8;
  *param_2 = iVar8;
  if ((*(int *)0xc4fc == 2) && (*(int *)0xc4fe == 0)) {
    iVar8 = -1;
    while (iVar1 = iStackY_1c + -1, iStackY_1c != 0) {
      do {
        iVar8 = iVar8 + 1;
        iStackY_1c = iVar1;
      } while ((*(byte *)((int)*(undefined4 *)0xb860 + iVar8 * 0x27 + 0x25) & 0x80) == 0);
    }
    *(int *)(*(int *)0xc018 * 0xb + -0x4362) = iVar8;
  }
  return;
}
