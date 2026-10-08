/* GS.GS2 165c:1242 undefined FUN_165c_1242(void) */
void __cdecl16far FUN_165c_1242(int param_1,uint param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined2 unaff_SI;
  undefined2 *puVar15;
  undefined2 uVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uStack_38;
  int iStack_34;
  uint local_32;
  int iStack_30;
  uint local_2e;
  undefined2 local_2c [12];
  undefined1 uStack_14;
  undefined1 uStack_13;
  char cStack_12;
  char cStack_11;
  char cStack_10;
  char cStack_f;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  byte bStack_6;
  undefined1 uStack_5;
  
  uVar16 = 0x10bf;
  bStack_6 = 0xd;
  uStack_5 = 0x78;
  FUN_10bf_02c0();
  bStack_6 = (byte)unaff_SI;
  uStack_5 = (undefined1)((uint)unaff_SI >> 8);
  puVar11 = (undefined2 *)(param_1 * 0x27 + *(int *)0xb860);
  uVar3 = *(undefined2 *)0xb862;
  uStack_8._0_1_ = (byte)unaff_DS;
  uStack_8._1_1_ = (byte)((uint)unaff_DS >> 8);
  puVar15 = local_2c;
  uStack_a._0_1_ = (byte)unaff_SS;
  uStack_a._1_1_ = (byte)((uint)unaff_SS >> 8);
  for (iVar13 = 0x13; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar15 = *(undefined1 *)puVar11;
  uVar3 = CONCAT11(uStack_8._1_1_,(byte)uStack_8);
  bVar4 = (uStack_8._1_1_ & 0x20) != 0;
  bVar5 = ((byte)uStack_8 & 4) != 0;
  if (((byte)uStack_8 & 0x20) != 0) {
    uStack_38 = (byte *)CONCAT22(*(undefined2 *)0xb85e,(byte *)*(undefined2 *)0xb85c);
    iStack_34 = 0;
    while( true ) {
      if ((*(int *)0xb8ca <= iStack_34) || ((uint)*uStack_38 == CONCAT11(cStack_12,uStack_13)))
      break;
      iStack_34 = iStack_34 + 1;
      uStack_38 = (byte *)CONCAT22(uStack_38._2_2_,(byte *)uStack_38 + 8);
    }
    if ((((byte *)uStack_38)[2] & 1) != 0) {
      if ((bStack_6 & 0x10) != 0) {
        uVar12 = CONCAT11(bStack_6,uStack_8._1_1_) & 0xefff;
        bStack_6 = (byte)(uVar12 >> 8) | 0x20;
        uStack_8._1_1_ = (byte)uVar12;
      }
      if ((!bVar4 && !bVar5) && ((uStack_8._1_1_ & 0xc) == 0)) {
        uStack_8._1_1_ = uStack_8._1_1_ | 8;
      }
    }
  }
  iStack_30 = (uint)((bStack_6 & 0x30) != 0) + (uint)((bStack_6 & 0x20) != 0);
  if (((byte)uStack_8 & 0x10) == 0) {
    if ((((byte)uStack_8 & 0x20) == 0) &&
       (CONCAT11(bStack_6,uStack_8._1_1_) != 0 || CONCAT11((byte)uStack_8,uStack_a._1_1_) != 0)) {
      local_2e = *(int *)0xaca4 / 3 + 0x14;
      local_32 = 0x1f;
    }
    else if (*(int *)0xa246 == 0) {
      for (iStack_34 = 0; iStack_34 < 100; iStack_34 = iStack_34 + 1) {
        uStack_8._0_1_ = 0x34;
        uStack_8._1_1_ = 0;
        uStack_a._0_1_ = (byte)uVar16;
        uStack_a._1_1_ = (byte)((uint)uVar16 >> 8);
        uStack_c._0_1_ = 0x38;
        uStack_c._1_1_ = 0x79;
        iVar13 = FUN_239c_0086();
        local_2e = iVar13 + 6;
        uStack_8._0_1_ = 0x34;
        uStack_8._1_1_ = 0;
        uStack_a._0_1_ = 0x9c;
        uStack_a._1_1_ = 0x23;
        uVar16 = 0x239c;
        uStack_c._0_1_ = 0x48;
        uStack_c._1_1_ = 0x79;
        iVar13 = FUN_239c_0086();
        bVar9 = uStack_8._1_1_;
        local_32 = iVar13 + 6;
        if (!bVar4 && !bVar5) break;
        uStack_8._0_1_ = uStack_8._1_1_;
        uStack_8._1_1_ = bStack_6;
        uStack_a._0_1_ = uStack_a._1_1_;
        uStack_a._1_1_ = bVar9;
        uStack_e._0_1_ = (char)local_2e;
        uStack_e._1_1_ = (char)(local_2e >> 8);
        cStack_10 = -100;
        cStack_f = '#';
        cStack_12 = 'e';
        cStack_11 = 'y';
        uStack_c = (uint *)local_32;
        iVar13 = FUN_165c_0b44();
        if (iVar13 != 0) break;
      }
    }
    else {
      local_2e = param_2;
      local_32 = param_3;
    }
    bVar9 = uStack_8._1_1_;
    uStack_8._0_1_ = uStack_8._1_1_;
    uStack_8._1_1_ = bStack_6;
    uStack_a._0_1_ = uStack_a._1_1_;
    uStack_a._1_1_ = bVar9;
    uStack_c = &local_32;
    uStack_e = &local_2e;
    cStack_10 = (char)uVar16;
    cVar7 = cStack_10;
    cStack_f = (char)((uint)uVar16 >> 8);
    cVar8 = cStack_f;
    cStack_12 = -0x68;
    cStack_11 = 'y';
    FUN_165c_0a7a();
    cVar10 = (char)local_2e;
    cVar6 = (char)(local_2e >> 8);
    uStack_e._0_1_ = (char)local_32;
    uStack_e._1_1_ = (char)(local_32 >> 8);
    if (((uStack_8._1_1_ & 4) != 0) || (bVar4 || bVar5)) {
      uVar12 = local_2e & 0xff;
      *(int *)0xa27c = uVar12 * 0x2000 + 0x1000;
      *(int *)0xa27e =
           ((((((int)cVar6 << 1 | (uint)(cVar10 < '\0')) << 1 | (uint)((int)(uVar12 << 9) < 0)) << 1
             | (uint)((int)(uVar12 << 10) < 0)) << 1 | (uint)((int)(uVar12 << 0xb) < 0)) << 1 |
           (uint)((int)(uVar12 << 0xc) < 0)) + (uint)(0xefff < uVar12 * 0x2000);
      uVar12 = local_32 & 0xff;
      *(int *)0xaca0 = uVar12 * 0x2000 + 0x1000;
      *(int *)0xaca2 =
           ((((((int)uStack_e._1_1_ << 1 | (uint)((char)uStack_e < '\0')) << 1 |
              (uint)((int)(uVar12 << 9) < 0)) << 1 | (uint)((int)(uVar12 << 10) < 0)) << 1 |
            (uint)((int)(uVar12 << 0xb) < 0)) << 1 | (uint)((int)(uVar12 << 0xc) < 0)) +
           (uint)(0xefff < uVar12 * 0x2000);
    }
    else {
      cStack_12 = cVar7;
      cStack_11 = cVar8;
      cStack_10 = cVar10;
      cStack_f = cVar6;
      if (iStack_30 == 0) {
        uStack_8._0_1_ = (uStack_8._1_1_ & 8) != 0;
        uStack_8._1_1_ = 0;
        uStack_a._0_1_ = 0xa0;
        uStack_a._1_1_ = 0xac;
        uStack_c._0_1_ = 0x7c;
        uStack_c._1_1_ = 0xa2;
        uStack_14 = 0x4d;
        uStack_13 = 0x7a;
        FUN_165c_05d4();
      }
      else {
        uStack_8._0_1_ = (bStack_6 & 0x20) != 0;
        uStack_8._1_1_ = 0;
        uStack_a._0_1_ = 0xa0;
        uStack_a._1_1_ = 0xac;
        uStack_c._0_1_ = 0x7c;
        uStack_c._1_1_ = 0xa2;
        uStack_14 = 0x29;
        uStack_13 = 0x7a;
        FUN_165c_0466();
      }
    }
  }
  else {
    *(undefined2 *)0xa27c = CONCAT11(cStack_10,cStack_11);
    *(undefined2 *)0xa27e = CONCAT11((char)uStack_e,cStack_f);
    *(undefined2 *)0xaca0 = CONCAT11((undefined1)uStack_c,uStack_e._1_1_);
    *(undefined2 *)0xaca2 = CONCAT11((byte)uStack_a,uStack_c._1_1_);
  }
  if ((uStack_8._1_1_ & 0x10) != 0) {
    if ((*(int *)0xa27e < 5) && (*(int *)0xa27e < 4)) {
      iVar13 = *(int *)0xaca2 + -4;
      uStack_a._0_1_ = (byte)*(undefined2 *)0xaca0;
      uStack_a._1_1_ = (byte)((uint)*(undefined2 *)0xaca0 >> 8);
      uStack_c._0_1_ = (undefined1)uVar16;
      uStack_c._1_1_ = (undefined1)((uint)uVar16 >> 8);
      uVar16 = 0x10bf;
      uStack_e._0_1_ = 0x82;
      uStack_e._1_1_ = 0x7a;
      uStack_8 = iVar13;
      uVar12 = FUN_10bf_2cd6();
      if ((*(int *)0xa27e <= iVar13) && ((*(int *)0xa27e < iVar13 || (*(uint *)0xa27c < uVar12)))) {
        *(undefined2 *)0xa27c = 0x2000;
        *(undefined2 *)0xa27e = 0;
        goto LAB_165c_1577;
      }
    }
    iVar13 = 4;
    if (3 < *(int *)0xa27e) {
      uStack_a = *(undefined2 *)0xaca0;
      uStack_8 = *(int *)0xaca2 + -4;
      uStack_c._0_1_ = (undefined1)uVar16;
      uStack_c._1_1_ = (undefined1)((uint)uVar16 >> 8);
      uStack_e._0_1_ = 0xc9;
      uStack_e._1_1_ = 0x7a;
      uVar12 = FUN_10bf_2cd6();
      iVar14 = (8 - *(int *)0xa27e) - (uint)(*(int *)0xa27c != 0);
      if ((iVar14 <= iVar13) && ((iVar14 < iVar13 || ((uint)-*(int *)0xa27c < uVar12)))) {
        *(undefined2 *)0xa27c = 0xdfff;
        *(undefined2 *)0xa27e = 7;
        goto LAB_165c_1577;
      }
    }
    if ((*(int *)0xaca2 < 5) && (*(int *)0xaca2 < 4)) {
      *(undefined2 *)0xaca0 = 0x2000;
      *(undefined2 *)0xaca2 = 0;
    }
    else {
      *(undefined2 *)0xaca0 = 0xdfff;
      *(undefined2 *)0xaca2 = 7;
    }
  }
LAB_165c_1577:
  *(int *)0xa276 = param_1;
  return;
}
