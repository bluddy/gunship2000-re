/* SETUP.GS2 1000:0ba6 undefined FUN_1000_0ba6(void) */
void __cdecl16far FUN_1000_0ba6(undefined2 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_111d_02c6();
  for (iVar3 = 0; iVar3 < 0xc; iVar3 = iVar3 + 1) {
    do {
      uVar1 = FUN_111d_1c54(0x3da);
    } while ((uVar1 & 8) != 0);
    do {
      uVar1 = FUN_111d_1c54(0x3da);
    } while ((uVar1 & 8) == 0);
    iVar3 = param_2;
    iVar2 = FUN_1000_0c06(0,0,param_1);
    if (iVar2 != 0) {
      iVar3 = 0;
    }
  }
  return;
}
