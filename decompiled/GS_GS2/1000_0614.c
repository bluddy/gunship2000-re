/* GS.GS2 1000:0614 undefined FUN_1000_0614(void) */
void __cdecl16far FUN_1000_0614(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  iVar2 = 0;
  while( true ) {
    if (*(int *)0x76b0 <= iVar2) {
      return;
    }
    iVar1 = iVar2 * 0x26;
    if ((*(char *)(iVar1 + 0x7476) == param_1) && (*(char *)(iVar1 + 0x748f) != '\0')) break;
    iVar2 = iVar2 + 1;
  }
  *(undefined1 *)(iVar1 + 0x749a) = (undefined1)param_2;
  *(undefined1 *)(iVar1 + 0x7488) = *(undefined1 *)(param_2 + iVar1 + 0x7490);
  *(undefined1 *)(iVar1 + 0x749b) = 1;
  *(undefined1 *)(iVar1 + 0x7487) = 1;
  return;
}
