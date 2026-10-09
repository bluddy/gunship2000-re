/* GS.GS2 3000:388c undefined FUN_3000_388c(void) */
void __cdecl16far
FUN_3000_388c(undefined2 param_1,undefined2 param_2,undefined2 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  if ((*(int *)0xc020 != 0) &&
     (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0xc354,*(undefined2 *)0xc356,
                            *(undefined2 *)0xc35a,*(undefined2 *)0xc35c), iVar1 != 0)) {
    FUN_3000_0fbc(4);
    return;
  }
  if ((*(int *)0xc020 != 0) &&
     (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0xc364,*(undefined2 *)0xc366,
                            *(undefined2 *)0xc378,*(undefined2 *)0xc37a), iVar1 != 0)) {
    FUN_3000_0fe2();
    if ((*(int *)0xc01c != 0) && ('\0' < *(char *)0xe28f)) {
      func_0x0001d78c(0xbf,param_1,param_2,param_3,param_4);
    }
    return;
  }
  if ((*(int *)0xc01c != 0) && (iVar1 = FUN_3000_118e(*param_3,*param_4,3,3,0x9f,0x7f), iVar1 != 0))
  {
    FUN_3000_0fbc(5);
    return;
  }
  if ((*(char *)0x2a84 != '\0') &&
     (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0x2a34,*(int *)0x2a7e + -1,
                            *(undefined2 *)0x2a38,*(int *)0x2a82 + 2), iVar1 != 0)) {
    FUN_3000_3b2e(param_1,param_2,param_3,param_4);
    return;
  }
  if ((*(char *)0x2a8d != '\0') &&
     (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0x2a34,*(int *)0x2a87 + -1,
                            *(undefined2 *)0x2a38,*(int *)0x2a8b + 2), iVar1 != 0)) {
    FUN_3000_3d22(param_1,param_2,param_3,param_4);
    return;
  }
  iVar1 = FUN_3000_118e(*param_3,*param_4,2,0x82,0xa1,10);
  if (iVar1 == 0) {
    if ((*(int *)0xc01c != 0) &&
       (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0x2a34,*(undefined2 *)0x2a36,
                              *(undefined2 *)0x2a38,*(undefined2 *)0x2a3a), iVar1 != 0)) {
      FUN_3000_0fbc(6);
      return;
    }
    FUN_3000_0fe2();
  }
  else {
    FUN_3000_0fbc(4);
  }
  return;
}
