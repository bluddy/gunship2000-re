/* GS.GS2 2000:c8c2 undefined FUN_2000_c8c2(void) */
void __cdecl16far FUN_2000_c8c2(void)

{
  undefined2 unaff_DS;
  byte local_42 [10];
  undefined1 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 local_33 [17];
  int iStack_22;
  int iStack_20;
  uint uStack_1e;
  int iStack_1c;
  char local_1a [2];
  uint uStack_18;
  int iStack_16;
  undefined1 local_14 [6];
  undefined1 *puStack_e;
  undefined2 uStack_c;
  byte *pbStack_a;
  int iStack_8;
  undefined1 *puStack_6;
  int iVar1;
  
  puStack_6 = (undefined1 *)0xc8cd;
  func_0x00000eb0();
  puStack_6 = (undefined1 *)0xc8d1;
  FUN_2000_d2a2();
  puStack_6 = (undefined1 *)0xc8d5;
  FUN_2000_d404();
  puStack_6 = (undefined1 *)0xc8da;
  func_0x00012b76();
  puStack_6 = (undefined1 *)0x0;
  iStack_8 = 0xbb9c;
  pbStack_a = (byte *)0x1163;
  uStack_c = 0xc8e6;
  func_0x0000382a();
  puStack_6 = (undefined1 *)0xc8ed;
  FUN_2000_ca06();
  if (*(char *)0xad05 != '\0') {
    puStack_6 = (undefined1 *)0xbf;
    iStack_8 = 0xc900;
    func_0x0000b3f0();
    puStack_6 = local_14;
    iStack_8 = 0xb1d;
    pbStack_a = (byte *)0xc90f;
    iStack_16 = func_0x000012cc();
    if (iStack_16 != 0) {
      puStack_6 = (undefined1 *)0x1;
      iStack_8 = 1;
      pbStack_a = (byte *)local_1a;
      uStack_c = 0xbf;
      puStack_e = (undefined1 *)0xc92a;
      func_0x0000131a();
      iVar1 = iStack_16;
      puStack_6 = (undefined1 *)0x1;
      iStack_8 = 1;
      pbStack_a = &stack0xfffc;
      uStack_c = 0xbf;
      puStack_e = (undefined1 *)0xc93d;
      func_0x0000131a();
      for (iStack_1c = 0; iStack_1c < (char)(byte)iVar1; iStack_1c = iStack_1c + 1) {
        uStack_1e = local_1a[0] + iStack_1c;
        uStack_18 = (uint)*(char *)((int)uStack_1e / 2 + -0x4446);
        if ((uStack_1e & 1) != 0) {
          uStack_18 = (int)uStack_18 >> 4;
        }
        if ((uStack_18 & 0xf) != 0) {
          iStack_22 = iStack_1c * 0x20 + 2;
          iStack_20 = iStack_22 >> 0xf;
          pbStack_a = (byte *)iStack_16;
          uStack_c = 0xbf;
          puStack_e = (undefined1 *)0xc99d;
          iStack_8 = iStack_22;
          puStack_6 = (undefined1 *)iStack_20;
          func_0x000030da();
          puStack_6 = (undefined1 *)0x1;
          iStack_8 = 0x20;
          pbStack_a = local_42;
          uStack_c = 0xbf;
          puStack_e = (undefined1 *)0xc9b0;
          func_0x0000131a();
          local_42[0] = local_42[0] & 199;
          uStack_38 = 0x1d;
          uStack_36 = uStack_34;
          uStack_35 = uStack_34;
          puStack_6 = local_33;
          iStack_8 = 0xbf;
          pbStack_a = (byte *)0xc9d0;
          func_0x00002dc6();
          puStack_6 = (undefined1 *)iStack_20;
          iStack_8 = iStack_22;
          pbStack_a = (byte *)iStack_16;
          uStack_c = 0xbf;
          puStack_e = (undefined1 *)0xc9e3;
          func_0x000030da();
          iVar1 = iStack_16;
          puStack_6 = (undefined1 *)0x1;
          iStack_8 = 0x20;
          pbStack_a = local_42;
          uStack_c = 0xbf;
          puStack_e = (undefined1 *)&SUB_0000_c9f6;
          func_0x00001418();
        }
      }
      puStack_6 = (undefined1 *)0xbf;
      iStack_8 = 0xca04;
      func_0x000011e6();
    }
  }
  return;
}
