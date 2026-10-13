/* GS.GS2 10bf:4dec undefined FUN_10bf_4dec(void) */
int __cdecl16near FUN_10bf_4dec(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = float_to_fixed2();
  if ((*(byte *)0x709e & 1) != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}
