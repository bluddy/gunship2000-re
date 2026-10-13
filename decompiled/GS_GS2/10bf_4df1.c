/* GS.GS2 10bf:4df1 undefined FUN_10bf_4df1(void) */
int __cdecl16near FUN_10bf_4df1(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = float_denormal_adjust();
  if ((*(byte *)0x709e & 1) != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}
