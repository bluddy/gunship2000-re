/* GS.GS2 2000:006c undefined FUN_2000_006c(void) */
void __cdecl16far FUN_2000_006c(void)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(int *)0x8702 != 0 || *(int *)0x8700 != 0) {
    FUN_10bf_2ebe(9,*(undefined2 *)0x8700,*(undefined2 *)0x8702);
    *(undefined2 *)0x8702 = 0;
    *(undefined2 *)0x8700 = 0;
  }
  return;
}
