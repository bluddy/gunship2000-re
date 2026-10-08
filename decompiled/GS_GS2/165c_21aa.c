/* GS.GS2 165c:21aa undefined FUN_165c_21aa(void) */
void __cdecl16far FUN_165c_21aa(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char unaff_SI;
  char *pcVar4;
  undefined2 unaff_DS;
  int iStack_1c;
  int iStack_1a;
  char local_18 [2];
  int iStack_16;
  undefined1 local_14 [4];
  undefined2 uStack_10;
  undefined2 uStack_e;
  char *pcStack_c;
  int iStack_a;
  char *pcStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0x8775;
  FUN_10bf_02c0();
  *(undefined1 *)0x7a26 = 1;
  if (*(char *)0xad1b == '\x04') {
    pcStack_6 = local_14;
    pcStack_8 = (char *)0x10bf;
    iStack_a = 0x878e;
    FUN_1b1d_0220();
    pcStack_6 = (char *)0x1ea;
    pcStack_8 = local_14;
    iStack_a = 0x1b1d;
    pcStack_c = (char *)0x879d;
    iStack_16 = FUN_10bf_06dc();
    if (iStack_16 != 0) {
      pcStack_8 = (char *)0x1;
      iStack_a = 1;
      pcStack_c = local_18;
      uStack_e = 0x10bf;
      uStack_10 = 0x87b5;
      pcStack_6 = (char *)iStack_16;
      iVar2 = FUN_10bf_072a();
      if (iVar2 != 0) {
        pcStack_6 = (char *)iStack_16;
        pcStack_8 = (char *)0x1;
        iStack_a = 1;
        pcStack_c = &stack0xfffc;
        uStack_e = 0x10bf;
        uStack_10 = 0x87cc;
        FUN_10bf_072a();
        pcStack_6 = (char *)iStack_16;
        pcStack_8 = (char *)(int)unaff_SI;
        iStack_a = 0x20;
        pcStack_c = (char *)(*(int *)0xaca4 * 0x20 + -0x5d80);
        uStack_e = 0x10bf;
        uStack_10 = 0x87e8;
        FUN_10bf_072a();
        pcStack_8 = (char *)(int)unaff_SI;
        *(int *)0xaca4 = *(int *)0xaca4 + (int)pcStack_8;
        pcStack_6 = (char *)iStack_16;
        iStack_a = 1;
        pcStack_c = (char *)(*(int *)0xaca4 + -0x4794);
        uStack_e = 0x10bf;
        uStack_10 = 0x8805;
        FUN_10bf_072a();
        pcStack_6 = (char *)iStack_16;
        pcStack_8 = (char *)0x10bf;
        iStack_a = 0x8810;
        FUN_10bf_05f6();
        return;
      }
      pcStack_6 = (char *)iStack_16;
      pcStack_8 = (char *)0x10bf;
      iStack_a = 0x881e;
      FUN_10bf_05f6();
    }
  }
  local_18[0] = *(char *)0xaca4;
  iStack_1a = 0;
  iStack_1c = 0;
  pcStack_8 = (char *)0x10bf;
  do {
    if (*(int *)0xb8c8 <= iStack_1a) {
      if (*(char *)0xad1b == '\x04') {
        pcStack_6 = local_14;
        iStack_a = 0x88bd;
        FUN_1b1d_0220();
        pcStack_6 = (char *)0x1ed;
        pcStack_8 = local_14;
        iStack_a = 0x1b1d;
        pcStack_c = (char *)0x88cc;
        iStack_16 = FUN_10bf_06dc();
        if (iStack_16 != 0) {
          cVar3 = *(char *)0xaca4 - local_18[0];
          pcStack_8 = (char *)0x1;
          iStack_a = 1;
          pcStack_c = local_18;
          uStack_e = 0x10bf;
          uStack_10 = 0x88ee;
          pcStack_6 = (char *)iStack_16;
          FUN_10bf_0828();
          pcStack_6 = (char *)iStack_16;
          pcStack_8 = (char *)0x1;
          iStack_a = 1;
          pcStack_c = &stack0xfffc;
          uStack_e = 0x10bf;
          uStack_10 = 0x8901;
          FUN_10bf_0828();
          pcStack_6 = (char *)iStack_16;
          pcStack_8 = (char *)(int)cVar3;
          iStack_a = 0x20;
          pcStack_c = (char *)(local_18[0] * 0x20 + -0x5d80);
          uStack_e = 0x10bf;
          uStack_10 = 0x891e;
          FUN_10bf_0828();
          pcStack_6 = (char *)iStack_16;
          pcStack_8 = (char *)(int)cVar3;
          iStack_a = 1;
          pcStack_c = (char *)(local_18[0] + -0x4794);
          uStack_e = 0x10bf;
          uStack_10 = 0x8938;
          FUN_10bf_0828();
          pcStack_6 = (char *)iStack_16;
          pcStack_8 = (char *)0x10bf;
          iStack_a = 0x8943;
          FUN_10bf_05f6();
        }
      }
      return;
    }
    uVar1 = *(uint *)((int)*(undefined4 *)0xb860 + iStack_1a * 0x27 + 0x23);
    pcVar4 = pcStack_8;
    if ((uVar1 & 0x4000) == 0) {
      if ((iStack_1c < 10) && ((uVar1 & 0x8000) != 0)) {
        if (*(char *)0xe282 == '\x01') {
          pcStack_6 = (char *)0x2;
        }
        else {
          pcStack_6 = (char *)0x5;
        }
        pcVar4 = (char *)0x239c;
        iStack_a = 0x8871;
        iVar2 = FUN_239c_0086();
        if (iVar2 == 0) goto LAB_165c_22b8;
      }
    }
    else {
LAB_165c_22b8:
      iStack_1c = iStack_1c +
                  (uint)((*(byte *)((int)*(undefined4 *)0xb860 + iStack_1a * 0x27 + 0x24) & 0x80) !=
                        0);
      *(undefined1 *)0xe279 = 0xff;
      pcStack_6 = (char *)0x0;
      pcStack_8 = (char *)0x0;
      iStack_a = iStack_1a;
      uStack_e = 0x88a0;
      pcStack_c = pcVar4;
      FUN_165c_1242();
      pcStack_8 = (char *)0x88a7;
      pcStack_6 = pcVar4;
      FUN_165c_1ad4();
    }
    iStack_1a = iStack_1a + 1;
    pcStack_8 = pcVar4;
  } while( true );
}
