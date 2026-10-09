/* GS.GS2 2000:bb60 undefined FUN_2000_bb60(void) */
void __cdecl16far FUN_2000_bb60(char param_1)

{
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  *(undefined1 *)0xe276 = 5;
  *(char *)0x9bcc = param_1;
  *(char *)0xad0c = (-(param_1 == '\0') & 1U) + 3;
  func_0x0000c7c6(0xbf);
  FUN_2000_bb9a();
  FUN_2000_bd0a();
  func_0x0000d2f0(0xc6b);
  *(undefined1 *)0xe276 = 0;
  return;
}
