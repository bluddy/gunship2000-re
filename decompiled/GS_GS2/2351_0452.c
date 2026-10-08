/* GS.GS2 2351:0452 undefined FUN_2351_0452(void) */
void __cdecl16far FUN_2351_0452(void)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  thunk_EXT_FUN_0000_0000
            (0x10bf,0x892,0x130,0xb8,*(undefined2 *)0x9524,*(undefined2 *)0x9512,0x880,
             *(int *)0x9502 + *(int *)0x9526,*(int *)0x9504 + *(int *)0x9528);
  *(int *)0x94fa = *(int *)0x9502 + *(int *)0x9526;
  *(int *)0x94fc = *(int *)0x9504 + *(int *)0x9528;
  *(int *)0x94fe = *(int *)0x9502 + *(int *)0x9524 + *(int *)0x9526 + -1;
  *(int *)0x9500 = *(int *)0x9504 + *(int *)0x9512 + *(int *)0x9528 + -1;
  return;
}
