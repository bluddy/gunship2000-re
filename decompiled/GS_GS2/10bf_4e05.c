/* GS.GS2 10bf:4e05 undefined FUN_10bf_4e05(void) */
void __cdecl16far FUN_10bf_4e05(void)

{
  int iVar1;
  undefined2 in_CX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  
  FUN_10bf_4e3e();
  *(byte *)0x709e = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  *(undefined1 **)0x70a8 = &stack0xfffa;
  iVar1 = *(int *)0x6ea8;
  *(int *)0x6ea8 = iVar1 + -0xc;
  if (*(char *)(iVar1 + -2) == '\x03') {
    FUN_10bf_4dec();
  }
  else {
    FUN_10bf_4df1(in_CX,in_BX);
  }
  return;
}
