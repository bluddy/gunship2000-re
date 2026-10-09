/* GS.GS2 2000:e126 undefined FUN_2000_e126(void) */
void __cdecl16far FUN_2000_e126(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_2e [4];
  int iStack_2a;
  int iStack_28;
  int iStack_26;
  int iStack_24;
  undefined1 local_22 [16];
  undefined1 local_12 [4];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0xe131;
  func_0x00000eb0();
  *(undefined2 *)0xb832 = 0;
  *(undefined2 *)0xb830 = 0;
  puStack_6 = local_12;
  puStack_8 = (undefined1 *)0x2570;
  puStack_a = (undefined1 *)0xbf;
  uStack_c = 0xe151;
  iVar1 = func_0x0000fcbc();
  if (iVar1 != 0) {
    do {
      iVar1 = (char)uStack_c * 10 + (int)uStack_c._1_1_ + -0x210;
      if ((-1 < iVar1) && (iVar1 < 100)) {
        iStack_26 = 0;
        while ((iStack_26 < *(int *)0xb830 && (*(char *)(iStack_26 * 0x36 + -0x49ec) != iVar1))) {
          iStack_26 = iStack_26 + 1;
        }
        if ((*(int *)0xb830 == iStack_26) &&
           (*(undefined1 *)(*(int *)0xb830 * 0x36 + -0x49ec) = (char)iVar1, *(int *)0xb830 < 9)) {
          *(int *)0xb830 = *(int *)0xb830 + 1;
        }
      }
      puStack_6 = local_12;
      puStack_8 = (undefined1 *)0xf61;
      puStack_a = (undefined1 *)0xe1cf;
      iVar1 = func_0x0000fd8e();
    } while (iVar1 != 0);
    for (iStack_24 = 0; iStack_24 < *(int *)0xb830; iStack_24 = iStack_24 + 1) {
      iVar1 = iStack_24 * 0x36;
      puStack_6 = (undefined1 *)(int)*(char *)(iVar1 + -0x49ec);
      puStack_8 = (undefined1 *)0x257c;
      puStack_a = local_22;
      uStack_c = 0xf61;
      uStack_e = 0xe203;
      func_0x000032d0();
      puStack_6 = local_2e;
      puStack_8 = local_22;
      puStack_a = (undefined1 *)0xbf;
      uStack_c = 0xe213;
      func_0x0000f8aa();
      *(undefined1 *)(iVar1 + -0x49d6) = 0;
      *(undefined1 *)(iVar1 + -0x49eb) = 0;
      puStack_6 = (undefined1 *)0x4;
      puStack_8 = (undefined1 *)0x258b;
      puStack_a = local_2e;
      uStack_c = 0xf61;
      uVar2 = 0xbf;
      uStack_e = 0xe22e;
      iVar1 = func_0x00002e68();
      if (iVar1 == 0) {
        puStack_6 = (undefined1 *)0x2590;
        puStack_8 = (undefined1 *)0xbf;
        puStack_a = (undefined1 *)0xe23d;
        iStack_2a = func_0x0000fada();
        iStack_28 = iStack_2a >> 0xf;
        if (iStack_28 < 0) break;
        puStack_a = (undefined1 *)(iStack_24 * 0x36 + -0x49ec);
        uStack_c = 0xf61;
        uVar2 = 0xf61;
        uStack_e = 0xe25d;
        puStack_8 = (undefined1 *)iStack_2a;
        puStack_6 = (undefined1 *)iStack_28;
        func_0x0000fb4c();
      }
      puStack_8 = (undefined1 *)0xe265;
      puStack_6 = (undefined1 *)uVar2;
      func_0x0000fa1a();
    }
  }
  if (*(int *)0xb830 == 0) {
    puStack_6 = (undefined1 *)0xffff;
    puStack_8 = (undefined1 *)0xf61;
    puStack_a = (undefined1 *)0xe276;
    func_0x00000dc5();
    puStack_6 = (undefined1 *)0x2595;
    puStack_8 = (undefined1 *)0xbf;
    puStack_a = (undefined1 *)0xe281;
    func_0x00014e3e();
  }
  return;
}
