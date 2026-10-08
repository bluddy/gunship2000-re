/* GS.GS2 2351:016c undefined FUN_2351_016c(void) */
void __cdecl16far FUN_2351_016c(void)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(int *)0x950c == 0) {
    *(undefined2 *)0x94fa = 0x140;
    *(undefined2 *)0x94fc = 200;
    *(undefined2 *)0x94fe = 0xffff;
    *(undefined2 *)0x9500 = 0xffff;
    FUN_2351_0258(0);
    *(undefined2 *)0x950c = 1;
  }
  FUN_2351_0408();
  return;
}
