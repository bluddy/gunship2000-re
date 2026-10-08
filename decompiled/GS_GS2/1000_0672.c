/* GS.GS2 1000:0672 undefined FUN_1000_0672(void) */
int __cdecl16far FUN_1000_0672(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = 0;
  while( true ) {
    if (*(int *)0x76b0 <= uStack_4) {
      return 0;
    }
    iVar1 = uStack_4 * 0x26;
    if ((*(char *)(iVar1 + 0x7476) == param_1) && (*(char *)(iVar1 + 0x748f) != '\0')) break;
    uStack_4 = uStack_4 + 1;
  }
  return (int)*(char *)(iVar1 + 0x749a);
}
