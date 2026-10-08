/* GS.GS2 23ed:00dc undefined FUN_23ed_00dc(void) */
undefined2 __cdecl16far FUN_23ed_00dc(void)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_23ed_01ac();
  if (*(int *)0x9544 != 0) {
    *(undefined2 *)0x9544 = 0;
    return *(undefined2 *)0x953c;
  }
  return 0;
}
