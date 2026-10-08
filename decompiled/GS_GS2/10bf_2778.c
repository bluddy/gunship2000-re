/* GS.GS2 10bf:2778 undefined FUN_10bf_2778(void) */
undefined2 __cdecl16far FUN_10bf_2778(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  long lVar2;
  long lVar3;
  
  if ((param_1 < 0) || (*(int *)0x6871 <= param_1)) {
    *(undefined2 *)0x6864 = 9;
    uVar1 = 0xffff;
  }
  else {
    lVar2 = FUN_10bf_1b52(0x10bf,param_1,0,0,1);
    if (lVar2 == -1) {
      uVar1 = 0xffff;
    }
    else {
      lVar3 = FUN_10bf_1b52(0x10bf,param_1,0,0,2);
      uVar1 = (undefined2)lVar3;
      if (lVar3 != lVar2) {
        FUN_10bf_1b52(0x10bf,param_1,lVar2,0);
      }
    }
  }
  return uVar1;
}
