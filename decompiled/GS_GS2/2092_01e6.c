/* GS.GS2 2092:01e6 undefined FUN_2092_01e6(void) */
int __cdecl16far FUN_2092_01e6(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  FUN_10bf_02c0();
  if (param_1._2_2_ != 0 || (int)param_1 != 0) {
    iVar1 = FUN_2092_0024((int)param_1,param_1._2_2_,param_2,param_3);
    if (iVar1 == 0) {
      for (; param_3 != 0 || param_2 != 0; param_3 = param_3 - (uint)bVar3) {
        uVar2 = param_2;
        if ((-1 < param_3) && ((0 < param_3 || (0x8000 < param_2)))) {
          uVar2 = 0x8000;
        }
        iVar1 = 0;
        uVar4 = 0x10bf;
        FUN_10bf_2c3a(0,0,uVar2);
        bVar3 = param_2 < uVar4;
        param_2 = param_2 - uVar4;
      }
    }
    return iVar1;
  }
  iVar1 = FUN_2092_0282(2);
  return iVar1;
}
