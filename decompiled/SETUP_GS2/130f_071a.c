/* SETUP.GS2 130f:071a undefined FUN_130f_071a(void) */
void __cdecl16far FUN_130f_071a(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  *(undefined1 *)0xd5d = 0x10;
  *(undefined1 *)0xd5c = 3;
  *(char *)0xd5e = '\x01' - (param_1 == 0);
  FUN_111d_17c8(0x10,0xd5c,0xd5c);
  return;
}
