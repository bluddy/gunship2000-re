/* GS.GS2 2000:d114 undefined FUN_2000_d114(void) */
int __cdecl16far FUN_2000_d114(int *param_1,int *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  byte bStack_26;
  char cStack_24;
  undefined2 local_22;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  char cStack_1c;
  int iStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 local_12;
  int iStack_10;
  int *piStack_e;
  int *piStack_c;
  undefined2 *puStack_a;
  undefined2 *puStack_8;
  
  func_0x00000eb0();
  iStack_1a = 0x4b;
  bStack_26 = 0xff;
  local_22 = *(undefined2 *)0x27aa;
  uStack_20 = *(undefined2 *)0x27ac;
  uStack_1e = *(undefined1 *)0x27ae;
  local_18 = *(undefined2 *)0x27af;
  uStack_16 = *(undefined2 *)0x27b1;
  uStack_14 = *(undefined2 *)0x27b3;
  local_12 = *(undefined2 *)0x27b5;
  iStack_10 = *(undefined2 *)0x27b7;
  piStack_e = (int *)*(undefined2 *)0x27b9;
  cStack_24 = '\x1e';
  uVar1 = *(undefined2 *)0x2ac0;
  uVar2 = *(undefined2 *)0x2ac9;
  puStack_8 = (undefined2 *)0x6;
  puStack_a = (undefined2 *)0xbf;
  piStack_c = (int *)0xd16d;
  func_0x00020fbc();
  cStack_1c = -1;
  *(undefined1 *)0xe291 = 0xff;
  *(undefined1 *)0xe28f = 0;
  puStack_8 = (undefined2 *)0x27bc;
  puStack_a = (undefined2 *)0x20f4;
  piStack_c = (int *)0xd185;
  func_0x000281de();
  *(undefined1 *)0x2ad6 = 0xff;
  *(undefined1 *)0x2acd = 0xff;
  *(undefined1 *)0x2ac4 = 0xff;
  puStack_8 = (undefined2 *)0x2;
  puStack_a = (undefined2 *)0x20f4;
  piStack_c = (int *)0xd19a;
  func_0x0000c980();
  puStack_8 = (undefined2 *)0x8;
  puStack_a = (undefined2 *)0xc87;
  uVar4 = 0xc87;
  piStack_c = (int *)0xd1a4;
  func_0x0000c928();
  if (*(char *)0x2b98 < '\0') {
    cStack_1c = '\0';
    puStack_8 = (undefined2 *)0x27d1;
    puStack_a = (undefined2 *)0xff;
    piStack_c = (int *)0x4b;
    piStack_e = (int *)0xc87;
    uVar4 = 0x20f4;
    iStack_10 = 0xd1bf;
    func_0x000282bc();
    iStack_1a = 0x55;
    bStack_26 = 0xfd;
  }
  uVar5 = uVar4;
  if (*(int *)0xc4d8 == 9999) {
    cStack_1c = '\0';
    puStack_8 = (undefined2 *)0x27f4;
    puStack_a = (undefined2 *)(uint)bStack_26;
    piStack_c = (int *)iStack_1a;
    uVar5 = 0x20f4;
    iStack_10 = 0xd1e8;
    piStack_e = (int *)uVar4;
    func_0x000282bc();
    iStack_1a = iStack_1a + 10;
    bStack_26 = bStack_26 - 2;
  }
  if ((*(int *)0xc4f6 == 9999) || ((uVar4 = uVar5, *(int *)0xc375 < 3 && (*(int *)0xc368 == 9999))))
  {
    cStack_1c = '\0';
    puStack_8 = (undefined2 *)0x2817;
    puStack_a = (undefined2 *)(uint)bStack_26;
    piStack_c = (int *)iStack_1a;
    uVar4 = 0x20f4;
    iStack_10 = 0xd21f;
    piStack_e = (int *)uVar5;
    func_0x000282bc();
    iStack_1a = iStack_1a + 10;
    bStack_26 = bStack_26 - 2;
  }
  if ((*(int *)0xc50a == 9999) || ((uVar5 = uVar4, *(int *)0xbc7d < 3 && (*(int *)0xbc70 == 9999))))
  {
    cStack_1c = '\0';
    puStack_8 = (undefined2 *)0x283b;
    puStack_a = (undefined2 *)(uint)bStack_26;
    piStack_c = (int *)iStack_1a;
    uVar5 = 0x20f4;
    iStack_10 = 0xd256;
    piStack_e = (int *)uVar4;
    func_0x000282bc();
    iStack_1a = iStack_1a + 10;
    bStack_26 = bStack_26 - 1;
  }
  uVar4 = uVar5;
  if (*(int *)0xc4e6 == 9999) {
    puStack_8 = (undefined2 *)0x2861;
    puStack_a = (undefined2 *)(uint)bStack_26;
    piStack_c = (int *)iStack_1a;
    uVar4 = 0x20f4;
    iStack_10 = 0xd279;
    piStack_e = (int *)uVar5;
    func_0x000282bc();
    iStack_1a = iStack_1a + 10;
  }
  uVar5 = uVar4;
  if (cStack_1c != '\0') {
    *(int *)0x2abc = *(int *)0x2abc + -6;
    *(int *)0x2ac0 = *(int *)0x2ac0 + -0xc;
    *(int *)0x2ac5 = *(int *)0x2ac5 + 0x12;
    *(int *)0x2ac9 = *(int *)0x2ac9 + -0xc;
    puStack_8 = (undefined2 *)0x2ace;
    uVar5 = 0x20f4;
    piStack_c = (int *)0xd2a2;
    puStack_a = (undefined2 *)uVar4;
    func_0x000214fc();
    cStack_24 = '\x1f';
  }
  puStack_8 = (undefined2 *)0x2abc;
  piStack_c = (int *)0xd2b0;
  puStack_a = (undefined2 *)uVar5;
  func_0x000214fc();
  puStack_8 = (undefined2 *)0x2ac5;
  puStack_a = (undefined2 *)0x20f4;
  piStack_c = (int *)0xd2bb;
  func_0x000214fc();
  puStack_8 = (undefined2 *)0x3;
  puStack_a = (undefined2 *)0x20f4;
  piStack_c = (int *)0xd2c5;
  func_0x0000c980();
  puStack_8 = (undefined2 *)0xffff;
  puStack_a = (undefined2 *)0x8;
  piStack_c = (int *)0xa0;
  piStack_e = (int *)0x7c;
  iStack_10 = 0x52;
  local_12 = 0x880;
  uStack_14 = 0xc87;
  uStack_16 = 0xd2db;
  func_0x0000c8c0();
  if (cStack_1c == '\0') {
    puStack_8 = (undefined2 *)0x44;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd41d;
    func_0x0000c928();
    puStack_8 = (undefined2 *)0x28b5;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd428;
    func_0x0000c8aa();
    puStack_8 = (undefined2 *)0x5;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd432;
    func_0x0000c980();
    puStack_8 = (undefined2 *)0x4;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd43c;
    func_0x0000c928();
    puStack_8 = (undefined2 *)0xffff;
    puStack_a = (undefined2 *)*(undefined2 *)0x2ac2;
    piStack_c = (int *)*(undefined2 *)0x2ac0;
    piStack_e = (int *)0x8a;
    iStack_10 = *(int *)0x2abc + 2;
    local_12 = 0x880;
    uStack_14 = 0xc87;
    uStack_16 = 0xd45a;
    func_0x0000c8c0();
    puStack_8 = &local_18;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd466;
    func_0x0000c8aa();
    puStack_8 = (undefined2 *)0xffff;
    puStack_a = (undefined2 *)*(undefined2 *)0x2acb;
    piStack_c = (int *)*(undefined2 *)0x2ac9;
    piStack_e = (int *)0x8a;
    iStack_10 = *(int *)0x2ac5 + 2;
    local_12 = 0x880;
    uStack_14 = 0xc87;
    uStack_16 = 0xd484;
    func_0x0000c8c0();
    puStack_8 = &local_12;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd490;
    func_0x0000c8aa();
    puStack_8 = (undefined2 *)0xffff;
    puStack_a = (undefined2 *)0xc8;
    piStack_c = (int *)0x140;
    piStack_e = (int *)0x0;
    iStack_10 = 0;
    local_12 = 0x880;
    uStack_14 = 0xc87;
    uStack_16 = 0xd4a7;
    func_0x0000c8c0();
    puStack_8 = (undefined2 *)0x44;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd4b1;
    func_0x0000c928();
    puStack_8 = (undefined2 *)(*(int *)0x2abe + 4);
    puStack_a = (undefined2 *)(*(int *)0x2abc + 0xc);
    piStack_c = (int *)0xc87;
    piStack_e = (int *)0xd4c7;
    func_0x0000c9f6();
    puStack_8 = (undefined2 *)0x28e0;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd4d2;
    func_0x0000ca50();
    puStack_8 = (undefined2 *)(*(int *)0x2ac7 + 4);
    puStack_a = (undefined2 *)(*(int *)0x2ac5 + 10);
    piStack_c = (int *)0xc87;
    piStack_e = (int *)0xd4e8;
    func_0x0000c9f6();
    puStack_8 = (undefined2 *)0x28e2;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd4f3;
    func_0x0000ca50();
  }
  else {
    puStack_8 = (undefined2 *)0xa;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd2ee;
    func_0x0000c928();
    puStack_8 = (undefined2 *)0x2883;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd2f9;
    func_0x0000c8aa();
    puStack_8 = (undefined2 *)0x5;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd303;
    func_0x0000c980();
    puStack_8 = (undefined2 *)0x4;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd30d;
    func_0x0000c928();
    puStack_8 = (undefined2 *)0xffff;
    puStack_a = (undefined2 *)*(undefined2 *)0x2ac2;
    piStack_c = (int *)*(undefined2 *)0x2ac0;
    piStack_e = (int *)0x8a;
    iStack_10 = *(int *)0x2abc + 2;
    local_12 = 0x880;
    uStack_14 = 0xc87;
    uStack_16 = 0xd32b;
    func_0x0000c8c0();
    puStack_8 = &local_22;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd337;
    func_0x0000c8aa();
    puStack_8 = (undefined2 *)0xffff;
    puStack_a = (undefined2 *)*(undefined2 *)0x2acb;
    piStack_c = (int *)*(undefined2 *)0x2ac9;
    piStack_e = (int *)0x8a;
    iStack_10 = *(int *)0x2ac5 + 2;
    local_12 = 0x880;
    uStack_14 = 0xc87;
    uStack_16 = 0xd355;
    func_0x0000c8c0();
    puStack_8 = &local_12;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd361;
    func_0x0000c8aa();
    puStack_8 = (undefined2 *)0xffff;
    puStack_a = (undefined2 *)*(undefined2 *)0x2ad4;
    piStack_c = (int *)*(undefined2 *)0x2ad2;
    piStack_e = (int *)0x8a;
    iStack_10 = *(int *)0x2ace + 2;
    local_12 = 0x880;
    uStack_14 = 0xc87;
    uStack_16 = 0xd37f;
    func_0x0000c8c0();
    puStack_8 = &local_18;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd38b;
    func_0x0000c8aa();
    puStack_8 = (undefined2 *)0xffff;
    puStack_a = (undefined2 *)0xc8;
    piStack_c = (int *)0x140;
    piStack_e = (int *)0x0;
    iStack_10 = 0;
    local_12 = 0x880;
    uStack_14 = 0xc87;
    uStack_16 = 0xd3a2;
    func_0x0000c8c0();
    puStack_8 = (undefined2 *)0x44;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd3ac;
    func_0x0000c928();
    puStack_8 = (undefined2 *)(*(int *)0x2abe + 4);
    puStack_a = (undefined2 *)(*(int *)0x2abc + 10);
    piStack_c = (int *)0xc87;
    piStack_e = (int *)0xd3c2;
    func_0x0000c9f6();
    puStack_8 = (undefined2 *)0x28af;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd3cd;
    func_0x0000ca50();
    puStack_8 = (undefined2 *)(*(int *)0x2ac7 + 4);
    puStack_a = (undefined2 *)(*(int *)0x2ac5 + 4);
    piStack_c = (int *)0xc87;
    piStack_e = (int *)0xd3e3;
    func_0x0000c9f6();
    puStack_8 = (undefined2 *)0x28b1;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd3ee;
    func_0x0000ca50();
    puStack_8 = (undefined2 *)(*(int *)0x2ad0 + 4);
    puStack_a = (undefined2 *)(*(int *)0x2ace + 6);
    piStack_c = (int *)0xc87;
    piStack_e = (int *)0xd404;
    func_0x0000c9f6();
    puStack_8 = (undefined2 *)0x28b3;
    puStack_a = (undefined2 *)0xc87;
    piStack_c = (int *)0xd40f;
    func_0x0000ca50();
  }
  puStack_8 = (undefined2 *)0x3;
  puStack_a = (undefined2 *)0xc87;
  piStack_c = (int *)0xd4fd;
  func_0x0000c980();
  puStack_8 = (undefined2 *)0xc87;
  puStack_a = (undefined2 *)0xd505;
  func_0x00021008();
  puStack_8 = param_4;
  puStack_a = param_3;
  piStack_c = param_2;
  piStack_e = param_1;
  iStack_10 = 0x20f4;
  local_12 = 0xd516;
  func_0x000210a4();
  *param_2 = 0;
LAB_2000_d520:
  if ((*param_2 == 0) && (*param_1 == 0)) {
LAB_2000_d6f0:
    puStack_8 = param_4;
    puStack_a = param_3;
    piStack_c = param_2;
    piStack_e = param_1;
    iStack_10 = 0x20f4;
    local_12 = 0xd700;
    FUN_2000_afe8();
    puStack_8 = (undefined2 *)0x20f4;
    puStack_a = (undefined2 *)0xd708;
    func_0x00021070();
    *(undefined2 *)(*(int *)0xc358 + 1) = *param_3;
    *(undefined2 *)(*(int *)0xc358 + 3) = *param_4;
    puStack_8 = (undefined2 *)0x20f4;
    puStack_a = (undefined2 *)0xd725;
    func_0x000210f2();
    goto LAB_2000_d520;
  }
  if (*param_2 == 0) {
LAB_2000_d561:
    if ((int)cStack_24 != *param_1) {
      if (*param_2 == 0) {
LAB_2000_d60c:
        if ((*param_1 != 1) && (*param_1 != 0x12)) {
          if (cStack_1c != '\0') {
            if (*param_2 != 0) {
              puStack_8 = (undefined2 *)*(undefined2 *)0x2ad4;
              puStack_a = (undefined2 *)*(undefined2 *)0x2ad2;
              piStack_c = (int *)*(undefined2 *)0x2ad0;
              piStack_e = (int *)*(undefined2 *)0x2ace;
              iStack_10 = *param_4;
              local_12 = *param_3;
              uStack_14 = 0x20f4;
              uStack_16 = 0xd678;
              iVar3 = func_0x0002118e();
              if (iVar3 != 0) {
LAB_2000_d687:
                puStack_8 = (undefined2 *)0x2ace;
                puStack_a = (undefined2 *)0x20f4;
                piStack_c = (int *)0xd68f;
                func_0x000214fc();
                puStack_8 = (undefined2 *)0x20f4;
                puStack_a = (undefined2 *)0xd697;
                func_0x00021008();
                puStack_8 = param_4;
                puStack_a = param_3;
                piStack_c = param_2;
                piStack_e = param_1;
                iStack_10 = 0x20f4;
                local_12 = 0xd6a8;
                func_0x000210a4();
                *(undefined2 *)0x2abc = puStack_8;
                *(undefined2 *)0x2ac0 = uVar1;
                *(undefined2 *)0x2ac5 = puStack_a;
                *(undefined2 *)0x2ac9 = uVar2;
                cStack_1c = '\0';
                puStack_8 = (undefined2 *)0x20f4;
                puStack_a = (undefined2 *)0xd6cc;
                iVar3 = func_0x000283f2();
                if (iVar3 != 0) {
                  *(undefined1 *)0xe28a = 2;
                }
                *param_3 = *(undefined2 *)(*(int *)0xc358 + 1);
                *param_4 = *(undefined2 *)(*(int *)0xc358 + 3);
LAB_2000_d728:
                puStack_8 = (undefined2 *)0x20f4;
                puStack_a = (undefined2 *)0xd72d;
                func_0x00020fe2();
                *(undefined1 *)0xe291 = 0;
                *(undefined1 *)0xe28f = 1;
                *(undefined1 *)0x2a69 = 0xff;
                puStack_8 = (undefined2 *)0x2a61;
                puStack_a = (undefined2 *)0x20f4;
                piStack_c = (int *)0xd744;
                func_0x000214fc();
                puStack_8 = param_4;
                puStack_a = param_3;
                piStack_c = param_2;
                piStack_e = param_1;
                iStack_10 = 0x20f4;
                local_12 = 0xd758;
                func_0x000210a4();
                *param_1 = 0;
                puStack_8 = (undefined2 *)0x20f4;
                puStack_a = (undefined2 *)0xd767;
                func_0x000219cc();
                *(undefined2 *)0x2abc = puStack_8;
                *(undefined2 *)0x2ac0 = uVar1;
                *(undefined2 *)0x2ac5 = puStack_a;
                *(undefined2 *)0x2ac9 = uVar2;
                return (int)cStack_1c;
              }
            }
            if (*param_1 != 0x1e) goto LAB_2000_d6f0;
            goto LAB_2000_d687;
          }
          goto LAB_2000_d6f0;
        }
      }
      else {
        puStack_8 = (undefined2 *)*(undefined2 *)0x2acb;
        puStack_a = (undefined2 *)*(undefined2 *)0x2ac9;
        piStack_c = (int *)*(undefined2 *)0x2ac7;
        piStack_e = (int *)*(undefined2 *)0x2ac5;
        iStack_10 = *param_4;
        local_12 = *param_3;
        uStack_14 = 0x20f4;
        uStack_16 = 0xd605;
        iVar3 = func_0x0002118e();
        if (iVar3 == 0) goto LAB_2000_d60c;
      }
      puStack_8 = (undefined2 *)0x2ac5;
      puStack_a = (undefined2 *)0x20f4;
      piStack_c = (int *)0xd621;
      func_0x000214fc();
      cStack_1c = '\0';
      puStack_8 = (undefined2 *)0x20f4;
      puStack_a = (undefined2 *)0xd62d;
      func_0x00021008();
      puStack_8 = param_4;
      puStack_a = param_3;
      piStack_c = param_2;
      piStack_e = param_1;
      iStack_10 = 0x20f4;
      local_12 = 0xd63e;
      func_0x000210a4();
      goto LAB_2000_d728;
    }
  }
  else {
    puStack_8 = (undefined2 *)*(undefined2 *)0x2ac2;
    puStack_a = (undefined2 *)*(undefined2 *)0x2ac0;
    piStack_c = (int *)*(undefined2 *)0x2abe;
    piStack_e = (int *)*(undefined2 *)0x2abc;
    iStack_10 = *param_4;
    local_12 = *param_3;
    uStack_14 = 0x20f4;
    uStack_16 = 0xd55a;
    iVar3 = func_0x0002118e();
    if (iVar3 == 0) goto LAB_2000_d561;
  }
  puStack_8 = (undefined2 *)0x2abc;
  puStack_a = (undefined2 *)0x20f4;
  piStack_c = (int *)0xd574;
  func_0x000214fc();
  puStack_8 = (undefined2 *)0x20f4;
  puStack_a = (undefined2 *)0xd57c;
  func_0x00021008();
  puStack_8 = param_4;
  puStack_a = param_3;
  piStack_c = param_2;
  piStack_e = param_1;
  iStack_10 = 0x20f4;
  local_12 = 0xd58d;
  func_0x000210a4();
  *(undefined2 *)0x2abc = puStack_8;
  *(undefined2 *)0x2ac0 = uVar1;
  *(undefined2 *)0x2ac5 = puStack_a;
  *(undefined2 *)0x2ac9 = uVar2;
  if (cStack_1c == '\0') {
    puStack_8 = (undefined2 *)0x20f4;
    puStack_a = (undefined2 *)0xd5b3;
    iVar3 = func_0x000283f2();
    if (iVar3 != 0) {
      cStack_1c = '\0';
      *(undefined1 *)0xe28a = 2;
    }
  }
  *param_3 = *(undefined2 *)(*(int *)0xc358 + 1);
  *param_4 = *(undefined2 *)(*(int *)0xc358 + 3);
  goto LAB_2000_d728;
}
