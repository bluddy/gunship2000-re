/* GS.GS2 3000:3d22 undefined FUN_3000_3d22(void) */
void __cdecl16far FUN_3000_3d22(undefined2 param_1,int *param_2,int *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  char cVar4;
  
  func_0x00000eb0();
  FUN_3000_0fbc(3);
  uVar2 = 0xbf;
  while( true ) {
    iVar1 = FUN_3000_118e(*param_3,*param_4,0xc6,0x5f,0xc,6);
    if (iVar1 == 0) {
      iVar1 = FUN_3000_118e(*param_3,*param_4,0x100,0x5f,0x11,6);
      if (iVar1 == 0) {
        if (*(char *)0xe28e != '\0') {
          FUN_3000_0fbc(3);
          *(undefined1 *)0xe28e = 0;
          FUN_3000_1346(*(undefined2 *)0xc028,2,199,0x60,0);
          FUN_3000_1346(*(undefined2 *)0xc02a,3,0x101,0x60,0);
          FUN_3000_19cc();
        }
      }
      else {
        if (*(char *)0xe28e == '\0') {
          FUN_3000_15c6(2);
          *(undefined1 *)0xe28e = 0xff;
          FUN_3000_1346(*(undefined2 *)0xc02a,3,0x101,0x60,0xc);
          FUN_3000_19cc();
        }
        if (*param_2 != 0) {
          if (*param_3 < 0x106) {
            cVar4 = 'd';
          }
          else if (*param_3 < 0x10c) {
            cVar4 = '\n';
          }
          else {
            cVar4 = '\x01';
          }
          if (*param_2 == 1) {
            *(int *)0xc02a = *(int *)0xc02a + (int)cVar4;
          }
          else {
            *(int *)0xc02a = *(int *)0xc02a - (int)cVar4;
          }
          iVar1 = *(int *)0xc02a;
          if (0x167 < iVar1) {
            iVar1 = 0x167;
          }
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          *(int *)0xc02a = iVar1;
          FUN_3000_1346(iVar1,3,0x101,0x60,0xc);
          func_0x0000582f(uVar2);
          func_0x00005ba0(0xbf);
          uVar2 = func_0x000059f5(0xbf);
          FUN_3000_13f2(uVar2);
          func_0x0000582f(0xbf);
          func_0x00005ba0(0xbf);
          uVar3 = func_0x000059f5(0xbf);
          *(undefined2 *)0xa250 = uVar3;
          uVar2 = 0x112a;
          func_0x00011320(0xbf,&stack0xfffa,uVar3);
          FUN_3000_126e(&stack0xfffa);
          FUN_3000_15c6(3);
          FUN_3000_19cc();
          FUN_3000_10a4(param_1,param_2,param_3,param_4);
          FUN_3000_0fbc(2);
        }
      }
    }
    else {
      if (*(char *)0xe28e == '\0') {
        FUN_3000_15c6(2);
        *(undefined1 *)0xe28e = 0xff;
        FUN_3000_1346(*(undefined2 *)0xc028,2,199,0x60,0xc);
        FUN_3000_19cc();
      }
      if (*param_2 != 0) {
        if (*param_3 < 0xcc) {
          cVar4 = '\n';
        }
        else {
          cVar4 = '\x01';
        }
        if (*param_2 == 1) {
          *(int *)0xc028 = *(int *)0xc028 + (int)cVar4;
        }
        else {
          *(int *)0xc028 = *(int *)0xc028 - (int)cVar4;
        }
        iVar1 = *(int *)0xc028;
        if (0x1e < iVar1) {
          iVar1 = 0x1e;
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        *(int *)0xc028 = iVar1;
        *(int *)0xa252 = iVar1;
        FUN_3000_1346(iVar1,2,199,0x60,0xc);
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
       (iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0x2a85,*(undefined2 *)0x2a87,
                              *(undefined2 *)0x2a89,*(undefined2 *)0x2a8b), iVar1 != 0)) break;
    iVar1 = FUN_3000_118e(*param_3,*param_4,*(undefined2 *)0x2a34,*(int *)0x2a87 + -1,
                          *(undefined2 *)0x2a38,*(int *)0x2a8b + 2);
    uVar2 = 0x1abf;
    if (iVar1 == 0) {
LAB_3000_4033:
      FUN_3000_1346(*(undefined2 *)0xc028,2,199,0x60,0);
      FUN_3000_1346(*(undefined2 *)0xc02a,3,0x101,0x60,0);
      FUN_3000_19cc();
      *(undefined1 *)0xe28e = 0xff;
      FUN_3000_0fe2();
      FUN_3000_10a4(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_3000_14fc(0x2a85);
  goto LAB_3000_4033;
}
