/* GS.GS2 2000:b51e undefined FUN_2000_b51e(void) */
void __cdecl16far FUN_2000_b51e(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_DS;
  undefined4 uVar11;
  undefined2 *puStack_14;
  int iStack_12;
  undefined2 uVar12;
  undefined2 uVar13;
  
  uVar9 = 0xbf;
  func_0x00000eb0();
  if (*(int *)((int)param_2 + 0xd) < 0) {
    pcVar7 = (char *)(*param_1 * 0x27 + *(int *)0xb860);
    uVar12 = *(undefined2 *)0xb862;
    if ((pcVar7[0x23] & 8U) == 0) {
      if ((*(byte *)(*(int *)0xb860 + *param_1 * 0x27 + 0x23) & 0x10) == 0) {
        if ((*(byte *)(*(int *)0xb860 + *param_1 * 0x27 + 0x23) & 4) == 0) {
          if (*(int *)(param_3 * 0x3e + -0x46fc) == 4) {
            *(undefined2 *)((int)param_2 + 0xd) = 6;
          }
          else {
            iVar1 = param_3 * 0x3e;
            if ((((*(int *)(iVar1 + -0x46f2) == *(int *)(iVar1 + -0x46fa)) &&
                 (*(int *)(iVar1 + -0x46f0) == *(int *)(iVar1 + -0x46f8))) &&
                (*(int *)(iVar1 + -0x46f6) == *(int *)(iVar1 + -0x46ee))) &&
               (*(int *)(iVar1 + -0x46f4) == *(int *)(iVar1 + -0x46ec))) {
              *(undefined2 *)((int)param_2 + 0xd) = 4;
            }
            else {
              *(undefined2 *)((int)param_2 + 0xd) = 0;
            }
          }
        }
        else {
          *(undefined2 *)((int)param_2 + 0xd) = 7;
        }
      }
      else {
        *(undefined2 *)((int)param_2 + 0xd) = 1;
      }
    }
    else {
      if (*pcVar7 == 'C') {
        uVar12 = 3;
      }
      else {
        uVar12 = 5;
      }
      *(undefined2 *)((int)param_2 + 0xd) = uVar12;
    }
  }
  if (*(int *)((int)param_2 + 0xd) < 3) {
    if ((*(byte *)((int)*(undefined4 *)0xb860 + *param_1 * 0x27 + 0x24) & 2) == 0) {
      uVar13 = 0;
      uVar12 = 0x2000;
      iVar5 = param_3 * 0x3e;
      uVar9 = *(undefined2 *)(iVar5 + -0x46f8);
      iVar1 = func_0x00003aec(0xbf,*(undefined2 *)(iVar5 + -0x46fa));
      param_1[3] = iVar1 * 0x18 + 0xc;
      iVar1 = 0;
      iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(iVar5 + -0x46f6),*(undefined2 *)(iVar5 + -0x46f4)
                             );
      param_1[4] = iVar5 * -0x12 + 0x477;
    }
    else {
      uVar13 = 0;
      uVar12 = 0x155;
      iVar5 = param_3 * 0x3e;
      uVar9 = *(undefined2 *)(iVar5 + -0x46f8);
      iVar1 = func_0x00003aec(0xbf,*(undefined2 *)(iVar5 + -0x46fa));
      param_1[3] = iVar1 + -1;
      iVar1 = -1;
      iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(iVar5 + -0x46f6),*(undefined2 *)(iVar5 + -0x46f4)
                             );
      param_1[4] = iVar5 + 0x481;
    }
    iVar6 = param_3 * 0x3e;
    iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(iVar6 + -0x46f2),*(undefined2 *)(iVar6 + -0x46f0),
                            0x2000,0);
    *param_2 = iVar5 * 0x18 + 0xc;
    uVar10 = 0xbf;
    iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(iVar6 + -0x46ee),*(undefined2 *)(iVar6 + -0x46ec),
                            0x2000,0);
    param_2[1] = iVar5 * -0x12 + 0x477;
    if (*(int *)((int)param_2 + 0xd) == 2) {
      param_2[3] = param_4;
      iVar5 = 0;
      while (param_4 != 0) {
        if (*(char *)((int)*(undefined4 *)0xb8d4 + iVar5 * 9 + 8) == '@') {
          param_4 = param_4 + -1;
        }
        iVar5 = iVar5 + 1;
      }
      for (; iVar5 < *(int *)0xb8dc; iVar5 = iVar5 + 1) {
        iVar6 = iVar1 + 1;
        uVar11 = func_0x0000eeb2(uVar10,param_2[4],param_2[5],iVar6 * 9);
        iVar4 = (int)((ulong)uVar11 >> 0x10);
        param_2[4] = (int)uVar11;
        param_2[5] = iVar4;
        puVar2 = (undefined2 *)(param_2[4] + iVar1 * 9);
        puStack_14 = (undefined2 *)CONCAT22(iVar4,puVar2);
        puVar3 = (undefined2 *)(iVar5 * 9 + *(int *)0xb8d4);
        uVar10 = *(undefined2 *)0xb8d6;
        *puStack_14 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar2[2] = puVar3[2];
        puVar2[3] = puVar3[3];
        *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar3 + 4);
        uVar10 = 0xdea;
        iVar1 = iVar6;
      }
      param_2[2] = iVar1;
      uVar8 = (undefined2)((ulong)*(undefined4 *)(param_2 + 4) >> 0x10);
      iVar1 = (int)*(undefined4 *)(param_2 + 4);
      *(undefined2 *)(iVar1 + 9) = uVar9;
      *(undefined2 *)(iVar1 + 0xb) = uVar12;
      *(undefined2 *)(iVar1 + 0xd) = uVar13;
      *(undefined2 *)(iVar1 + 0xf) = 0;
      *(undefined1 *)(iVar1 + 0x11) = 0x40;
      puVar2 = (undefined2 *)param_2[4];
      iVar1 = param_2[5];
      *puVar2 = *(undefined2 *)((int)puVar2 + 9);
      puVar2[1] = *(undefined2 *)((int)puVar2 + 0xb);
      puVar2[2] = *(undefined2 *)((int)puVar2 + 0xd);
      puVar2[3] = *(undefined2 *)((int)puVar2 + 0xf);
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)((int)puVar2 + 0x11);
      param_3 = param_3 * 0x3e;
      iVar1 = func_0x00003aec(uVar10,*(undefined2 *)(param_3 + -0x46e6),
                              *(undefined2 *)(param_3 + -0x46e4),0x2000,0);
      *param_2 = iVar1 * 0x18 + 0xc;
      iVar1 = func_0x00003aec(0xbf,*(undefined2 *)(param_3 + -0x46e2),
                              *(undefined2 *)(param_3 + -0x46e0),0x2000,0);
      param_2[1] = iVar1 * -0x12 + 0x477;
    }
    uVar9 = 0x20f4;
    func_0x00022464(0xbf,param_2 + 6,*param_2,param_2[1],0xffff);
  }
  func_0x00022464(uVar9,param_1 + 5,param_1[3],param_1[4]);
  return;
}
