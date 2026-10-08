/* GS.GS2 23ed:0146 undefined FUN_23ed_0146(void) */
void __cdecl16far FUN_23ed_0146(void)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(char *)0xe287 == '\x01') {
    FUN_23ed_0184();
    FUN_10bf_05f6(*(undefined2 *)0x953a);
    *(undefined1 *)0xe287 = 0;
    return;
  }
  if (*(char *)0xe287 == '\x02') {
    FUN_10bf_05f6(*(undefined2 *)0x953a);
  }
  *(undefined1 *)0xe287 = 0;
  return;
}
