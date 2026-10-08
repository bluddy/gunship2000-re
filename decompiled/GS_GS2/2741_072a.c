/* GS.GS2 2741:072a undefined FUN_2741_072a(void) */
undefined2 __cdecl16far FUN_2741_072a(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined1 *puVar5;
  int local_6;
  undefined1 local_4 [2];
  
  if (*(int *)0x64ca != -1) {
    iVar4 = FUN_2741_085c(*(undefined2 *)0x64ca,0,0);
    if (iVar4 != 0) {
      FUN_2741_0670(0);
    }
    puVar5 = local_4;
    iVar4 = FUN_10bf_2e8e(0x2741,*(undefined2 *)0x64ca,&local_6);
    if (iVar4 != 0) {
      FUN_2741_0670(0,puVar5);
    }
    if (param_1 == 0) {
      *(int *)0x9c3c = *(int *)0x9c3c + 1;
      iVar4 = *(int *)0x9c3c;
      if (iVar4 <= local_6) {
        local_6 = iVar4 + -1;
        iVar2 = local_6;
        while (iVar3 = iVar2, iVar4 != 0) {
          iVar4 = FUN_10bf_2e8e(0x10bf,*(undefined2 *)0x64ca,param_2,unaff_DS,0x18,local_4);
          if (iVar4 != 0) {
            FUN_2741_0670(0);
          }
          iVar2 = iVar3 + -1;
          iVar4 = iVar3;
        }
        return 1;
      }
    }
    else {
      iVar2 = local_6 + -1;
      iVar3 = local_6 + -1;
      iVar4 = local_6;
      while (local_6 = iVar3, iVar1 = iVar2, iVar4 != 0) {
        iVar4 = FUN_10bf_2e8e(0x10bf,*(undefined2 *)0x64ca,param_2,unaff_DS,0x18,local_4);
        if (iVar4 != 0) {
          FUN_2741_0670(0);
        }
        iVar4 = FUN_10bf_2af0(param_2,param_1,0xc);
        if (iVar4 == 0) {
          return 1;
        }
        iVar2 = iVar1 + -1;
        iVar3 = local_6;
        iVar4 = iVar1;
      }
    }
  }
  return 0;
}
