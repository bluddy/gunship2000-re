/* GS.GS2 2000:a7ce undefined FUN_2000_a7ce(void) */
undefined2 __cdecl16far FUN_2000_a7ce(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar2 = 0xbf;
LAB_2000_a7d9:
  do {
    func_0x0001544e();
    if (*(int *)0xb60f != iVar2) {
      FUN_2000_b514(1);
    }
    iVar1 = *(int *)0xb611;
    iVar2 = 0x14e6;
    if (iVar1 != 0xd) {
      if (iVar1 != 0x1b) {
        if (iVar1 == 0x110) {
          func_0x0000ed38(0x14e6);
          iVar2 = 0xdea;
        }
        goto LAB_2000_a7d9;
      }
      *(undefined2 *)0xb60f = 4;
    }
    iVar1 = *(int *)0xb60f;
    if (iVar1 == 3) {
      func_0x0000edda(0x14e6,0x24);
      FUN_2000_bd0c();
      iVar2 = 0xdea;
    }
    else {
      if (iVar1 == 4) {
        func_0x0000edda(0x14e6,0x22);
        return 0;
      }
      if (iVar1 == 5) {
        return 1;
      }
      if (iVar1 == 6) {
        return 2;
      }
      if (iVar1 == 7) {
        return 3;
      }
    }
  } while( true );
}
