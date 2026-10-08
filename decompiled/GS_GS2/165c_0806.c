/* GS.GS2 165c:0806 undefined FUN_165c_0806(void) */
void __cdecl16far FUN_165c_0806(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = FUN_10bf_06dc(*(undefined2 *)0x58,0xe6);
  if (iVar1 != 0) {
    FUN_10bf_072a(0xa280,0x20,0x50,iVar1);
    FUN_10bf_05f6(iVar1);
    return;
  }
  FUN_10bf_2c3a(0xa280,0,0xa00);
  return;
}
