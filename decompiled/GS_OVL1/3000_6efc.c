/* GS.GS2 3000:6efc undefined FUN_3000_6efc(void) */
void __cdecl16far FUN_3000_6efc(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  *param_1 = *param_1 / 0x18;
  *param_2 = *param_2 / -0x12 + 0x3f;
  iVar1 = func_0x0000703a(0xbf,param_1,param_2,*(undefined2 *)0xc4fc,*(undefined2 *)0xc4fe);
  if (iVar1 != 0) {
    *param_2 = 0x3f - *param_2;
    iVar1 = *param_1 * 0x18 + 0xc;
    *(int *)(*(int *)0xc018 * 0xb + -0x435c) = iVar1;
    *param_1 = iVar1;
    iVar1 = *param_2 * 0x12 + 9;
    *(int *)(*(int *)0xc018 * 0xb + -0x435a) = iVar1;
    *param_2 = iVar1;
  }
  return;
}
