/* GS2.GS2 2000:bb94 undefined FUN_2000_bb94(void) */
uint __cdecl16far FUN_2000_bb94(int *param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int in_CX;
  int extraout_DX;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  *param_1 = *param_1 + (in_CX >> 1);
  *param_2 = *param_2 + (extraout_DX >> 1);
  pcVar1 = (code *)swi(0x33);
  uVar2 = (*pcVar1)();
  return uVar2 & 3;
}
