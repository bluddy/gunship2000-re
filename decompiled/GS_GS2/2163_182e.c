/* GS.GS2 2163:182e undefined FUN_2163_182e(void) */
undefined2 __cdecl16far FUN_2163_182e(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(char *)0x93d4 != '\0') {
    if (((*(char *)0x93d7 == *(char *)0x93d6) ||
        ((int)*(char *)0x93d6 < (int)(uint)(*(char *)0x93d4 == '\x01'))) ||
       ('\x05' < *(char *)0x93d6)) {
      *(undefined1 *)0x93d8 = 0;
    }
    else {
      *(undefined1 *)0x93d8 = 1;
    }
    *(char *)0x93df = *(char *)0x93df + '\x01';
    if ((*(byte *)0x93df & 3) == 0) {
      if ((*(byte *)0x93df & 4) == 0) {
        uVar1 = 0xf;
      }
      else {
        uVar1 = FUN_2163_180e((int)*(char *)0x93d7);
      }
      FUN_2163_1924((int)*(char *)0x93d7,*(char *)0x93d4 + -1,uVar1);
      if (*(char *)0x93d8 != '\0') {
        if ((*(byte *)0x93df & 4) == 0) {
          uVar1 = 0xf;
        }
        else {
          uVar1 = FUN_2163_180e((int)*(char *)0x93d6);
        }
        FUN_2163_1924((int)*(char *)0x93d6,*(char *)0x93d4 + -1,uVar1);
      }
      *(undefined1 *)0xb613 = 1;
    }
  }
  return 0;
}
