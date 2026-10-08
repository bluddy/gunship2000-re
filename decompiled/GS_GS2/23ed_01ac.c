/* GS.GS2 23ed:01ac undefined FUN_23ed_01ac(void) */
void __cdecl16far FUN_23ed_01ac(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x23ed;
  FUN_10bf_02c0();
  if (0 < *(int *)0x9542) {
    *(int *)0x9542 = *(int *)0x9542 + -1;
    *(undefined2 *)0x9546 = 0;
    *(undefined2 *)0x9544 = 0;
    return;
  }
  if ((*(int *)0x9544 != 0) || (*(int *)0x9546 != 0)) {
    return;
  }
  local_4 = &local_4;
  iVar1 = FUN_10bf_080e(*(undefined2 *)0x953a,0x1c00);
  if (iVar1 < 1) {
    *(undefined1 *)0xe287 = 0;
    return;
  }
  if ((char)local_4 == 'P') {
    local_4 = (undefined2 **)0x9542;
    FUN_10bf_080e(*(undefined2 *)0x953a,0x1c03);
    *(int *)0x9542 = *(int *)0x9542 + -1;
    *(undefined2 *)0x9546 = 0;
    *(undefined2 *)0x9544 = 0;
    return;
  }
  if ((char)local_4 == 'K') {
    local_4 = (undefined2 **)0x953c;
    FUN_10bf_080e(*(undefined2 *)0x953a,0x1c07);
    *(undefined2 *)0x9546 = 0;
    *(undefined2 *)0x9542 = 0;
    *(undefined2 *)0x9544 = 1;
    return;
  }
  if ((char)local_4 == 'J') {
    local_4 = (undefined2 **)0x9540;
    FUN_10bf_080e(*(undefined2 *)0x953a,0x1c0b,0x953c,0x953e);
    *(undefined2 *)0x9544 = 0;
    *(undefined2 *)0x9542 = 0;
    *(undefined2 *)0x9546 = 1;
  }
  return;
}
