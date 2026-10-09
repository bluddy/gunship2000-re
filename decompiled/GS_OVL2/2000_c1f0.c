/* GS.GS2 2000:c1f0 undefined FUN_2000_c1f0(void) */
int __cdecl16far FUN_2000_c1f0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  func_0x00000eb0();
  uVar3 = 0xbf;
  do {
    while( true ) {
      func_0x0001544e(uVar3);
      if (*(int *)0xb611 == 0xd) break;
      uVar3 = 0x14e6;
      if (*(int *)0xb611 == 0x110) {
        func_0x0000ed38(0x14e6);
        uVar3 = 0xdea;
      }
    }
    iVar4 = *(int *)0xb60f;
    if (iVar4 == 1) {
      func_0x0000edda(0x14e6,0x22);
      func_0x0000d2f0(0xdea);
      iVar4 = 0xd02;
      uVar3 = 0x1163;
      func_0x00011634();
    }
    else if (iVar4 == 2) {
      func_0x0000edda(0x14e6,0x22);
      func_0x0000d2f0(0xdea);
      func_0x0001370e(0xd02);
      uVar1 = FUN_2000_c3e2(0x98e4);
      uVar3 = 0x1a79;
      iVar4 = func_0x0001a790(0x1351,uVar1);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = 1;
      FUN_2000_c04c();
    }
    else if (iVar4 == 3) {
      iVar4 = func_0x00013166(0x14e6);
      if ((iVar4 == 0) && (iVar4 = FUN_2000_c816(), iVar4 == 0)) {
        func_0x0000edda(0x1163,0x22);
        iVar4 = 0xdea;
        uVar3 = 0x1f13;
        iVar2 = func_0x0001f130();
        if (iVar2 == 0) {
          func_0x00003cc2(0x1f13,*(int *)0x9f18 + 10,*(undefined2 *)0x9f1a,*(undefined2 *)0x9f18,
                          *(undefined2 *)0x9f1a,10);
          return 0;
        }
      }
      else {
        func_0x0000edda(0x1163,0x21);
        iVar4 = 1;
        uVar3 = 0x17d1;
        func_0x00018c74(0xdea);
      }
    }
    else {
      iVar4 = 0x21;
      uVar3 = 0xdea;
      func_0x0000edda(0x14e6);
    }
    if (iVar4 != 0) {
      FUN_2000_c04c(0);
    }
  } while( true );
}
