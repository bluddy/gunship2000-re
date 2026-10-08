/* GS.GS2 10bf:5990 undefined FUN_10bf_5990(void) */
void __cdecl16far FUN_10bf_5990(void)

{
  undefined2 unaff_DS;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  
  FUN_10bf_503a();
  if ((bool)in_ZF || in_OF != in_SF) {
    *(int *)0x6ea8 = *(int *)0x6ea8 + 0x18;
  }
  else {
    *(int *)0x6ea8 = *(int *)0x6ea8 + 0x18;
    FUN_10bf_50d6();
  }
  *(int *)0x6ea8 = *(int *)0x6ea8 + -0xc;
  return;
}
