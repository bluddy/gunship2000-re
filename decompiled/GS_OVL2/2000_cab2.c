/* GS.GS2 2000:cab2 undefined FUN_2000_cab2(void) */
void __cdecl16far FUN_2000_cab2(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  long lVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  undefined2 unaff_SI;
  undefined2 *puVar7;
  char *pcVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint uStack_50;
  int iStack_4e;
  int iStack_4c;
  byte local_4a;
  char acStack_49 [4];
  undefined2 auStack_45 [4];
  char acStack_3d [4];
  undefined2 uStack_39;
  undefined2 uStack_37;
  undefined2 uStack_35;
  int iStack_33;
  undefined2 uStack_31;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  int iStack_2c;
  char local_28;
  char cStack_27;
  char cStack_26;
  char acStack_25 [9];
  undefined2 auStack_1c [4];
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  char cStack_f;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 uStack_a;
  char cStack_9;
  char cStack_8;
  char cStack_7;
  undefined1 uStack_6;
  char cStack_5;
  
  uStack_6 = 0xbd;
  cStack_5 = 0xca;
  func_0x00000eb0();
  uStack_6 = (undefined1)unaff_SI;
  cStack_5 = (char)((uint)unaff_SI >> 8);
  cStack_8 = 0;
  cStack_7 = 0x3d;
  uStack_a = 3;
  cStack_9 = 0x3d;
  uStack_c._0_1_ = 0xbf;
  uStack_c._1_1_ = 0;
  uStack_e._0_1_ = 0xca;
  uStack_e._1_1_ = 0xca;
  iVar6 = func_0x000012cc();
  *(int *)0x98f6 = iVar6;
  if (iVar6 == 0) {
    return;
  }
  for (iStack_4c = 0; iStack_4c < 5; iStack_4c = iStack_4c + 1) {
    cStack_8 = 0x1e;
    cStack_7 = 0;
    uStack_a = 0;
    cStack_9 = 0;
    uStack_c = &local_4a;
    uStack_e._0_1_ = 0xbf;
    uStack_e._1_1_ = 0;
    uVar9 = 0xbf;
    uStack_10 = 0xfd;
    cStack_f = 0xca;
    func_0x0000382a();
    if (iStack_4c < *(char *)0xe282) {
      pcVar8 = &local_28;
      puVar7 = (undefined2 *)(iStack_4c * 0x24 + -0x4518);
      iVar6 = 0x12;
      pbVar4 = uStack_c;
      while( true ) {
        uStack_c._1_1_ = (undefined1)((uint)pbVar4 >> 8);
        uStack_c._0_1_ = (char)pbVar4;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 2;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        uStack_c = pbVar4;
        *(undefined2 *)pcVar2 = *puVar1;
        pbVar4 = uStack_c;
      }
      if (cStack_27 == '\x01') {
        local_4a = local_4a & 7 | 0x20;
      }
      else if (cStack_27 == '\x02') {
        if ((cStack_5 == '\x01') && (*(char *)0xe278 == '\x02')) {
          local_4a = local_4a & 7 | 8;
        }
        else if ((cStack_5 == '\x02') && (*(char *)0xe278 == '\x01')) {
          local_4a = local_4a & 7 | 0x10;
        }
        else {
          local_4a = (-(cStack_5 != '\0') & 3U) << 3 ^ local_4a & 7;
        }
        acStack_25[2] = 0;
      }
      local_4a = local_4a ^ (*(byte *)(local_28 + 0x3d0c) ^ local_4a) & 7;
      uStack_39 = CONCAT11(uStack_10,uStack_11);
      uStack_37 = CONCAT11((undefined1)uStack_e,cStack_f);
      iStack_33 = CONCAT11(uStack_a,uStack_c._1_1_);
      uStack_35 = 100;
      cStack_8 = (char)uStack_c >> 7;
      uStack_a = uStack_e._1_1_;
      cStack_9 = (char)uStack_c;
      lVar3 = (long)iStack_33 * 100;
      uStack_c._0_1_ = (char)((ulong)lVar3 >> 0x10);
      uStack_c._1_1_ = (undefined1)((ulong)lVar3 >> 0x18);
      uStack_e._0_1_ = (undefined1)lVar3;
      uStack_e._1_1_ = (undefined1)((ulong)lVar3 >> 8);
      uStack_10 = 0xbf;
      cStack_f = 0;
      uStack_12 = 200;
      uStack_11 = 0xcb;
      cStack_7 = cStack_8;
      iStack_33 = func_0x00003aec();
      uStack_31 = CONCAT11(cStack_8,cStack_9);
      uStack_2f = CONCAT11(uStack_6,cStack_7);
      uStack_10 = (undefined1)iStack_4c;
      cStack_f = (char)((uint)iStack_4c >> 8);
      uStack_12 = 0xbf;
      uStack_11 = 0;
      uStack_14 = 0xde;
      uStack_13 = 0xcb;
      uStack_2d = FUN_2000_cce2();
      if (-1 < cStack_26) {
        acStack_49[0] = cStack_26;
        auStack_45[0] = CONCAT11(uStack_12,uStack_13);
        acStack_3d[0] = '\0';
      }
      uStack_50 = (uint)(-1 < cStack_26);
      cStack_f = local_28 >> 7;
      uStack_12 = 0xbf;
      uStack_11 = 0;
      uVar9 = 0x1581;
      uStack_14 = 0xf;
      uStack_13 = 0xcc;
      iStack_2c = func_0x00015bac();
      for (iStack_4e = 0; iStack_4e < 3; iStack_4e = iStack_4e + 1) {
        cVar5 = acStack_25[iStack_4e];
        if (acStack_25[iStack_4e] == '\0') {
          iVar6 = iStack_2c * 0xfc + *(int *)0xb83a;
          if (iStack_4e < (int)((int)*(char *)(iVar6 + 8) - (uint)(*(char *)(iVar6 + 1) == '\x02')))
          {
            cVar5 = '\x01';
          }
          else {
            cVar5 = '\0';
          }
        }
        acStack_49[uStack_50] = cVar5;
        if ('\0' < acStack_25[iStack_4e]) {
          auStack_45[uStack_50] = auStack_1c[iStack_4e];
          if (*(char *)((int)*(undefined4 *)0xb83a + iStack_2c * 0xfc + 9) == '\x02') {
            acStack_3d[uStack_50] = '\x03';
          }
          else {
            acStack_3d[uStack_50] = (char)iStack_4e + '\x01';
          }
          uStack_50 = uStack_50 + 1;
        }
      }
    }
    cStack_8 = (char)*(undefined2 *)0x98f6;
    cStack_7 = (char)((uint)*(undefined2 *)0x98f6 >> 8);
    uStack_a = 1;
    cStack_9 = 0;
    uStack_c._0_1_ = 0x1e;
    uStack_c._1_1_ = 0;
    uStack_e = &local_4a;
    uStack_10 = (undefined1)uVar9;
    cStack_f = (char)((uint)uVar9 >> 8);
    uStack_12 = 0xcb;
    uStack_11 = 0xcc;
    func_0x00001418();
  }
  cStack_8 = (char)*(undefined2 *)0x98f6;
  cStack_7 = (char)((uint)*(undefined2 *)0x98f6 >> 8);
  uStack_a = 0xbf;
  cStack_9 = 0;
  uStack_c._0_1_ = 0xdb;
  uStack_c._1_1_ = 0xcc;
  func_0x000011e6();
  return;
}
