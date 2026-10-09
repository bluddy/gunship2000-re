/* GS.GS2 2000:c09a undefined FUN_2000_c09a(void) */
undefined2 __cdecl16far FUN_2000_c09a(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  uVar1 = 0xbf;
  func_0x00000eb0();
  *(undefined1 *)0x988e = 1;
  while( true ) {
    FUN_2000_c0f0();
    FUN_2000_c328(uVar1);
    FUN_2000_d70c();
    func_0x000135e2(uVar1);
    iVar2 = 0x1351;
    uVar1 = 0xd02;
    func_0x0000d2f0();
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 == 2) break;
    FUN_2000_c0f0();
  }
  func_0x0001634c(0xd02);
  func_0x00015812(0x1634);
  func_0x00012512(0x1581);
  return 1;
}
