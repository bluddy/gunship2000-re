/* GS.GS2 10bf:596c undefined FUN_10bf_596c(void) */
void __cdecl16far FUN_10bf_596c(void)

{
  undefined2 unaff_DS;
  char in_SF;
  char in_OF;
  
  FUN_10bf_503a();
  if (in_OF == in_SF) {
    *(int *)0x6ea8 = *(int *)0x6ea8 + 0x18;
  }
  else {
    *(int *)0x6ea8 = *(int *)0x6ea8 + 0x18;
    FUN_10bf_50d6();
  }
  *(int *)0x6ea8 = *(int *)0x6ea8 + -0xc;
  return;
}
