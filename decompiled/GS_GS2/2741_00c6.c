/* GS.GS2 2741:00c6 undefined FUN_2741_00c6(void) */
undefined2 __cdecl16far FUN_2741_00c6(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 local_4;
  
  uVar1 = FUN_2741_000c(param_1,0);
  puVar3 = &local_4;
  iVar2 = FUN_10bf_2e8e(0x2741,uVar1,param_2);
  if (iVar2 != 0) {
    FUN_2741_0670(0,puVar3);
  }
  FUN_2741_00a0(uVar1);
  return local_4;
}
