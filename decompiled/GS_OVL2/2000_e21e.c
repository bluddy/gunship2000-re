/* GS.GS2 2000:e21e undefined FUN_2000_e21e(void) */
void __cdecl16far FUN_2000_e21e(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  uVar1 = *(uint *)((int)*(undefined4 *)0xbc38 + *(int *)0x98fe * 0xd6 + 4);
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 2) == 0) {
      *(undefined2 *)0x9ba0 = 0x9a71;
    }
    else {
      *(undefined2 *)0x9ba0 = 0x9a69;
    }
  }
  else {
    *(undefined2 *)0x9ba0 = 0x9a73;
  }
  func_0x00003d8c();
  FUN_2000_eda8();
  func_0x0000c8c0();
  func_0x0000c980();
  func_0x0000c928();
  func_0x0000c9a6();
  func_0x0000ca12();
  if ((uVar1 & 0x100) == 0) {
    func_0x0000ca66();
    FUN_2000_ec42();
    FUN_2000_ec42();
    FUN_2000_ec42();
    FUN_2000_ec42();
  }
  else {
    func_0x0000ca66();
    FUN_2000_ec42();
    FUN_2000_ec42();
    FUN_2000_ec42();
    FUN_2000_ec42();
  }
  FUN_2000_ee40();
  FUN_2000_ef58();
  func_0x0000c87a();
  return;
}
