/* GS.GS2 2000:bd0c undefined FUN_2000_bd0c(void) */
void __cdecl16far FUN_2000_bd0c(void)

{
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  *(char *)0x98ae = *(char *)0x98ae + '\x01';
  if ('\x03' < *(char *)0x98ae) {
    *(undefined1 *)0x98ae = 0;
  }
  FUN_2000_bc50((int)*(char *)0x98ae);
  FUN_2000_bd34();
  return;
}
