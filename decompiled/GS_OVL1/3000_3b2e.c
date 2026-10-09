/* GS.GS2 3000:3b2e undefined FUN_3000_3b2e(void) */
void __cdecl16far FUN_3000_3b2e(undefined2 param_1,int *param_2,int *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  char cVar3;
  
  func_0x00000eb0();
  FUN_3000_0fbc(3);
  *(undefined1 *)0xe28e = 0xff;
  uVar2 = 0xbf;
  while( true ) {
    iVar1 = FUN_3000_118e(*param_3,*param_4,0xec,0x55,0x11,6);
    if (iVar1 == 0) {
      if (*(char *)0xe28e != '\0') {
        FUN_3000_0fbc(3);
        *(undefined1 *)0xe28e = 0;
        FUN_3000_1346(*(undefined2 *)0xc026,3,0xed,0x56,0);
        FUN_3000_19cc();
      }
    }
    else {
      if (*(char *)0xe28e == '\0') {
        FUN_3000_15c6(2);
        *(undefined1 *)0xe28e = 0xff;
        FUN_3000_1346(*(undefined2 *)0xc026,3,0xed,0x56,0xc);
        FUN_3000_19cc();
      }
      if (*param_2 != 0) {
        if (*param_3 < 0xf2) {
          cVar3 = 'd';
        }
        else if (*param_3 < 0xf8) {
          cVar3 = '\n';
        }
        else {
          cVar3 = '\x01';
        }
        if (*param_2 == 1) {
          *(int *)0xc026 = *(int *)0xc026 + (int)cVar3;
        }
        else {
          *(int *)0xc026 = *(int *)0xc026 - (int)cVar3;
        }
        FUN_3000_11ca();
        cVar3 = *(char *)0xc026;
        *(char *)0xa26a = cVar3;
        FUN_3000_1346((int)cVar3,3,0xed,0x56,0xc);
        FUN_3000_15c6(3);
        FUN_3000_19cc();
        FUN_3000_10a4(param_1,param_2,param_3,param_4);
        FUN_3000_0fbc(2);
      }
    }
    func_0x0001afe8(uVar2,param_1,param_2,param_3,param_4);
    FUN_3000_1070();
    *(int *)(*(int *)0xc358 + 1) = *param_3;
    *(undefined2 *)(*(int *)0xc358 + 3) = *param_4;
    FUN_3000_10f2();
    if ((*param_2 != 0) &&
       (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0x2a7c,*(undefined2 *)0x2a7e,
                              *(undefined2 *)0x2a80,*(undefined2 *)0x2a82), iVar1 != 0)) break;
    iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0x2a34,*(int *)0x2a7e + -1,
                          *(undefined2 *)0x2a38,*(int *)0x2a82 + 2);
    uVar2 = 0x1abf;
    if (iVar1 == 0) {
LAB_3000_3ce9:
      FUN_3000_1346(*(undefined2 *)0xc026,3,0xed,0x56,0);
      FUN_3000_19cc();
      *(undefined1 *)0xe28e = 0xff;
      FUN_3000_0fe2();
      FUN_3000_10a4(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_3000_14fc(0x2a7c);
  goto LAB_3000_3ce9;
}
