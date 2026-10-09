/* GS.GS2 2000:c556 undefined FUN_2000_c556(void) */
void __cdecl16far FUN_2000_c556(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  uVar1 = 0xbf;
  do {
    while( true ) {
      func_0x0001560a(uVar1);
      if (*(int *)0xb611 != 0x110) break;
      func_0x0000ed5e(0x14e6);
      uVar1 = 0xdea;
    }
    uVar1 = 0x14e6;
  } while (*(int *)0xb611 == 0);
  *(byte *)0xad0b = *(byte *)0xad0b & 0xf3;
  *(char *)0xad0b = *(char *)0xad0b + (*(byte *)0xad0b & 3) * '\x04';
  return;
}
