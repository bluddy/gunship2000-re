/* GS.GS2 2000:bd0a undefined FUN_2000_bd0a(void) */
void __cdecl16far FUN_2000_bd0a(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  uVar1 = 0xbf;
  while( true ) {
    do {
      while( true ) {
        func_0x0001560a(uVar1);
        if (*(int *)0xb611 != 0x110) break;
        func_0x0000ed5e(0x14e6);
        uVar1 = 0xdea;
      }
      uVar1 = 0x14e6;
    } while (*(int *)0xb611 == 0);
    if (*(char *)0x9bcd != '\0') break;
    FUN_2000_befc();
    uVar1 = 0xd02;
    func_0x0000d5aa(0x14e6,0x880,0x86e);
  }
  return;
}
