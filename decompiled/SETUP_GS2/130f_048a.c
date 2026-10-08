/* SETUP.GS2 130f:048a undefined FUN_130f_048a(void) */
void __cdecl16far FUN_130f_048a(int param_1)

{
  char cVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_111d_02c6();
  iVar2 = 0;
  while( true ) {
    cVar1 = *(char *)(iVar2 + param_1);
    if (cVar1 == '\0') break;
    iVar2 = (int)cVar1;
    FUN_130f_0510(iVar2,cVar1);
    iVar2 = iVar2 + 1;
  }
  return;
}
