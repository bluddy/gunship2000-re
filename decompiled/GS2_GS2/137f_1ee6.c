/* GS2.GS2 137f:1ee6 undefined FUN_137f_1ee6(void) */
uint __cdecl16far FUN_137f_1ee6(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - param_3;
  iVar2 = (param_2 - param_4) - (uint)(param_1 < param_3);
  if (iVar2 != (int)uVar1 >> 0xf) {
    uVar1 = iVar2 >> 0xf ^ 0x7ff0;
  }
  return uVar1 | 1;
}
