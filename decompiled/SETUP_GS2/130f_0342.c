/* SETUP.GS2 130f:0342 undefined FUN_130f_0342(void) */
void __cdecl16far FUN_130f_0342(undefined1 param_1,undefined1 param_2)

{
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  *(undefined1 *)0xd5d = 1;
  *(undefined1 *)0xd61 = param_1;
  *(undefined1 *)0xd60 = param_2;
  FUN_111d_17c8(0x10,0xd5c,0xd5c);
  return;
}
