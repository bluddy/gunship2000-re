/* GS.GS2 2000:afe8 undefined FUN_2000_afe8(void) */
void __cdecl16far FUN_2000_afe8(uint *param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  byte extraout_AH;
  byte extraout_AH_00;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  uint uStackY_14;
  int iVar9;
  uint uVar10;
  
  func_0x00000eb0();
  uVar1 = *param_2;
  iVar3 = func_0x00003920(0xbf);
  uVar5 = iVar3 % 4000;
  uVar4 = uVar5 + uRam0000046c + 3000;
  iVar6 = ((int)uVar5 >> 0xf) + iRam0000046e + (uint)CARRY2(uVar5,uRam0000046c) +
          (uint)(0xf447 < uVar5 + uRam0000046c);
  uVar5 = uRam0000046c + 5000;
  iVar3 = iRam0000046e + (uint)(0xec77 < uRam0000046c);
  if (*(int *)0xc348 == 0) {
    iVar6 = 1;
    uVar4 = 0xbf;
    func_0x0000399e();
    *param_1 = (uint)extraout_AH;
  }
  else {
    *param_1 = *(uint *)0xc348;
  }
  do {
    uVar7 = 0xbf;
    if (*(int *)0xc4ee != 0 || *(int *)0xc4ec != 0) {
      if ((int)(uRam0000046c - *(int *)0xc4ec) < 8) {
        *(char *)((uint)*(byte *)0xe292 * 3 + -0x60ba) =
             ((char)(uRam0000046c - *(int *)0xc4ec) + '\b') * '\x04';
        iVar6 = -0x60c0;
        uVar4 = 0xbf;
        uVar7 = 0x1658;
        func_0x00016697();
      }
      else {
        *(undefined1 *)((uint)*(byte *)0xe292 * 3 + -0x60ba) = 0x3c;
        iVar6 = -0x60c0;
        uVar4 = 0xbf;
        uVar7 = 0x1658;
        func_0x00016697();
        *(undefined2 *)0xc4ee = 0;
        *(undefined2 *)0xc4ec = 0;
      }
    }
    uVar8 = uVar7;
    if ((uVar4 == uRam0000046c) && (iVar6 == iRam0000046e)) {
      iVar3 = *param_4;
      uVar5 = *param_3;
      uVar8 = 0x20f4;
      iVar6 = func_0x0002118e(uVar7,uVar5,iVar3,*(undefined2 *)0x2976,*(undefined2 *)0x2978,
                              *(undefined2 *)0x297a,*(undefined2 *)0x297c);
      if ((iVar6 != 0) && (*(int *)0xa246 == 1)) {
        iVar3 = 0;
        uVar5 = 0x20f4;
        FUN_2000_b2ec(0,0xc1,0x96,6,0xffff);
      }
    }
    if (((uVar5 == uRam0000046c) && (iVar3 == iRam0000046e)) && (*(int *)0xa246 == 1)) {
      func_0x0000c8c0(uVar8,0x892,0,0xa9,300,7,0);
      func_0x0000c8c0(0xc87,0x892,0,0xaa,300,7,0);
      func_0x0000c980(0xc87,3);
      iVar3 = func_0x00003920(0xc87);
      func_0x0000c928(0xbf,iVar3 % 0xe + 1);
      uVar8 = 0xc87;
      func_0x0000ca66(0xc87,0x25b0,*(undefined2 *)0xa54,*(undefined2 *)0xa56);
      FUN_2000_b2ec(0,0xa9,0xa0,6,0);
      uVar5 = uRam0000046c + 0x5dc;
    }
    if (*param_1 != 0) {
      if (*(int *)0xc348 == 0) {
        uVar7 = 0xbf;
        func_0x0000399e(uVar8,0);
      }
      else {
        *(undefined2 *)0xc348 = 0;
        uVar7 = uVar8;
      }
      if (('\0' < *(char *)0xe28f) && (*param_1 != *(uint *)0xc02e)) {
        uVar4 = *param_1;
        *(uint *)0xc02e = uVar4;
        if ((int)uVar4 < 0x45) {
          uStackY_14 = *param_1;
          *(uint *)0xc02e = uStackY_14;
        }
        else {
          uStackY_14 = 0x45;
        }
        puVar2 = (undefined2 *)(uStackY_14 * 4 + 0x25c4);
        (*(code *)*puVar2)(uVar7,*param_1);
      }
      uVar8 = uVar7;
      if (*param_1 == 0x10) {
        uVar8 = 0xbf;
        uVar4 = func_0x0000399e(uVar7,2);
        if ((uVar4 & 8) != 0) {
          func_0x000261f4(0xbf);
          func_0x0000ed5e(0x20f4);
          uVar8 = 0x20f4;
          func_0x000261d8(0xdea);
        }
      }
    }
    *(uint *)0xc02e = *param_1;
    uVar4 = func_0x0000ef98(uVar8,param_3,param_4);
    *param_2 = uVar4 | (int)*(char *)0xe284;
    *param_3 = *param_3 + (int)*(char *)0xe285;
    *param_4 = *param_4 + (int)*(char *)0xe286;
    iVar9 = 0xef4;
    iVar3 = -0x4d60;
    func_0x0000f246(0xef4,*param_3,*param_4,0);
    func_0x000112a0(0xef4,1);
    iVar6 = 1;
    uVar4 = 0x112a;
    uVar10 = 0xb2b4;
    func_0x0000399e();
    *param_1 = (uint)extraout_AH_00;
  } while (((*param_2 == uVar1 && *param_4 == iVar9) && *param_3 == uVar10) &&
           *param_1 == *(uint *)0xc02e);
  return;
}
