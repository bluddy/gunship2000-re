/* GS.GS2 3000:3670 undefined FUN_3000_3670(void) */
void __cdecl16far
FUN_3000_3670(undefined2 param_1,int *param_2,undefined2 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xbf;
  func_0x00000eb0();
  if (*param_2 == 0) {
    iVar1 = FUN_3000_388c(param_1,param_2,param_3,param_4);
    if (iVar1 == 0) {
      return;
    }
  }
  else if ((*(int *)0xc020 == 0) ||
          (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0xc354,*(undefined2 *)0xc356,
                                 *(undefined2 *)0xc35a,*(undefined2 *)0xc35c), iVar1 == 0)) {
    if ((*(int *)0xc020 == 0) ||
       (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0xc364,*(undefined2 *)0xc366,
                              *(undefined2 *)0xc378,*(undefined2 *)0xc37a), iVar1 == 0)) {
      uVar2 = 0x1da4;
      iVar1 = func_0x00020158(0xbf,param_1,param_2,param_3,param_4);
      if (iVar1 == 0) {
        uVar2 = 0x1da4;
        iVar1 = func_0x0001fd56(0x1da4,param_1,param_2,param_3,param_4,0);
        if (iVar1 == 0) {
          uVar2 = 0x1da4;
          iVar1 = func_0x00020574(0x1da4,param_1,param_2,param_3,param_4,0);
          if (iVar1 != 0) {
            FUN_3000_10a4(param_1,param_2,param_3,param_4);
          }
        }
      }
      else {
        FUN_3000_10a4(param_1,param_2,param_3,param_4);
      }
    }
    else if (*param_2 == 1) {
      if (*(int *)0xc01c == 0) {
        uVar2 = 0x1da4;
        func_0x0001e13c(0xbf,param_1,param_2,param_3,param_4);
      }
      FUN_3000_19cc();
    }
    else if ((*param_2 == 2) && (iVar1 = FUN_3000_18fa(param_1,param_2,param_3,param_4), iVar1 == 0)
            ) {
      uVar2 = 0x1da4;
      func_0x0001f6d4(0xbf);
    }
  }
  else if (*param_2 == 1) {
    FUN_3000_1ce2(param_1,param_2,param_3,param_4);
  }
  else if (*param_2 == 2) {
    FUN_3000_2032(*param_3,*param_4);
  }
  if ((((*(int *)0xc020 != 0) &&
       (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0xc364,*(undefined2 *)0xc366,
                              *(undefined2 *)0xc378,*(undefined2 *)0xc37a), iVar1 != 0)) &&
      (*(int *)0xc01c != 0)) && ('\0' < *(char *)0xe28f)) {
    FUN_3000_0fe2();
    func_0x0001d78c(uVar2,param_1,param_2,param_3,param_4);
  }
  return;
}
