/* GS.GS2 2741:0110 undefined FUN_2741_0110(void) */
undefined2 __cdecl16far FUN_2741_0110(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 local_4;
  
  uVar1 = FUN_2741_000c(param_1,0);
  iVar2 = FUN_10bf_2e8e(0x2741,uVar1,param_2,param_3,0xffff,&local_4);
  if (iVar2 != 0) {
    FUN_2741_0670(0);
  }
  FUN_2741_00a0(uVar1);
  return local_4;
}
