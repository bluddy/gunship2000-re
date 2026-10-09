/* GS.GS2 3000:2c36 undefined FUN_3000_2c36(void) */
void __cdecl16far FUN_3000_2c36(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  if (*(int *)((int)param_1 + 0xd) == 2) {
    *(char *)0x2b98 = *(char *)0x2b98 + -1;
    FUN_3000_1206();
  }
  param_1[1] = *(undefined2 *)(*(int *)0xc018 * 0xb + -0x435a);
  uVar1 = *(undefined2 *)(*(int *)0xc018 * 0xb + -0x435c);
  *param_1 = uVar1;
  FUN_3000_2464(param_1 + 6,uVar1,param_1[1],0xffff);
  return;
}
