/* GS.GS2 165c:000e undefined FUN_165c_000e(void) */
void __cdecl16far FUN_165c_000e(undefined2 param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  *(undefined2 *)0xb8be = 0;
  *(undefined2 *)0xa246 = 0;
  *(undefined1 *)0xe27c = param_2;
  iVar1 = (int)*(char *)0xad1a;
  *(int *)0xb8ce = iVar1;
  if (*(char *)0xad1b == '\0') {
    *(int *)0xb8d0 = (int)*(char *)(iVar1 * 0x36 + -0x49d6);
    *(undefined2 *)0xb8d2 = 1;
  }
  else {
    if (*(char *)0xe27c == '\0') {
      iVar1 = (int)*(char *)(iVar1 * 0x36 + -0x49d6);
      if (((*(int *)0xb8ce == 0) && (*(char *)0xad1b == '\x01')) && (iVar1 == 4)) {
        iVar1 = 3;
      }
      if ((*(char *)0xad11 < 0) || (iVar1 <= *(char *)0xad11)) {
        uVar2 = FUN_239c_0086(iVar1);
        *(undefined2 *)0xb8d0 = uVar2;
      }
      else {
        uVar2 = FUN_239c_0086(iVar1 + -1);
        *(undefined2 *)0xb8d0 = uVar2;
        *(int *)0xb8d0 = *(int *)0xb8d0 + (uint)(0x10be < *(int *)0xb8d0);
      }
    }
    else {
      *(int *)0xb8d0 = (int)*(char *)0xad11;
    }
    *(undefined2 *)0xb8d2 = 1;
  }
  FUN_23ac_000c();
  if (*(char *)0xe27c == '\0') {
    do {
      FUN_165c_3868();
    } while (*(char *)0x7a34 != '\0');
  }
  else {
    *(int *)0xb832 = (int)*(char *)0xa26d;
  }
  FUN_2634_000c();
  FUN_2581_0002();
  if (*(char *)0xe27c == '\0') {
    FUN_2163_0ee2();
  }
  *(undefined1 *)0xad1a = *(undefined1 *)0xb8ce;
  return;
}
