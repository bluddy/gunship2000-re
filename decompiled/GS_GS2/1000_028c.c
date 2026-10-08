/* GS.GS2 1000:028c undefined FUN_1000_028c(void) */
void __cdecl16far FUN_1000_028c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iStack_6;
  int iStack_4;
  
  FUN_10bf_02c0();
  iStack_6 = *(int *)0x76b0;
  iVar2 = 0x10bf;
  while (iStack_6 = iStack_6 + -1, -1 < iStack_6) {
    iVar1 = iStack_6 * 0x26;
    iStack_4 = iVar1 + 0x7476;
    iVar3 = iVar2;
    if (*(int *)(iVar1 + 0x748d) == 0 && *(int *)(iVar1 + 0x748b) == 0) {
      if (((*(char *)(iVar1 + 0x748f) != '\0') || (*(char *)(iVar1 + 0x7487) == '\0')) ||
         (*(char *)(iVar1 + 0x749b) != '\0')) {
        iStack_4 = *(int *)(iVar1 + 0x7483);
        iStack_6 = *(int *)(iVar1 + 0x7481);
        iVar3 = 0x2658;
        thunk_EXT_FUN_0000_0000
                  (iVar2,0x892,
                   ((int)*(char *)(iVar1 + 0x7488) / *(int *)(iVar1 + 0x747f)) *
                   *(int *)(iVar1 + 0x747b) + *(int *)(iVar1 + 0x7477),
                   ((int)*(char *)(iVar1 + 0x7488) % *(int *)(iVar1 + 0x747f)) *
                   *(int *)(iVar1 + 0x747d) + *(int *)(iVar1 + 0x7479),
                   *(undefined2 *)(iVar1 + 0x747b),*(undefined2 *)(iVar1 + 0x747d),0x880);
      }
    }
    else {
      (*(code *)*(undefined2 *)(iVar1 + 0x748b))();
      iStack_6 = iVar2;
    }
    *(undefined1 *)(iStack_4 + 0x14) = 0;
    iVar2 = iVar3;
    if (*(char *)(iStack_4 + 0x19) != '\0') {
      *(undefined1 *)(iStack_4 + 0x11) = 1;
    }
  }
  return;
}
