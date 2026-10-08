/* GS.GS2 165c:2886 undefined FUN_165c_2886(void) */
void __cdecl16far FUN_165c_2886(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  long lVar7;
  undefined1 local_78 [82];
  uint uStack_26;
  uint uStack_24;
  int iStack_22;
  undefined2 uStack_20;
  uint uStack_1e;
  int iStack_1c;
  uint local_1a;
  int iStack_18;
  uint local_16;
  undefined1 *puStack_14;
  uint uStack_12;
  uint uStack_10;
  undefined4 uStack_e;
  undefined4 uStack_a;
  
  FUN_10bf_02c0();
  uStack_a._2_2_ = &local_1a;
  uStack_a._0_2_ = &local_16;
  uStack_e._2_2_ = param_2;
  uStack_e._0_2_ = 0x10bf;
  uStack_10 = 0x8e62;
  FUN_165c_26c4();
  iVar3 = param_1 * 0x3e;
  iVar4 = *(int *)(iVar3 + -0x46fc);
  *(uint *)(iVar3 + -0x46fa) = local_16;
  *(undefined2 *)(iVar3 + -0x46f8) = puStack_14;
  *(uint *)(iVar3 + -0x46f6) = local_1a;
  *(int *)(iVar3 + -0x46f4) = iStack_18;
  iStack_22 = 0;
  uStack_24 = 0;
  iStack_1c = 0;
  uStack_1e = 0;
  *(int *)(param_1 * 2 + -0x5358) = param_2;
  if (((1 < param_1) &&
      (*(int *)(param_2 * 0x20 + -0x5d7c) != 0 || *(int *)(param_2 * 0x20 + -0x5d7e) != 0)) &&
     ((iVar4 == 1 || (iVar4 == 6)))) {
    uStack_e._2_2_ = 0;
    while( true ) {
      if ((int)uStack_e._2_2_ < 100) {
        uStack_12 = 100;
      }
      else if ((int)uStack_e._2_2_ < 400) {
        uStack_12 = 0x32;
      }
      else {
        uStack_12 = 0;
      }
      uStack_10 = local_1a;
      uStack_a._2_2_ = (uint *)0x64;
      uStack_a._0_2_ = (uint *)0xff9c;
      uStack_e._2_2_ = 0x10bf;
      uStack_e._0_2_ = 0x8f2e;
      uStack_1e = FUN_239c_005c();
      iStack_1c = (int)uStack_1e >> 0xf;
      uStack_a._2_2_ = (uint *)0x64;
      uStack_a._0_2_ = (uint *)0xff9c;
      uStack_e._2_2_ = 0x239c;
      uStack_e._0_2_ = 0x8f41;
      uStack_24 = FUN_239c_005c();
      iStack_22 = (int)uStack_24 >> 0xf;
      if (iStack_1c < 0) {
        uStack_12 = -uStack_12;
      }
      bVar6 = CARRY2(uStack_1e,uStack_12);
      uStack_1e = uStack_1e + uStack_12;
      iStack_1c = iStack_1c + ((int)uStack_12 >> 0xf) + (uint)bVar6;
      uStack_a._2_2_ = (uint *)0x0;
      uStack_a._0_2_ = (uint *)0x2000;
      uStack_e._2_2_ = 0;
      uStack_e._0_2_ = 100;
      uVar1 = uStack_1e & 0xff;
      uStack_12 = uVar1 << 0xf;
      uStack_10 = ((((((CONCAT11((char)iStack_1c,(char)(uStack_1e >> 8)) << 1 |
                       (uint)((char)uStack_1e < '\0')) << 1 | (uint)((int)(uVar1 << 9) < 0)) << 1 |
                     (uint)((int)(uVar1 << 10) < 0)) << 1 | (uint)((int)(uVar1 << 0xb) < 0)) << 1 |
                   (uint)((int)(uVar1 << 0xc) < 0)) << 1 | (uint)((int)(uVar1 << 0xd) < 0)) << 1 |
                  (uint)((int)(uVar1 << 0xe) < 0);
      puStack_14 = (undefined1 *)0x239c;
      local_16 = 0x8f9e;
      lVar7 = FUN_10bf_2efc();
      uStack_a = lVar7 + CONCAT22(uStack_a._2_2_,(uint *)uStack_a);
      uStack_e = uStack_a + 0x1000;
      uStack_10 = 0x10bf;
      uStack_12 = 0x8fb7;
      uStack_20 = FUN_10bf_2efc();
      uStack_a._2_2_ = (uint *)0x0;
      uStack_a._0_2_ = (uint *)0x2000;
      uStack_e._2_2_ = 0;
      uStack_e._0_2_ = 100;
      if (iStack_22 < 0) {
        uStack_12 = -uStack_12;
      }
      bVar6 = CARRY2(uStack_24,uStack_12);
      uStack_24 = uStack_24 + uStack_12;
      iStack_22 = iStack_22 + ((int)uStack_12 >> 0xf) + (uint)bVar6;
      uVar1 = uStack_24 & 0xff;
      uStack_12 = uVar1 << 0xf;
      uStack_10 = ((((((CONCAT11((char)iStack_22,(char)(uStack_24 >> 8)) << 1 |
                       (uint)((char)uStack_24 < '\0')) << 1 | (uint)((int)(uVar1 << 9) < 0)) << 1 |
                     (uint)((int)(uVar1 << 10) < 0)) << 1 | (uint)((int)(uVar1 << 0xb) < 0)) << 1 |
                   (uint)((int)(uVar1 << 0xc) < 0)) << 1 | (uint)((int)(uVar1 << 0xd) < 0)) << 1 |
                  (uint)((int)(uVar1 << 0xe) < 0);
      puStack_14 = (undefined1 *)0x10bf;
      local_16 = 0x900d;
      lVar7 = FUN_10bf_2efc();
      uStack_e = lVar7 + CONCAT22((undefined2)uStack_e,uStack_10) + 0x1000;
      uStack_10 = 0x10bf;
      uStack_12 = 0x9026;
      uStack_26 = FUN_10bf_2efc();
      uVar5 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
      iVar3 = (int)*(undefined4 *)0xb860;
      uStack_a._2_2_ = (uint *)*(undefined2 *)(iVar3 + *(int *)0xa276 * 0x27 + 0x25);
      uStack_a._0_2_ = (uint *)*(undefined2 *)(iVar3 + *(int *)0xa276 * 0x27 + 0x23);
      uStack_e._0_2_ = uStack_20;
      uStack_10 = 0x10bf;
      uStack_12 = 0x9042;
      uStack_e._2_2_ = uStack_26;
      iVar3 = FUN_165c_0b44();
      if (iVar3 != 0) break;
      uStack_e._2_2_ = uStack_e._2_2_ + 1;
    }
    uVar1 = uStack_26 & 0xff;
    local_1a = uVar1 * 0x2000 + 0x1000;
    iStack_18 = ((((((int)(char)(uStack_26 >> 8) << 1 | (uint)((char)uStack_26 < '\0')) << 1 |
                   (uint)((int)(uVar1 << 9) < 0)) << 1 | (uint)((int)(uVar1 << 10) < 0)) << 1 |
                 (uint)((int)(uVar1 << 0xb) < 0)) << 1 | (uint)((int)(uVar1 << 0xc) < 0)) +
                (uint)(0xefff < uVar1 * 0x2000);
  }
  if ((1 < param_1) &&
     (((*(int *)(param_2 * 0x20 + -0x5d7c) == 0 && *(int *)(param_2 * 0x20 + -0x5d7e) == 0 ||
       (iStack_1c != 0 || uStack_1e != 0)) || (iStack_22 != 0 || uStack_24 != 0)))) {
    if ((iStack_18 < 1) && ((iStack_18 < 0 || (local_1a < 0x8000)))) {
      local_1a = 0x8000;
      iStack_18 = 0;
    }
    if ((6 < iStack_18) && ((7 < iStack_18 || (0x6000 < local_1a)))) {
      local_1a = 0x6000;
      iStack_18 = 7;
    }
  }
  uStack_a._0_2_ = (uint *)(param_3 * 0x27 + *(int *)0xb860);
  uStack_a._2_2_ = (uint *)*(undefined2 *)0xb862;
  if (param_1 < 2) {
    uStack_e._2_2_ = 0x232;
  }
  else {
    uStack_e._2_2_ = *(undefined2 *)(*(int *)(param_1 * 0x3e + -0x46fc) * 2 + 0x1b82);
  }
  uStack_e._0_2_ = 0;
  uStack_10 = 0x8000;
  puStack_14 = (undefined1 *)(local_1a + 0x4000);
  uStack_12 = iStack_18 + (uint)(0xbfff < local_1a);
  local_16 = 0x10bf;
  iStack_18 = 0x9176;
  uStack_e._0_2_ = FUN_10bf_2efc();
  uStack_10 = 0;
  uStack_12 = 0x8000;
  bVar6 = 0xbfff < local_16;
  local_16 = local_16 + 0x4000;
  puStack_14 = (undefined1 *)((int)puStack_14 + (uint)bVar6);
  iStack_18 = 0x10bf;
  local_1a = 0x918f;
  uStack_10 = FUN_10bf_2efc();
  uStack_12 = 0x233;
  puStack_14 = local_78;
  local_16 = 0x10bf;
  iStack_18 = 0x919c;
  FUN_10bf_26e0();
  uStack_a._2_2_ = (uint *)0x1f;
  uStack_a._0_2_ = (uint *)local_78;
  uStack_e._2_2_ = 0x10bf;
  uStack_e._0_2_ = 0x91a9;
  FUN_165c_27d4();
  uStack_a._2_2_ = (uint *)local_78;
  iVar3 = param_1 * 0x3e;
  uStack_a._0_2_ = (uint *)(iVar3 + -0x471c);
  uStack_e._2_2_ = 0x10bf;
  uStack_e._0_2_ = 0x91c1;
  FUN_10bf_21d6();
  *(undefined1 *)(param_1 + -0x4a30) = (char)iVar4;
  *(undefined2 *)(iVar3 + -0x46fc) = *(undefined2 *)(iVar4 * 2 + 0x1b94);
  *(uint *)(iVar3 + -0x46f2) = local_16;
  *(int *)(iVar3 + -0x46f0) = (int)puStack_14;
  *(uint *)(iVar3 + -0x46ee) = local_1a;
  *(undefined2 *)(iVar3 + -0x46ec) = iStack_18;
  if (param_4 < 3) {
    *(int *)(param_1 * 0x3e + -0x46ea) = param_4;
  }
  else {
    *(int *)(iVar3 + -0x46ea) = -(param_4 / 2 - param_4);
  }
  if (*(int *)(param_1 * 0x3e + -0x46fc) == 2) {
    *(undefined2 *)(param_1 * 0x3e + -0x46ea) = 1;
  }
  if (*(int *)0xacb4 != 0 || *(int *)0xacb2 != 0) {
    uVar5 = *(undefined2 *)0xacb4;
    iVar4 = param_1 * 0x3e;
    *(undefined2 *)(iVar4 + -0x46e6) = *(undefined2 *)0xacb2;
    *(undefined2 *)(iVar4 + -0x46e4) = uVar5;
    uVar5 = *(undefined2 *)0xadda;
    *(undefined2 *)(iVar4 + -0x46e2) = *(undefined2 *)0xadd8;
    *(undefined2 *)(iVar4 + -0x46e0) = uVar5;
  }
  if (*(int *)(param_1 * 0x3e + -0x46fc) == 1) {
    if (param_4 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined1 *)0xe278 = uVar2;
  }
  return;
}
