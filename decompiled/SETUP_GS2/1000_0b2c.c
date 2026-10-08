/* SETUP.GS2 1000:0b2c undefined FUN_1000_0b2c(void) */
undefined2 __cdecl16far FUN_1000_0b2c(undefined2 param_1,int param_2,undefined2 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_111d_02c6();
  FUN_1000_0c06(0,0,param_3);
  do {
    iVar2 = FUN_12fb_00f0();
    if (iVar2 == 0x1b) {
      return 1;
    }
    iVar2 = param_2;
    iVar4 = param_4;
    iVar3 = FUN_1000_0c06(param_1,param_2,param_3);
    if ((iVar3 == 0) && (iVar2 != 0xd)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  } while ((!bVar1) || (iVar4 != 0));
  return 0;
}
