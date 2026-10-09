/* GS.GS2 3000:6f80 undefined FUN_3000_6f80(void) */
void __cdecl16far FUN_3000_6f80(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  *param_1 = *param_1 / 0x18;
  iVar1 = *param_2 / 0x12;
  *param_2 = iVar1;
  uVar2 = *(byte *)(iVar1 * 0x40 + *param_1) & 0x3f;
  *param_2 = -(iVar1 + -0x3f);
  *(undefined2 *)0xc4fe = 0;
  *(undefined2 *)0xc4fc = 0;
  if ((*(byte *)(uVar2 + (int)*(undefined4 *)0xb854) & 2) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x20;
  }
  iVar1 = func_0x0000703a(0xbf,param_1,param_2,0,uVar3,uVar2,0);
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
