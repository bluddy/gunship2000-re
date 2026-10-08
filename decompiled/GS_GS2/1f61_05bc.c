/* GS.GS2 1f61:05bc undefined FUN_1f61_05bc(void) */
void __cdecl16far FUN_1f61_05bc(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return;
}
