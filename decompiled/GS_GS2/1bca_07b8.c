/* GS.GS2 1bca:07b8 undefined FUN_1bca_07b8(void) */
void __cdecl16far FUN_1bca_07b8(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  *(undefined1 *)0x822b = 0x10;
  *(undefined1 *)0x822a = 3;
  *(char *)0x822c = '\x01' - (param_1 == 0);
  FUN_10bf_246a(0x10,0x822a,0x822a);
  return;
}
