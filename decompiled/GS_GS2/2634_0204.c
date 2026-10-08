/* GS.GS2 2634:0204 undefined FUN_2634_0204(void) */
int __cdecl16far FUN_2634_0204(int param_1)

{
  undefined2 unaff_DS;
  int iVar1;
  
  FUN_10bf_02c0();
  iVar1 = 0;
  while( true ) {
    if (*(int *)0xbc3c <= iVar1) {
      return -1;
    }
    if (*(char *)(iVar1 * 0xd6 + (int)*(undefined4 *)0xbc38) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
