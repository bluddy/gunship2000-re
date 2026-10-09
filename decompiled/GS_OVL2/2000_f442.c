/* GS.GS2 2000:f442 undefined FUN_2000_f442(void) */
undefined2 __cdecl16far FUN_2000_f442(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char *pcVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  ulong uVar11;
  undefined1 local_3a [10];
  int iStack_30;
  int iStack_2e;
  int iStack_2c;
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  
  uVar10 = 0xbf;
  func_0x00000eb0();
  do {
    while( true ) {
      iVar6 = *(int *)0xb60f;
      puStack_e = (undefined1 *)uVar10;
      if ((iVar6 == 9) && (*(char *)0x9bb9 == '\0')) {
        uStack_10 = 0xf46d;
        func_0x000156ea();
      }
      else {
        uStack_10 = 0xf47e;
        func_0x000156ea();
      }
      uVar10 = 0x14e6;
      func_0x0001544e();
      if (*(int *)0x9bb6 < 0) {
        return 0;
      }
      if (*(int *)0xb611 == 0xd) {
        uVar7 = (int)(*(int *)0xb60d - 0x57U) >> 0xf;
        iStack_2e = ((int)((*(int *)0xb60d - 0x57U ^ uVar7) - uVar7) >> 3 ^ uVar7) - uVar7;
        iStack_2c = (*(int *)0xb60b + -0xc0) / 0xb;
        if ((((-1 < iStack_2c) && (iStack_2c < 3)) && (-1 < iStack_2e)) && (iStack_2e < 4)) {
          iStack_30 = iStack_2c + iStack_2e * 3 + 1;
          if (iStack_30 == 0xb) {
            iStack_30 = 0;
          }
          if ((-1 < iStack_30) && (iStack_30 < 10)) {
            uVar10 = 0xdea;
            func_0x0000edda();
            *(int *)0xb611 = iStack_30 + 0x30;
          }
        }
      }
      iVar1 = *(int *)0xb611;
      if (iVar1 == 0x1b) {
        return 2;
      }
      if (0x1b < iVar1) break;
      if ((iVar1 == 0xd) && (0 < *(int *)0xb60f)) {
        if (*(int *)0xb60f == 9) {
          if (*(char *)((int)*(undefined4 *)0x9f18 + 4) == ':') {
            uVar10 = 0xdea;
            func_0x0000edda();
          }
          else {
            func_0x0000edda();
            uVar10 = 0;
            func_0x00000230();
          }
        }
        else if (*(int *)0xb60f != 8) {
          if (*(int *)0xb60f < 3) {
            func_0x0000edda();
          }
          else if (*(int *)0xb60f < 8) {
            func_0x0000edda();
          }
          else if ((*(int *)0xb60f == 10) || (*(int *)0xb60f == 0xb)) {
            func_0x0000edda();
          }
          uVar10 = 0;
          func_0x00000230();
        }
        *(undefined2 *)0x9bb2 = 1;
      }
LAB_2000_f739:
      if (*(int *)0xb60f != iVar6) {
        if (iVar6 == 9) {
          iVar6 = func_0x00000672();
          if (iVar6 != 0) {
            func_0x0000edda();
          }
          uVar10 = 0;
          puStack_e = (undefined1 *)0xf768;
          func_0x00000614();
        }
        *(undefined2 *)0x9bb2 = 0;
        *(undefined2 *)0x9bb4 = 0;
        *(undefined2 *)0x9bba = 0;
      }
      puStack_e = (undefined1 *)0xf781;
      FUN_2000_f938();
    }
    if (iVar1 < 0x30) goto LAB_2000_f739;
    if (iVar1 == 0x39 || iVar1 + -0x30 < 9) {
      if (*(char *)0x9bb9 == '\0') {
        *(undefined2 *)0xb60f = 8;
        puVar5 = (undefined2 *)func_0x00000b20();
        puVar9 = &local_2a;
        for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar3 = *puVar2;
        }
        iStack_30 = *(int *)0xb611 + -0x31;
        if (iStack_30 == -1) {
          iStack_30 = 10;
        }
        *(int *)0xb60b = (iStack_30 % 3) * 0xb + 0xc5;
        *(int *)0xb60d = (iStack_30 / 3) * 8 + 0x5b;
        for (iStack_30 = 0; iStack_30 < 4; iStack_30 = iStack_30 + 1) {
          uVar10 = (undefined2)((ulong)*(undefined4 *)0x9f18 >> 0x10);
          iVar6 = (int)*(undefined4 *)0x9f18 + iStack_30;
          *(undefined1 *)(iVar6 + 4) = *(undefined1 *)(iVar6 + 5);
        }
        *(undefined1 *)((int)*(undefined4 *)0x9f18 + 8) = *(undefined1 *)0xb611;
        func_0x000135e2();
        uStack_10 = 0x1351;
        for (iStack_30 = 0; iStack_30 < 5; iStack_30 = iStack_30 + 1) {
          puStack_e = (undefined1 *)0x0;
          uStack_12 = 0xf5e1;
          func_0x0001077a();
          uStack_10 = 0x106a;
        }
        pcVar4 = (char *)*(undefined4 *)0x9f18;
        uVar10 = (undefined2)((ulong)pcVar4 >> 0x10);
        pcVar8 = (char *)pcVar4;
        uVar7 = *pcVar4 * 0x421 ^
                *(uint *)((((int)*pcVar4 ^ *(uint *)(pcVar8 + 2)) % 0x13) * 2 + 0x4ba8) ^
                *(uint *)(pcVar8 + 2);
        pcVar8[9] = '\0';
        puStack_e = local_3a;
        uStack_12 = 0xf629;
        func_0x00003d8c();
        uVar11 = func_0x00002ea2();
        *(bool *)0x9bb9 = uVar11 == CONCAT12(CARRY2(uVar7 >> 1,uVar7),(uVar7 >> 1) + uVar7);
        puStack_e = (undefined1 *)0x1;
        uStack_10 = 0xbf;
        uStack_12 = 0xf662;
        func_0x0001077a();
        func_0x000135fc();
        puStack_e = (undefined1 *)uStack_22;
        uStack_10 = uStack_24;
        uStack_12 = uStack_26;
        uStack_14 = uStack_28;
        uStack_16 = 0x880;
        uStack_18 = 0x1351;
        uVar10 = 0x1658;
        uStack_1a = 0xf687;
        func_0x00016658();
      }
    }
    else {
      if (iVar1 != 0x110) goto LAB_2000_f739;
      uVar10 = 0xdea;
      func_0x0000ed38();
    }
  } while( true );
}
