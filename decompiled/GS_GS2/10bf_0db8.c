/* GS.GS2 10bf:0db8 undefined FUN_10bf_0db8(void) */
int __cdecl16far FUN_10bf_0db8(byte **param_1,byte **param_2,undefined2 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte **ppbVar4;
  byte bVar5;
  byte **ppbVar6;
  uint uVar7;
  undefined1 uVar8;
  byte **unaff_SI;
  undefined2 unaff_DS;
  bool bVar9;
  char cStack_1ae;
  byte *pbStack_1ac;
  undefined1 local_1a8;
  byte *local_1a7 [174];
  byte bStack_4a;
  char cStack_48;
  int iStack_46;
  byte **ppbStack_44;
  char cStack_42;
  byte bStack_40;
  byte *local_3e;
  byte *pbStack_3c;
  int iStack_3a;
  byte local_38 [11];
  undefined1 uStack_2d;
  byte *local_18;
  int iStack_16;
  byte *pbStack_14;
  uint uStack_12;
  undefined2 uStack_10;
  uint uStack_e;
  byte **ppbStack_c;
  byte **ppbStack_a;
  byte **ppbStack_8;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  _ppbStack_8 = (byte **)CONCAT22(0x19b3,ppbStack_8);
  FUN_10bf_02c0();
  _ppbStack_8 = (byte **)CONCAT22(unaff_SI,ppbStack_8);
  cStack_48 = '\0';
  local_18 = (byte *)0x0;
  iStack_3a = 0;
  do {
    if (*(byte *)param_2 == 0) break;
    if ((*(byte *)(*(byte *)param_2 + 0x6a97) & 8) != 0) {
      local_18 = local_18 + -1;
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      ppbStack_a = param_1;
      ppbStack_c = (byte **)0x19e4;
      ppbStack_8 = &local_18;
      ppbVar6 = (byte **)FUN_10bf_156e();
      _ppbStack_8 = (byte **)CONCAT22(uVar10,ppbVar6);
      ppbStack_a = param_1;
      ppbStack_c = (byte **)0x19eb;
      FUN_10bf_1554();
      do {
        param_2 = (byte **)((int)param_2 + 1);
      } while ((*(byte *)(*(byte *)param_2 + 0x6a97) & 8) != 0);
    }
    if (*(byte *)param_2 != 0x25) {
      local_18 = local_18 + 1;
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
      ppbStack_a = (byte **)0x20c1;
      unaff_SI = (byte **)FUN_10bf_1528();
      if (unaff_SI != (byte **)(uint)*(byte *)param_2) goto LAB_10bf_1455;
      goto LAB_10bf_14e4;
    }
    bStack_40 = 0;
    cStack_42 = '\0';
    bStack_4a = 0;
    uStack_e = uStack_e & 0xff00;
    ppbStack_a = (byte **)0x0;
    uStack_12 = uStack_12 & 0xff00;
    bVar9 = false;
    iStack_16 = 0;
    iStack_46 = 0;
    iVar11 = 0;
    pbStack_3c = (byte *)0x0;
    local_3e = (byte *)0x0;
LAB_10bf_0ea6:
    if (!bVar9) {
      param_2 = (byte **)((int)param_2 + 1);
      bVar5 = *(byte *)param_2;
      uVar7 = (uint)bVar5;
      if ((*(byte *)(uVar7 + 0x6a97) & 4) == 0) {
        if (uVar7 == 0x6c) {
LAB_10bf_0e8f:
          ppbStack_a = (byte **)(uint)(byte)((char)ppbStack_a + 1);
          goto LAB_10bf_0ea6;
        }
        if (uVar7 < 0x6d) {
          if (bVar5 == 0x4c) {
            ppbStack_a._0_1_ = (char)ppbStack_a + '\x01';
            goto LAB_10bf_0e8f;
          }
          if ((char)bVar5 < 'M') {
            if (bVar5 == 0x2a) {
              uStack_12 = CONCAT11(uStack_12._1_1_,(char)uStack_12 + '\x01');
              goto LAB_10bf_0ea6;
            }
            if (bVar5 == 0x46) {
              cStack_42 = cStack_42 + '\x01';
              goto LAB_10bf_0ea6;
            }
          }
          else if ((bVar5 == 0x4e) || (bVar5 == 0x68)) goto LAB_10bf_0ea6;
        }
        bVar9 = true;
        goto LAB_10bf_0ea6;
      }
      iStack_46 = iStack_46 + 1;
      iVar11 = iVar11 * 10 + uVar7 + -0x30;
      goto LAB_10bf_0ea6;
    }
    if ((char)uStack_12 == '\0') {
      if (cStack_42 == '\0') {
        _ppbStack_8 = (byte **)CONCAT22(unaff_DS,(byte **)*param_3);
        param_3 = param_3 + 1;
      }
      else {
        _ppbStack_8 = (byte **)CONCAT22(param_3[1],(byte **)*param_3);
        param_3 = param_3 + 2;
      }
    }
    cStack_1ae = '\0';
    bVar5 = *(byte *)param_2 | 0x20;
    ppbVar6 = param_2;
    if (bVar5 != 0x6e) {
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      if ((bVar5 == 99) || (bVar5 == 0x7b)) {
        local_18 = local_18 + 1;
        _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
        ppbStack_a = (byte **)0x1b01;
        unaff_SI = (byte **)FUN_10bf_1528();
      }
      else {
        _ppbStack_8 = (byte **)CONCAT22(uVar10,&local_18);
        ppbStack_a = param_1;
        ppbStack_c = (byte **)0x1af6;
        unaff_SI = (byte **)FUN_10bf_156e();
      }
    }
    ppbVar4 = _ppbStack_8;
    if ((iStack_46 != 0) && (_ppbStack_8 = ppbVar4, iVar11 == 0)) {
LAB_10bf_1455:
      local_18 = local_18 + -1;
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      _ppbStack_8 = (byte **)CONCAT22(uVar10,unaff_SI);
      ppbStack_a = param_1;
      ppbStack_c = (byte **)0x204f;
      FUN_10bf_1554();
      break;
    }
    uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
    switch(bVar5) {
    case 99:
      if (iStack_46 == 0) {
        iStack_46 = 1;
        iVar11 = iVar11 + 1;
      }
      ppbStack_44 = (byte **)0x6a10;
      goto LAB_10bf_0f58;
    case 100:
    case 0x6f:
    case 0x75:
      goto switchD_1000_2079_caseD_64;
    case 0x65:
    case 0x66:
    case 0x67:
      ppbStack_44 = (byte **)&local_1a8;
      if (unaff_SI == (byte **)0x2d) {
        local_1a8 = 0x2d;
        ppbStack_44 = local_1a7;
LAB_10bf_12ff:
        iVar11 = iVar11 + -1;
        local_18 = local_18 + 1;
        _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
        ppbStack_a = (byte **)0x1efb;
        unaff_SI = (byte **)FUN_10bf_1528();
        ppbVar4 = _ppbStack_8;
      }
      else if (unaff_SI == (byte **)0x2b) goto LAB_10bf_12ff;
      _ppbStack_8 = ppbVar4;
      if ((iStack_46 == 0) || (0x15d < iVar11)) {
        iVar11 = 0x15d;
      }
      while ((iVar13 = iVar11, (*(byte *)((int)unaff_SI + 0x6a97) & 4) != 0 &&
             (iVar13 = iVar11 + -1, iVar11 != 0))) {
        *(byte *)ppbStack_44 = (byte)unaff_SI;
        local_18 = local_18 + 1;
        uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
        _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
        ppbStack_a = (byte **)0x1f32;
        ppbStack_44 = (byte **)((int)ppbStack_44 + 1);
        iStack_16 = iStack_16 + 1;
        unaff_SI = (byte **)FUN_10bf_1528();
        iVar11 = iVar13;
      }
      iVar11 = iVar13;
      if ((unaff_SI == (byte **)0x2e) && (iVar11 = iVar13 + -1, iVar13 != 0)) {
        *(byte *)ppbStack_44 = 0x2e;
        iVar13 = iVar13 + -1;
        while( true ) {
          ppbStack_44 = (byte **)((int)ppbStack_44 + 1);
          local_18 = local_18 + 1;
          uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
          _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
          ppbStack_a = (byte **)0x1f76;
          unaff_SI = (byte **)FUN_10bf_1528();
          iVar11 = iVar13;
          if (((*(byte *)((int)unaff_SI + 0x6a97) & 4) == 0) || (iVar11 = iVar13 + -1, iVar13 == 0))
          break;
          iStack_16 = iStack_16 + 1;
          *(byte *)ppbStack_44 = (byte)unaff_SI;
          iVar13 = iVar11;
        }
      }
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      if ((iStack_16 != 0) &&
         ((((char)unaff_SI == 'e' || ((char)unaff_SI == 'E')) && (iVar13 = iVar11 + -1, iVar11 != 0)
          ))) {
        *(byte *)ppbStack_44 = 0x65;
        local_18 = local_18 + 1;
        _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
        ppbStack_a = (byte **)0x1fab;
        ppbStack_44 = (byte **)((int)ppbStack_44 + 1);
        unaff_SI = (byte **)FUN_10bf_1528();
        if (unaff_SI == (byte **)0x2d) {
          *(byte *)ppbStack_44 = 0x2d;
          ppbStack_44 = (byte **)((int)ppbStack_44 + 1);
LAB_10bf_13d3:
          iVar12 = iVar11 + -2;
          if (iVar13 != 0) goto LAB_10bf_13f9;
          iVar13 = iVar11 + -1;
        }
        else if (unaff_SI == (byte **)0x2b) goto LAB_10bf_13d3;
        while ((ppbVar4 = _ppbStack_8, uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10),
               (*(byte *)((int)unaff_SI + 0x6a97) & 4) != 0 && (iVar12 = iVar13 + -1, iVar13 != 0)))
        {
          *(byte *)ppbStack_44 = (byte)unaff_SI;
          ppbStack_44 = (byte **)((int)ppbStack_44 + 1);
          iStack_16 = iStack_16 + 1;
          _ppbStack_8 = ppbVar4;
LAB_10bf_13f9:
          local_18 = local_18 + 1;
          uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
          _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
          ppbStack_a = (byte **)0x1ff2;
          unaff_SI = (byte **)FUN_10bf_1528();
          iVar13 = iVar12;
        }
      }
      local_18 = local_18 + -1;
      _ppbStack_8 = (byte **)CONCAT22(uVar10,unaff_SI);
      ppbStack_a = param_1;
      ppbStack_c = (byte **)0x2005;
      FUN_10bf_1554();
      ppbVar4 = _ppbStack_8;
      if (iStack_16 == 0) goto LAB_10bf_14ec;
      if ((char)uStack_12 == '\0') {
        *(byte *)ppbStack_44 = 0;
        ppbStack_c = (byte **)&local_1a8;
        uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
        _ppbStack_8 = (byte **)CONCAT22(uVar10,ppbStack_c);
        ppbStack_a._0_1_ = (char)((ulong)ppbVar4 >> 0x10);
        uStack_e = (uint)(char)ppbStack_a;
        uStack_10 = 0x10bf;
        uStack_12 = 0x2034;
        iStack_3a = iStack_3a + 1;
        ppbStack_a = (byte **)uVar10;
        (*(code *)*(undefined2 *)0x6a80)();
      }
      break;
    default:
      _ppbStack_8 = ppbVar4;
      if ((byte **)(uint)*(byte *)param_2 != unaff_SI) goto LAB_10bf_1455;
      cStack_48 = cStack_48 + -1;
      if ((char)uStack_12 == '\0') {
        if (cStack_42 == '\0') {
          param_3 = param_3 + -1;
        }
        else {
          param_3 = param_3 + -2;
        }
      }
      break;
    case 0x69:
      bVar5 = 100;
    case 0x78:
      if (unaff_SI == (byte **)0x2d) {
        uStack_e = CONCAT11(uStack_e._1_1_,(char)uStack_e + '\x01');
      }
      else if (unaff_SI != (byte **)0x2b) goto LAB_10bf_1115;
      iVar11 = iVar11 + -1;
      if ((iVar11 == 0) && (iStack_46 != 0)) {
        cStack_1ae = '\x01';
      }
      else {
        local_18 = local_18 + 1;
        _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
        ppbStack_a = (byte **)0x1d03;
        ppbVar6 = (byte **)FUN_10bf_1528();
        unaff_SI = ppbVar6;
        ppbVar4 = _ppbStack_8;
      }
LAB_10bf_1115:
      _ppbStack_8 = ppbVar4;
      if (unaff_SI != (byte **)0x30) goto LAB_10bf_1262;
      local_18 = local_18 + 1;
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
      ppbStack_a = (byte **)0x1d16;
      ppbVar6 = (byte **)FUN_10bf_1528();
      ppbVar4 = _ppbStack_8;
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      if (((char)ppbVar6 != 'x') && ((char)ppbVar6 != 'X')) {
        iStack_16 = iStack_16 + 1;
        if (bVar5 == 0x78) {
          local_18 = local_18 + -1;
          _ppbStack_8 = (byte **)CONCAT22(uVar10,ppbVar6);
          ppbStack_a = param_1;
          ppbStack_c = (byte **)0x1d4a;
          ppbVar6 = (byte **)FUN_10bf_1554();
          unaff_SI = (byte **)0x30;
          goto LAB_10bf_1262;
        }
        bVar5 = 0x6f;
        unaff_SI = ppbVar6;
        _ppbStack_8 = ppbVar4;
        goto LAB_10bf_1262;
      }
      local_18 = local_18 + 1;
      _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
      ppbStack_a = (byte **)0x1d29;
      ppbVar6 = (byte **)FUN_10bf_1528();
      bVar5 = 0x78;
      unaff_SI = ppbVar6;
      goto LAB_10bf_1262;
    case 0x6e:
      local_3e = local_18;
      pbStack_3c = (byte *)((int)local_18 >> 0xf);
      _ppbStack_8 = ppbVar4;
LAB_10bf_12af:
      if ((char)ppbStack_a == '\0') {
        *_ppbStack_8 = local_3e;
      }
      else {
        *_ppbStack_8 = local_3e;
        *(byte **)((byte *)_ppbStack_8 + 2) = pbStack_3c;
      }
      break;
    case 0x70:
      if ((char)ppbStack_a != '\0') {
        bVar5 = 0x46;
      }
switchD_1000_2079_caseD_64:
      if (unaff_SI == (byte **)0x2d) {
        uStack_e = CONCAT11(uStack_e._1_1_,(char)uStack_e + '\x01');
      }
      else {
        _ppbStack_8 = ppbVar4;
        if (unaff_SI != (byte **)0x2b) goto LAB_10bf_1262;
      }
      iVar11 = iVar11 + -1;
      _ppbStack_8 = ppbVar4;
      iVar13 = iStack_46;
      if (iVar11 == 0) goto joined_r0x00011d78;
LAB_10bf_1219:
      local_18 = local_18 + 1;
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
      ppbStack_a = (byte **)0x1e12;
      ppbVar6 = (byte **)FUN_10bf_1528();
      unaff_SI = ppbVar6;
LAB_10bf_1262:
      do {
        ppbVar4 = _ppbStack_8;
        if (cStack_1ae != '\0') {
          if ((bVar5 == 0x70) && ((char)ppbStack_a != '\0')) {
            pbStack_3c = pbStack_14;
          }
          if ((char)uStack_e != '\0') {
            bVar9 = local_3e != (byte *)0x0;
            local_3e = (byte *)-(int)local_3e;
            pbStack_3c = (byte *)-(int)(pbStack_3c + bVar9);
          }
          if (bVar5 == 0x46) {
            iStack_16 = 0;
          }
          if (iStack_16 == 0) goto LAB_10bf_14ec;
          if ((char)uStack_12 != '\0') break;
          iStack_3a = iStack_3a + 1;
          goto LAB_10bf_12af;
        }
        uVar8 = (undefined1)((uint)ppbVar6 >> 8);
        uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
        _ppbStack_8 = ppbVar4;
        if (((bVar5 == 0x78) || (bVar5 == 0x70)) || (bVar5 == 0x46)) {
          if ((*(byte *)((int)unaff_SI + 0x6a97) & 0x80) == 0) {
            if ((bVar5 == 0x46) && (iStack_16 != 0)) {
              if (unaff_SI == (byte **)0x3a) {
                pbStack_14 = local_3e;
                pbStack_3c = (byte *)0x0;
                local_3e = (byte *)0x0;
                iStack_16 = -1;
                bVar5 = 0x70;
                unaff_SI = (byte **)0x30;
                goto LAB_10bf_11f7;
              }
              iStack_16 = 0;
            }
LAB_10bf_11f3:
            cStack_1ae = '\x01';
          }
          else {
            ppbStack_8 = (byte **)CONCAT11(uVar8,4);
            ppbStack_a = &local_3e;
            ppbStack_c = (byte **)0x10bf;
            uStack_e = 0x1da9;
            FUN_10bf_30b4();
            _ppbStack_8 = (byte **)CONCAT22(uVar10,unaff_SI);
            ppbStack_a = (byte **)0x1dad;
            unaff_SI = (byte **)FUN_10bf_150a();
          }
        }
        else {
          if ((*(byte *)((int)unaff_SI + 0x6a97) & 4) == 0) goto LAB_10bf_11f3;
          if (bVar5 == 0x6f) {
            if (0x37 < (int)unaff_SI) goto LAB_10bf_11f3;
            _ppbStack_8 = (byte **)CONCAT22(uVar10,(byte **)CONCAT11(uVar8,3));
            ppbStack_a = &local_3e;
            ppbStack_c = (byte **)0x10bf;
            uStack_e = 0x1e33;
            FUN_10bf_30b4();
          }
          else {
            _ppbStack_8 = (byte **)((ulong)uVar10 << 0x10);
            ppbStack_a = (byte **)0xa;
            ppbStack_c = &local_3e;
            uStack_e = 0x10bf;
            uStack_10 = 0x1e45;
            FUN_10bf_3094();
          }
        }
LAB_10bf_11f7:
        if (cStack_1ae != '\0') {
          local_18 = local_18 + -1;
          uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
          _ppbStack_8 = (byte **)CONCAT22(uVar10,unaff_SI);
          ppbStack_a = param_1;
          ppbStack_c = (byte **)0x1e52;
          ppbVar6 = (byte **)FUN_10bf_1554();
          goto LAB_10bf_1262;
        }
        iStack_16 = iStack_16 + 1;
        ppbVar6 = unaff_SI + -0x18;
        bVar9 = CARRY2((uint)local_3e,(uint)ppbVar6);
        local_3e = local_3e + (int)ppbVar6;
        pbStack_3c = pbStack_3c + (uint)bVar9 + ((int)ppbVar6 >> 0xf);
        if (iStack_46 == 0) goto LAB_10bf_1219;
        iVar11 = iVar11 + -1;
        ppbVar4 = _ppbStack_8;
        iVar13 = iVar11;
joined_r0x00011d78:
        _ppbStack_8 = ppbVar4;
        if (iVar13 == 0) goto LAB_10bf_1219;
        cStack_1ae = cStack_1ae + '\x01';
      } while( true );
    case 0x73:
      ppbStack_44 = (byte **)0x6a0a;
LAB_10bf_0f58:
      bStack_4a = bStack_4a - 1;
      ppbVar6 = param_2;
LAB_10bf_0f5b:
      param_2 = ppbVar6;
      _ppbStack_8 = (byte **)CONCAT22(uVar10,(byte **)0x20);
      ppbStack_a = (byte **)0x0;
      ppbStack_c = (byte **)local_38;
      uStack_e = 0x10bf;
      uStack_10 = 0x1b5b;
      FUN_10bf_2c3a();
      if ((bVar5 == 0x7b) && (*(byte *)ppbStack_44 == 0x5d)) {
        bStack_40 = 0x5d;
        ppbStack_44 = (byte **)((int)ppbStack_44 + 1);
        uStack_2d = 0x20;
      }
      while (ppbVar4 = _ppbStack_8, *(byte *)ppbStack_44 != 0x5d) {
        bVar1 = *(byte *)ppbStack_44;
        ppbStack_c = (byte **)CONCAT11(ppbStack_c._1_1_,bVar1);
        ppbVar6 = (byte **)((int)ppbStack_44 + 1);
        if (((bVar1 == 0x2d) && (bStack_40 != 0)) && (*(byte *)ppbVar6 != 0x5d)) {
          ppbStack_44 = ppbStack_44 + 1;
          bVar1 = *(byte *)ppbVar6;
          bVar3 = bVar1;
          bVar2 = bStack_40;
          if (bStack_40 < bVar1) {
            bVar3 = bStack_40;
            bVar2 = bVar1;
          }
          bStack_40 = bVar3;
          uStack_10 = CONCAT11(uStack_10._1_1_,bVar2);
          ppbStack_c = (byte **)CONCAT11(ppbStack_c._1_1_,bStack_40);
          while( true ) {
            if ((int)(char)uStack_10 < (int)((uint)ppbStack_c & 0xff)) break;
            local_38[(byte)ppbStack_c >> 3] =
                 local_38[(byte)ppbStack_c >> 3] | '\x01' << ((byte)ppbStack_c & 7);
            ppbStack_c = (byte **)CONCAT11(ppbStack_c._1_1_,(byte)ppbStack_c + '\x01');
          }
          bStack_40 = 0;
        }
        else {
          local_38[bVar1 >> 3] = local_38[bVar1 >> 3] | '\x01' << (bVar1 & 7);
          ppbStack_44 = ppbVar6;
          bStack_40 = bVar1;
        }
      }
      if (*(byte *)ppbStack_44 == 0) goto LAB_10bf_14ec;
      if (bVar5 == 0x7b) {
        param_2 = ppbStack_44;
      }
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      iVar13 = uVar10;
      pbStack_1ac = (byte *)ppbStack_8;
      _ppbStack_8 = ppbVar4;
      while (((ppbVar4 = _ppbStack_8, uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10), iStack_46 == 0 ||
              (bVar9 = iVar11 != 0, iVar11 = iVar11 + -1, bVar9)) &&
             ((unaff_SI != (byte **)0xffff &&
              ((1 << ((byte)unaff_SI & 7) & (int)(char)(local_38[(int)unaff_SI >> 3] ^ bStack_4a))
               != 0))))) {
        if ((char)uStack_12 == '\0') {
          _ppbStack_8 = (byte **)((ulong)uVar10 << 0x10);
          *(byte *)ppbVar4 = (byte)unaff_SI;
        }
        else {
          pbStack_1ac = pbStack_1ac + 1;
          _ppbStack_8 = ppbVar4;
        }
        local_18 = local_18 + 1;
        uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
        _ppbStack_8 = (byte **)CONCAT22(uVar10,param_1);
        ppbStack_a = (byte **)0x1c93;
        unaff_SI = (byte **)FUN_10bf_1528();
      }
      local_18 = local_18 + -1;
      _ppbStack_8 = (byte **)CONCAT22(uVar10,unaff_SI);
      ppbStack_a = param_1;
      ppbStack_c = (byte **)0x1ca2;
      FUN_10bf_1554();
      ppbVar4 = _ppbStack_8;
      uVar10 = (uint)((ulong)_ppbStack_8 >> 0x10);
      if (((byte **)pbStack_1ac == ppbStack_8) && (iVar13 == uVar10)) goto LAB_10bf_14ec;
      _ppbStack_8 = ppbVar4;
      if (((char)uStack_12 == '\0') && (iStack_3a = iStack_3a + 1, bVar5 != 99)) {
        *(byte *)ppbVar4 = 0;
      }
      break;
    case 0x7b:
      ppbVar6 = (byte **)((int)param_2 + 1);
      ppbStack_44 = ppbVar6;
      if (*(byte *)ppbVar6 == 0x5e) {
        ppbStack_44 = param_2 + 1;
        param_2 = ppbVar6;
        goto LAB_10bf_0f58;
      }
      goto LAB_10bf_0f5b;
    }
    cStack_48 = cStack_48 + '\x01';
LAB_10bf_14e4:
    param_2 = (byte **)((int)param_2 + 1);
  } while (unaff_SI != (byte **)0xffff);
LAB_10bf_14ec:
  if (((unaff_SI == (byte **)0xffff) && (iStack_3a == 0)) && (cStack_48 == '\0')) {
    iStack_3a = -1;
  }
  return iStack_3a;
}
