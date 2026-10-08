/* SETUP.GS2 1000:077e undefined FUN_1000_077e(void) */
void __cdecl16far FUN_1000_077e(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  if (param_1 == 0) {
    *(undefined1 *)(*(int *)0x659 + 0x15) = 0;
    *(undefined1 *)0x594 = 0;
    *(undefined2 *)0x1d62 = 0;
    *(undefined2 *)(*(int *)0x659 + 0x16) = 0;
    return;
  }
  *(undefined1 *)(*(int *)0x659 + 0x15) = 1;
  *(bool *)(*(int *)0x595 + 0x26) = param_1 == 1;
  *(bool *)(*(int *)0x595 + 0x37) = param_1 == 1;
  if (*(char *)(*(int *)0x595 + *(int *)0x1d62 * 0x11 + 4) == '\0') {
    *(undefined1 *)0x594 = 0;
    *(undefined2 *)0x1d62 = 0;
    *(undefined2 *)(*(int *)0x659 + 0x16) = 0;
  }
  return;
}
