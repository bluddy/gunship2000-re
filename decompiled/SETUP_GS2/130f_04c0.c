/* SETUP.GS2 130f:04c0 undefined FUN_130f_04c0(void) */
void __cdecl16far FUN_130f_04c0(char param_1,int param_2)

{
  char cVar1;
  undefined2 unaff_DS;
  undefined2 uStack_6;
  
  FUN_111d_02c6();
  uStack_6 = 0;
  while( true ) {
    cVar1 = *(char *)(uStack_6 + param_2);
    if (cVar1 == '\0') break;
    if (cVar1 == param_1) {
      cVar1 = *(char *)(uStack_6 + 1 + param_2);
      FUN_130f_000e();
    }
    else {
      FUN_130f_0510();
    }
    uStack_6 = (int)cVar1;
    uStack_6 = uStack_6 + 1;
  }
  return;
}
