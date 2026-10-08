/* GS2.GS2 137f:31e3 undefined FUN_137f_31e3(void) */
void __cdecl16far FUN_137f_31e3(uint *param_1)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  *(int *)0x1ca7 = (*param_1 & 0x1fff) - 0x1000;
  *(int *)0x1cab = (param_1[2] & 0x1fff) - 0x1000;
  uVar1 = param_1[4];
  *(uint *)0x1ca9 = uVar1;
  *(uint *)0x1cb3 = uVar1;
  FUN_137f_2b6c();
  FUN_137f_3231();
  return;
}
