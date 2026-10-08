/* SETUP.GS2 1000:0028 undefined FUN_1000_0028(void) */
void __cdecl16far FUN_1000_0028(int param_1,int param_2)

{
  char cVar1;
  undefined2 unaff_DS;
  int iStack_8;
  int iVar2;
  
  FUN_111d_02c6();
  *(undefined1 *)0x1d64 = 0;
  for (iVar2 = 1; iVar2 < param_1; iVar2 = iVar2 + 1) {
    cVar1 = *(char *)*(undefined2 *)(iVar2 * 2 + param_2);
    if ((cVar1 == '/') || (cVar1 == '-')) {
      for (iStack_8 = 1; cVar1 = *(char *)(*(int *)(iVar2 * 2 + param_2) + iStack_8), cVar1 != '\0';
          iStack_8 = iStack_8 + 1) {
        if ((cVar1 == 'T') || (cVar1 == 't')) {
          *(undefined1 *)0x1d64 = 1;
        }
        else {
          iStack_8 = 0x92;
          FUN_1000_010a();
        }
      }
    }
    else {
      FUN_1000_010a();
    }
  }
  return;
}
