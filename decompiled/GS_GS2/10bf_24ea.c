/* GS.GS2 10bf:24ea undefined FUN_10bf_24ea(void) */
undefined2 __cdecl16far FUN_10bf_24ea(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int in_DX;
  undefined2 unaff_DS;
  bool bVar2;
  long lVar3;
  
  if ((((*(byte *)(param_1 + 6) & 0x83) == 0) || (2 < param_4)) || (param_4 < 0)) {
    *(undefined2 *)0x6864 = 0x16;
  }
  else {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xef;
    if (param_4 == 1) {
      uVar1 = FUN_10bf_256a(param_1);
      bVar2 = CARRY2(param_2,uVar1);
      param_2 = param_2 + uVar1;
      param_3 = param_3 + in_DX + (uint)bVar2;
      param_4 = 0;
    }
    FUN_10bf_0cf0(param_1);
    if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc;
    }
    lVar3 = FUN_10bf_1b52(0x10bf,*(undefined1 *)(param_1 + 7),param_2,param_3,param_4);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return 0xffff;
}
