/* GS.GS2 23ed:00fc undefined FUN_23ed_00fc(void) */
undefined2 __cdecl16far FUN_23ed_00fc(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_23ed_01ac();
  if (*(int *)0x9546 == 0) {
    *(undefined2 *)0x9540 = 0;
    *(undefined2 *)0x953e = 0;
    *(undefined2 *)0x953c = 0;
  }
  *(undefined2 *)0x9546 = 0;
  *param_1 = *(undefined2 *)0x953e;
  *param_2 = *(undefined2 *)0x9540;
  return *(undefined2 *)0x953c;
}
