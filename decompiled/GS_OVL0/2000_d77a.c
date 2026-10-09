/* GS.GS2 2000:d77a undefined FUN_2000_d77a(void) */
undefined2 __cdecl16far
FUN_2000_d77a(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             int param_7)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 local_3a [38];
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0xd785;
  func_0x00000eb0();
  puStack_6 = param_1;
  puStack_8 = local_3a;
  iStack_a = 0xbf;
  iStack_c = 0xd792;
  func_0x00002dc6();
  *param_1 = 0;
  puStack_6 = (undefined1 *)0xffff;
  puStack_8 = (undefined1 *)param_5;
  iStack_a = param_4;
  iStack_c = param_3;
  iStack_e = param_2;
  iStack_10 = 0x880;
  uStack_12 = 0xbf;
  uStack_14 = 0xd7b1;
  func_0x0000c8c0();
  puStack_6 = param_1;
  puStack_8 = (undefined1 *)0xc87;
  iStack_a = 0xd7bc;
  iVar1 = func_0x00002e24();
  if (param_6 < iVar1) {
    iVar1 = param_6;
  }
  param_1[iVar1] = 0;
  iStack_10 = param_3;
  puStack_8 = (undefined1 *)0xbf;
  while( true ) {
    puStack_6 = param_1;
    iStack_a = 0xd7e3;
    iStack_e = func_0x0000cd58();
    if (iStack_e <= param_4) break;
    iVar1 = iVar1 + -1;
    param_1[iVar1] = 0;
    puStack_8 = (undefined1 *)0xc87;
  }
  puStack_6 = (undefined1 *)0x4;
  puStack_8 = (undefined1 *)0x9f34;
  iStack_a = 0xc87;
  iStack_c = 0xd806;
  func_0x00013518();
  puStack_6 = (undefined1 *)(param_5 + iStack_10 + -2);
  iStack_e = iStack_e + param_2;
  iStack_a = 0x1351;
  iStack_c = 0xd820;
  puStack_8 = (undefined1 *)iStack_e;
  func_0x000136b4();
  puStack_6 = (undefined1 *)0x1351;
  uVar2 = 0x1351;
  puStack_8 = (undefined1 *)0xd828;
  func_0x0001367c();
  puStack_8 = (undefined1 *)0x0;
  do {
    if (puStack_8 != (undefined1 *)0x0) {
      puStack_8 = (undefined1 *)0xd9ad;
      puStack_6 = (undefined1 *)uVar2;
      func_0x0001370e();
      return iStack_c;
    }
    puStack_6 = (undefined1 *)0x1;
    iStack_a = -0x27c3;
    puStack_8 = (undefined1 *)uVar2;
    func_0x000112a0();
    puStack_6 = (undefined1 *)0x112a;
    uVar2 = 0xf32;
    puStack_8 = (undefined1 *)0xd845;
    iStack_c = func_0x0000f508();
    if (*(int *)0x8c8 != 0) {
      puStack_6 = (undefined1 *)0xb60d;
      puStack_8 = (undefined1 *)0xb60b;
      iStack_a = 0xf32;
      uVar2 = 0xef4;
      iStack_c = -0x27a6;
      func_0x0000ef98();
    }
    uVar3 = 0x1351;
    puStack_8 = (undefined1 *)0xd862;
    puStack_6 = (undefined1 *)uVar2;
    func_0x000135e2();
    puStack_6 = (undefined1 *)0x1;
    if (iStack_c == 8) {
LAB_2000_d86e:
      if (iVar1 != 0) {
        iVar1 = iVar1 + -1;
        puStack_6 = param_1 + iVar1;
        puStack_8 = (undefined1 *)0x1351;
        iStack_a = 0xd883;
        iStack_a = func_0x0000cd58();
        puStack_6 = (undefined1 *)param_7;
        puStack_8 = (undefined1 *)param_5;
        iStack_c = iStack_10;
        iStack_e = iStack_e - iStack_a;
        iStack_10 = 0x880;
        uStack_12 = 0xc87;
        uVar3 = 0x1658;
        uStack_14 = 0xd8a2;
        func_0x00016a62();
      }
    }
    else if (iStack_c != 0xd) {
      if (iStack_c == 0x1b) {
        puStack_6 = local_3a;
        puStack_8 = param_1;
        iStack_a = 0x1351;
        uVar3 = 0xbf;
        iStack_c = -0x2744;
        func_0x00002dc6();
        puStack_6 = (undefined1 *)0x0;
      }
      else if (iStack_c == 0x110) {
        puStack_6 = (undefined1 *)0x1351;
        uVar3 = 0xdea;
        puStack_8 = (undefined1 *)0xd8ad;
        func_0x0000ed38();
      }
      else {
        if (iStack_c == 0x14b) goto LAB_2000_d86e;
        if (((iStack_c == 0x20) && (iVar1 != 0)) || ((0x20 < iStack_c && (iStack_c < 0x80)))) {
          param_1[iVar1] = (undefined1)iStack_c;
          iVar1 = iVar1 + 1;
        }
        else {
          puStack_6 = (undefined1 *)0x0;
        }
      }
    }
    if (puStack_6 != (undefined1 *)0x0) {
      if (param_6 < iVar1) {
        iVar1 = param_6;
      }
      param_1[iVar1] = 0;
      puStack_8 = (undefined1 *)uVar3;
      while( true ) {
        puStack_6 = param_1;
        iStack_a = 0xd944;
        iStack_e = func_0x0000cd58();
        if (iStack_e <= param_4) break;
        iVar1 = iVar1 + -1;
        param_1[iVar1] = 0;
        puStack_8 = (undefined1 *)0xc87;
      }
      iStack_e = iStack_e + param_2;
      puStack_6 = (undefined1 *)0x0;
      puStack_8 = (undefined1 *)0x0;
      iStack_a = 0xc87;
      iStack_c = -0x2693;
      func_0x0000ca12();
      puStack_6 = param_1;
      puStack_8 = (undefined1 *)0xc87;
      uVar3 = 0xc87;
      iStack_a = -0x2688;
      func_0x0000ca50();
    }
    puStack_8 = (undefined1 *)0xd980;
    puStack_6 = (undefined1 *)uVar3;
    func_0x000135fc();
    puStack_6 = (undefined1 *)(param_5 + iStack_10 + -2);
    puStack_8 = (undefined1 *)iStack_e;
    iStack_a = 0x1351;
    uVar2 = 0x1351;
    iStack_c = 0xd991;
    func_0x000136b4();
    if (puStack_6 != (undefined1 *)0x0) {
      puStack_6 = (undefined1 *)0x86e;
      puStack_8 = (undefined1 *)0x1351;
      uVar2 = 0xc87;
      iStack_a = 0xd9a2;
      func_0x0000c87a();
    }
  } while( true );
}
