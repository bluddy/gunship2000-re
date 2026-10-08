/* GS.GS2 1bca:0528 undefined FUN_1bca_0528(void) */
void __cdecl16far FUN_1bca_0528(int param_1)

{
  char cVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  iVar2 = 0;
  while( true ) {
    cVar1 = *(char *)(iVar2 + param_1);
    if (cVar1 == '\0') break;
    iVar2 = (int)cVar1;
    FUN_1bca_05ae(iVar2,cVar1);
    iVar2 = iVar2 + 1;
  }
  return;
}
