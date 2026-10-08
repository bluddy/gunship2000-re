/* GS.GS2 2741:000c undefined FUN_2741_000c(void) */
undefined2 __cdecl16far FUN_2741_000c(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_1c [20];
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 local_4;
  
  iVar1 = FUN_2741_072a(param_1,local_1c);
  if (iVar1 != 0) {
    iVar1 = FUN_2741_085c(*(undefined2 *)0x64ca,uStack_8,uStack_6);
    if (iVar1 != 0) {
      FUN_2741_0670(param_1);
    }
    return *(undefined2 *)0x64ca;
  }
  iVar1 = FUN_10bf_2e76(0x2741,param_1,param_2,&local_4);
  if (iVar1 != 0) {
    FUN_2741_0670(param_1);
  }
  return local_4;
}
