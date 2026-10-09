/* GS.GS2 2000:c14e undefined FUN_2000_c14e(void) */
void __cdecl16far FUN_2000_c14e(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  func_0x000156ea(0xbf,0x51c4,3,7);
  uVar1 = 0x14e6;
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
    if (0x77 < *(byte *)0x9bd5) break;
    *(undefined1 *)0x9bd5 = 0x78;
  }
  return;
}
