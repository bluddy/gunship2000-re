/* GS.GS2 2000:ee54 undefined FUN_2000_ee54(void) */
void __cdecl16far FUN_2000_ee54(int *param_1)

{
  undefined2 unaff_DS;
  undefined1 local_a6 [148];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  
  func_0x00000eb0();
  if (param_1[1] != 0 || *param_1 != 0) {
    puStack_a = (undefined1 *)0x3;
    uStack_c = 0xe5;
    uStack_e = 0x880;
    uStack_10 = 0xbf;
    uStack_12 = 0xee81;
    func_0x00016a62();
    puStack_a = (undefined1 *)0x4;
    uStack_c = 0xe8;
    uStack_e = 3;
    uStack_10 = 0x1658;
    uStack_12 = 0xee96;
    func_0x0000da72();
    puStack_a = (undefined1 *)0xe9;
    uStack_c = *(undefined2 *)((int)param_1 + 9);
    uStack_e = 0xd02;
    uStack_10 = 0xeead;
    func_0x00010ff2();
    puStack_a = (undefined1 *)0x6;
    uStack_c = 0xe9;
    uStack_e = 0x880;
    uStack_10 = 0x10e4;
    uStack_12 = 0xeec3;
    func_0x0000c8c0();
    func_0x0000c980();
    puStack_a = (undefined1 *)0xeed9;
    func_0x0000ca12();
    func_0x0000c928();
    puStack_a = local_a6;
    uStack_c = 0xc87;
    uStack_e = 0xeef9;
    func_0x00003d8c();
    func_0x0000c8aa();
    if (param_1[3] != 0 || param_1[2] != 0) {
      func_0x0000c928();
      puStack_a = (undefined1 *)0xef2a;
      func_0x0000ca12();
      puStack_a = local_a6;
      uStack_c = 0xc87;
      uStack_e = 0xef41;
      func_0x00003d8c();
      func_0x0000ca50();
    }
    FUN_2000_db8e();
  }
  return;
}
