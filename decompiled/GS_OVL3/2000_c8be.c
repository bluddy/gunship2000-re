/* GS.GS2 2000:c8be undefined FUN_2000_c8be(void) */
void __cdecl16far FUN_2000_c8be(int param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_de [196];
  undefined2 uStack_1a;
  int iStack_16;
  int iStack_14;
  undefined1 local_12;
  undefined2 uStack_11;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  
  uVar8 = 0xbf;
  func_0x00000eb0();
  if ((*(byte *)0xbb9c & 0x18) == 0) {
    puStack_8 = (undefined1 *)0x2;
    uStack_a._0_1_ = 0xbf;
    uStack_a._1_1_ = 0;
    uStack_c = 0xdc;
    uStack_b = 200;
    func_0x0000d6ac();
    puStack_8 = (undefined1 *)0x5893;
    uStack_a._0_1_ = 2;
    uStack_a._1_1_ = 0;
    uStack_c = 2;
    uStack_b = 0xd;
    uVar8 = 0xd02;
    uStack_e = 0xe9;
    uStack_d = 200;
    func_0x0000d628();
    iStack_16 = 0;
    for (iStack_14 = 1; iStack_14 < 8; iStack_14 = iStack_14 + 1) {
      if (*(char *)(param_1 + iStack_14) != '\0') {
        iStack_16 = iStack_16 + (-(uint)(iStack_14 == 0) & 10) + 0x28;
      }
    }
    if (iStack_16 != 0) {
      iStack_16 = -(iStack_16 / 2 + -0xdc);
      for (iStack_14 = 1; iStack_14 < 8; iStack_14 = iStack_14 + 1) {
        if (*(char *)(param_1 + iStack_14) != '\0') {
          iVar4 = (iStack_14 + -1) * 0x28;
          uStack_11._0_1_ = (undefined1)iVar4;
          uStack_11._1_1_ = (undefined1)((uint)iVar4 >> 8);
          uStack_f = 0;
          uStack_e = 0;
          uStack_d = 0x28;
          uStack_c = 0;
          uStack_b = 0x46;
          uStack_a._0_1_ = 0;
          local_12 = 0;
          piVar7 = &iStack_16;
          puVar6 = (undefined2 *)&local_12;
          uStack_11 = iVar4;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = piVar7;
            piVar7 = piVar7 + 1;
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar3 = *puVar2;
          }
          uStack_1a = 0xc97e;
          func_0x00015f14();
          puStack_8 = (undefined1 *)0x65;
          uStack_a._0_1_ = (undefined1)iStack_16;
          uStack_a._1_1_ = (undefined1)((uint)iStack_16 >> 8);
          uStack_c = 0;
          uStack_b = 0;
          uStack_e = 0xf0;
          uStack_d = 0x15;
          uVar8 = 0x15f0;
          uStack_11._1_1_ = 0x8d;
          uStack_f = 0xc9;
          func_0x00015fca();
          iStack_16 = iStack_16 + CONCAT11(uStack_c,uStack_d);
        }
      }
    }
  }
  iStack_14 = 0;
  iStack_16 = 0;
  while( true ) {
    uStack_c = (undefined1)uVar8;
    uStack_b = (undefined1)((uint)uVar8 >> 8);
    if (7 < iStack_14) break;
    if ((*(char *)(param_1 + iStack_14) != '\0') && ((iStack_14 != 6 || (*(char *)0x9bde == '\0'))))
    {
      cVar1 = *(char *)0x9bde;
      *(char *)0x9bde = *(char *)0x9bde + '\x01';
      if (cVar1 != '\0') {
        puStack_8 = (undefined1 *)0x5899;
        uStack_a = local_de;
        uStack_e = 0xda;
        uStack_d = 0xc9;
        func_0x00002d86();
        puStack_8 = local_de;
        uStack_a._0_1_ = 0xbf;
        uStack_a._1_1_ = 0;
        uStack_c = 0xe7;
        uStack_b = 0xc9;
        func_0x0000ca50();
        puStack_8 = (undefined1 *)0xc87;
        uVar8 = 0xc87;
        uStack_a._0_1_ = 0xef;
        uStack_a._1_1_ = 0xc9;
        func_0x0000cd22();
        local_de[0] = 0;
      }
      puStack_8 = (undefined1 *)*(undefined2 *)(iStack_14 * 2 + 0x58ae);
      uStack_a = local_de;
      uStack_c = (undefined1)uVar8;
      uStack_b = (undefined1)((uint)uVar8 >> 8);
      uVar8 = 0xbf;
      uStack_e = 7;
      uStack_d = 0xca;
      func_0x00002dc6();
    }
    iStack_14 = iStack_14 + 1;
  }
  if (*(char *)0x9bde != '\0') {
    if ((*(byte *)0xbb9c & 0x10) == 0) {
      puStack_8 = (undefined1 *)0x58ac;
      uStack_a = local_de;
      uStack_e = 0x39;
      uStack_d = 0xca;
      func_0x00002d86();
    }
    else {
      puStack_8 = (undefined1 *)0x589b;
      uStack_a = local_de;
      uStack_e = 0x27;
      uStack_d = 0xca;
      func_0x00002d86();
    }
    puStack_8 = local_de;
    uStack_a._0_1_ = 0xbf;
    uStack_a._1_1_ = 0;
    uStack_c = 0x46;
    uStack_b = 0xca;
    func_0x0000ca50();
  }
  return;
}
