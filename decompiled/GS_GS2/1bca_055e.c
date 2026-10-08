/* GS.GS2 1bca:055e undefined FUN_1bca_055e(void) */
void __cdecl16far FUN_1bca_055e(char param_1,int param_2)

{
  char cVar1;
  undefined2 unaff_DS;
  undefined2 uStack_6;
  
  FUN_10bf_02c0();
  uStack_6 = 0;
  while( true ) {
    cVar1 = *(char *)(uStack_6 + param_2);
    if (cVar1 == '\0') break;
    if (cVar1 == param_1) {
      cVar1 = *(char *)(uStack_6 + 1 + param_2);
      FUN_1bca_00ac();
    }
    else {
      FUN_1bca_05ae();
    }
    uStack_6 = (int)cVar1;
    uStack_6 = uStack_6 + 1;
  }
  return;
}
