/* GS.GS2 1b63:02a6 undefined FUN_1b63_02a6(void) */
void __cdecl16far FUN_1b63_02a6(void)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(int *)0x820a != 0 || *(int *)0x8208 != 0) {
    FUN_1dea_1086(*(undefined2 *)0x8208,*(undefined2 *)0x820a);
    *(undefined2 *)0x820a = 0;
    *(undefined2 *)0x8208 = 0;
  }
  *(undefined2 *)0x8206 = 0;
  return;
}
