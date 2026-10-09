/* GS.GS2 2000:a8b0 undefined FUN_2000_a8b0(void) */
void __cdecl16far FUN_2000_a8b0(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  uVar2 = 0xbf;
  while( true ) {
    while( true ) {
      func_0x0001560a(uVar2);
      if (*(int *)0xb611 != 0x110) break;
      func_0x0000ed5e(0x14e6);
      uVar2 = 0xdea;
    }
    if ((*(char *)0x9bc0 != '\0') || ((*(int *)0xb611 == 0x1b && ('\x04' < *(char *)0x9bbe))))
    break;
    uVar2 = 0x14e6;
    if ((*(int *)0xb611 == 0xd) && (*(byte *)0x9bbf < 0x79)) {
      *(undefined1 *)0x9bbf = 0x78;
    }
    else if ((*(int *)0xb611 == 0xd) || (*(char *)0x9bbe < '\x05')) {
      uVar2 = *(undefined2 *)0xad2a;
      *(undefined2 *)0xad30 = *(undefined2 *)0xad28;
      *(undefined2 *)0xad32 = uVar2;
      cVar1 = *(char *)0x9bbe;
      *(char *)0xad0a = cVar1;
      *(undefined1 *)0x9bc1 = 1;
      if (cVar1 < '\x05') {
        *(undefined1 *)0xad1b = 1;
      }
      else {
        *(undefined1 *)0xad1b = 3;
      }
      return;
    }
  }
  *(undefined1 *)0x9bbe = 0;
  return;
}
