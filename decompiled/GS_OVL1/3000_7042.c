/* GS.GS2 3000:7042 undefined FUN_3000_7042(void) */
void __cdecl16far FUN_3000_7042(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar1 = FUN_3000_6d1c(*param_1,*param_2,0xffff,0xffff);
  *param_1 = *(undefined2 *)(iVar1 * 0xb + -0x435c);
  *param_2 = *(undefined2 *)(iVar1 * 0xb + -0x435a);
  *(int *)0xc500 = iVar1;
  *(int *)0xc502 = iVar1 >> 0xf;
  return;
}
