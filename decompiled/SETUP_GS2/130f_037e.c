/* SETUP.GS2 130f:037e undefined FUN_130f_037e(void) */
void __cdecl16far FUN_130f_037e(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  *(undefined1 *)0xd5d = 2;
  *(undefined1 *)0xd5f = 0;
  *(undefined2 *)0xd70 = param_2;
  *(undefined1 *)0xd63 = (char)param_2;
  *(undefined2 *)0xd6e = param_1;
  *(undefined2 *)0xd7a = param_1;
  *(undefined1 *)0xd62 = (char)param_1;
  FUN_111d_17c8(0x10,0xd5c,0xd5c);
  return;
}
