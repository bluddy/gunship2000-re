/* GS.GS2 1dea:1048 undefined FUN_1dea_1048(void) */
int __cdecl16far FUN_1dea_1048(int param_1)

{
  int iVar1;
  int local_6;
  int iStack_4;
  
  iStack_4 = 0x1dea;
  local_6 = -0x110d;
  FUN_10bf_02c0();
  iStack_4 = param_1 >> 0xf;
  local_6 = param_1;
  iVar1 = FUN_2092_0024(&local_6);
  if (iVar1 != 0) {
    iStack_4 = 0xfffd;
    local_6 = 0x2092;
    FUN_10bf_01d5();
  }
  return local_6;
}
