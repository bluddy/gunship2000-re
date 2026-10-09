/* GS.GS2 2000:a7ce undefined FUN_2000_a7ce(void) */
void FUN_2000_a7ce(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  uVar1 = 0xbf;
  while( true ) {
    while( true ) {
      func_0x0001544e(uVar1);
      if (*(int *)0xb611 == 0xd) break;
      uVar1 = 0x14e6;
      if (*(int *)0xb611 == 0x110) {
        func_0x0000ed38(0x14e6);
        uVar1 = 0xdea;
      }
    }
    if (*(int *)0xb60f - 1U < 9) break;
    func_0x0000edda(0x14e6,0x21);
    uVar1 = 0xdea;
  }
                    /* WARNING: Could not emulate address calculation at 0x0002a9af */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)((*(int *)0xb60f - 1U) * 2 + 0x224))();
  return;
}
