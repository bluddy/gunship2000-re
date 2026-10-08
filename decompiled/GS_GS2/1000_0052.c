/* GS.GS2 1000:0052 undefined FUN_1000_0052(void) */
void __cdecl16far FUN_1000_0052(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iStack_6;
  
  uVar2 = 0x10bf;
  FUN_10bf_02c0();
  iStack_6 = 0;
  do {
    if (*(int *)0x76b0 <= iStack_6) {
      return;
    }
    iVar1 = iStack_6 * 0x26;
    if ((*(char *)(iVar1 + 0x7487) == '\0') || (*(char *)(iVar1 + 0x749b) != '\0')) {
      if (*(char *)(iVar1 + 0x7487) == '\0') {
        *(char *)(iVar1 + 0x7489) = *(char *)(iVar1 + 0x7489) + '\x01';
        if (*(char *)(iVar1 + 0x7489) < *(char *)(iVar1 + 0x7486)) {
          return;
        }
        *(undefined1 *)(iVar1 + 0x7489) = 0;
        *(char *)(iVar1 + 0x7488) = *(char *)(iVar1 + 0x7488) + '\x01';
        if (*(char *)(iVar1 + 0x7485) <= *(char *)(iVar1 + 0x7488)) {
          *(undefined1 *)(iVar1 + 0x7488) = 0;
        }
      }
      if (*(int *)(iVar1 + 0x748d) == 0 && *(int *)(iVar1 + 0x748b) == 0) {
        iStack_6 = *(int *)(iVar1 + 0x7483);
        uVar3 = 0x2658;
        thunk_EXT_FUN_0000_0000
                  (uVar2,0x892,
                   ((int)*(char *)(iVar1 + 0x7488) / *(int *)(iVar1 + 0x747f)) *
                   *(int *)(iVar1 + 0x747b) + *(int *)(iVar1 + 0x7477),
                   ((int)*(char *)(iVar1 + 0x7488) % *(int *)(iVar1 + 0x747f)) *
                   *(int *)(iVar1 + 0x747d) + *(int *)(iVar1 + 0x7479),
                   *(undefined2 *)(iVar1 + 0x747b),*(undefined2 *)(iVar1 + 0x747d),0x880,
                   *(undefined2 *)(iVar1 + 0x7481));
      }
      else {
        (*(code *)*(undefined2 *)(iVar1 + 0x748b))(uVar2);
        uVar3 = uVar2;
        iStack_6 = iVar1 + 0x7476;
      }
      *(undefined1 *)(iVar1 + 0x748a) = 1;
      uVar2 = uVar3;
      if ((*(char *)(iVar1 + 0x748f) != '\0') &&
         (*(char *)(iVar1 + 0x7476 + (int)*(char *)(iVar1 + 0x749a) + 0x1a) ==
          *(char *)(iVar1 + 0x7488))) {
        *(undefined1 *)(iVar1 + 0x7487) = 1;
      }
    }
    iStack_6 = iStack_6 + 1;
  } while( true );
}
