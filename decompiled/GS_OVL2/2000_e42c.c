/* GS.GS2 2000:e42c undefined FUN_2000_e42c(void) */
void __cdecl16far FUN_2000_e42c(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  int iStackY_14;
  int local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int *piStack_8;
  
  func_0x00000eb0();
  piStack_8 = (int *)0x2;
  uStack_a = 0x401d;
  uStack_c = 0xbf;
  local_e = -0x1bbe;
  FUN_2000_eda8();
  uStack_a = 0xbf;
  for (iStackY_14 = 0; iStackY_14 <= *(int *)0xbc3e; iStackY_14 = iStackY_14 + 1) {
    piStack_8 = (int *)iStackY_14;
    uVar7 = 0x1634;
    uStack_c = 0xe45e;
    piStack_8 = (int *)func_0x00016544();
    if (-1 < (int)piStack_8) {
      uStack_a = 0x1634;
      uVar7 = 0x1163;
      uStack_c = 0xe46e;
      iVar2 = func_0x00012a9a();
      if (iVar2 != 0) {
        iVar2 = (int)piStack_8 * 0xd6 + *(int *)0xbc38;
        if (*(char *)(iVar2 + 1) != '\0') {
          uStack_a = 0x1d50;
          uStack_c = 0xb12;
          iStackY_14 = 0x1163;
          local_e = (int)piStack_8;
          piStack_8 = &local_e;
          FUN_2000_ec42(iVar2 + 0x1a,*(undefined2 *)0xbc3a);
        }
      }
    }
    uStack_a = uVar7;
  }
  iVar2 = 0;
  uVar7 = uStack_a;
  for (iStackY_14 = 0; uStack_a = uVar7, iStackY_14 <= *(int *)0xbc3e; iStackY_14 = iStackY_14 + 1)
  {
    piStack_8 = (int *)iStackY_14;
    uVar7 = 0x1634;
    uStack_c = 0xe4e1;
    iVar3 = func_0x00016544();
    if (-1 < iVar3) {
      iVar4 = iVar3 * 0xd6;
      piStack_8 = (int *)(int)*(char *)(iVar4 + (int)*(undefined4 *)0xbc38);
      uStack_a = 0x1634;
      uVar7 = 0x1581;
      uStack_c = 0xe502;
      iVar5 = func_0x00015c32();
      if ((iVar5 != 0) && (*(char *)((int)*(undefined4 *)0xbc38 + iVar4 + 1) == '\0')) {
        if (iVar2 == 0) {
          piStack_8 = (int *)0x1;
          uStack_a = 0x1581;
          uStack_c = 0xe525;
          FUN_2000_ee40();
          piStack_8 = (int *)0x2;
          uStack_a = 0x402c;
          uStack_c = 0x1581;
          local_e = -0x1acf;
          FUN_2000_eda8();
        }
        piStack_8 = &local_e;
        uStack_a = 0x1d50;
        uStack_c = 0xb12;
        iVar2 = iVar3 * 0xd6 + *(int *)0xbc38 + 0x1a;
        iStackY_14 = 0x1581;
        local_e = iVar3;
        FUN_2000_ec42(iVar2,*(undefined2 *)0xbc3a);
      }
    }
  }
  piStack_8 = (int *)0x1;
  uStack_c = 0xe58c;
  FUN_2000_ee40();
  piStack_8 = (int *)0x2;
  uStack_a = 0x4037;
  local_e = -0x1a68;
  uStack_c = uVar7;
  FUN_2000_eda8();
  iStackY_14 = 0;
  do {
    if (2 < iStackY_14) {
LAB_2000_e5d2:
      piStack_8 = (int *)0x3db6;
      uStack_a = 0x1d50;
      uStack_c = 0x8aa;
      local_e = 0;
      FUN_2000_ec42(0x404e);
      for (iStackY_14 = 0; uStack_a = uVar7, iStackY_14 <= *(int *)0xbc3e;
          iStackY_14 = iStackY_14 + 1) {
        piStack_8 = (int *)iStackY_14;
        uVar7 = 0x1634;
        uStack_c = 0xe605;
        iVar2 = func_0x00016544();
        if (-1 < iVar2) {
          iVar5 = iVar2 * 0xd6;
          piStack_8 = (int *)(int)*(char *)(iVar5 + (int)*(undefined4 *)0xbc38);
          uStack_a = 0x1634;
          uVar7 = 0x1581;
          uStack_c = 0xe626;
          iVar3 = func_0x00015d78();
          if (iVar3 != 0) {
            pcVar6 = (char *)(iVar5 + *(int *)0xbc38);
            uVar1 = *(undefined2 *)0xbc3a;
            if ((pcVar6[5] & 0x40U) == 0) {
              piStack_8 = &local_e;
              uStack_a = 0x1d50;
              uStack_c = 0xd1e;
              iStackY_14 = 0x1581;
              local_e = iVar2;
              FUN_2000_ec42(iVar2 * 0xd6 + *(int *)0xbc38 + 0x1a,uVar1);
            }
            else {
              piStack_8 = &local_e;
              uStack_a = 0x1d50;
              uStack_c = 0x11ec;
              local_e = (int)*pcVar6;
              uVar7 = 0x1581;
              local_e = func_0x00015d38(0x1581);
              local_e = local_e + 1;
              iStackY_14 = 0x1581;
              FUN_2000_ec42(pcVar6 + 0x1a,uVar1);
            }
          }
        }
      }
      piStack_8 = (int *)0x2;
      uStack_c = 0xe6da;
      FUN_2000_ee40();
      piStack_8 = (int *)0x3d9e;
      uStack_c = 0xe6e4;
      uStack_a = uVar7;
      FUN_2000_ef58();
      return;
    }
    if (*(int *)(iStackY_14 * 2 + -0x65a0) != 0) {
      piStack_8 = (int *)&SUB_0000_3dc2;
      uStack_a = 0x1d50;
      uStack_c = 0x9c6;
      local_e = 0;
      FUN_2000_ec42(0x403f);
      goto LAB_2000_e5d2;
    }
    iStackY_14 = iStackY_14 + 1;
  } while( true );
}
