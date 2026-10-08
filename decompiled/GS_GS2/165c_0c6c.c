/* GS.GS2 165c:0c6c undefined FUN_165c_0c6c(void) */
byte __cdecl16far
FUN_165c_0c6c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = FUN_10bf_2efc(param_3,param_4,0x2000,0);
  iVar2 = FUN_10bf_2efc(param_1,param_2,0x2000,0);
  return *(byte *)(iVar2 + iVar1 * -0x40 + 0xfc0) & 0x80;
}
