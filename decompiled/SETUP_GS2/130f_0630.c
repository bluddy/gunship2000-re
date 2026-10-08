/* SETUP.GS2 130f:0630 undefined FUN_130f_0630(void) */
void __cdecl16far FUN_130f_0630(void)

{
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  *(undefined1 *)0xd5d = 1;
  *(undefined1 *)0xd61 = *(undefined1 *)0xd74;
  *(undefined1 *)0xd60 = *(undefined1 *)0xd6a;
  FUN_111d_17c8(0x10,0xd5c,0xd5c);
  *(undefined1 *)0xd5d = 2;
  *(undefined1 *)0xd5f = 0;
  *(undefined1 *)0xd63 = *(undefined1 *)0xd82;
  *(undefined1 *)0xd62 = *(undefined1 *)0xd7c;
  FUN_111d_17c8(0x10,0xd5c,0xd5c);
  *(undefined2 *)0xd78 = *(undefined2 *)0xd72;
  return;
}
