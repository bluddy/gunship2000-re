/* GS.GS2 2000:e8d4 undefined FUN_2000_e8d4(void) */
void __cdecl16far FUN_2000_e8d4(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  func_0x00000eb0();
  FUN_2000_db50(1);
  *(undefined2 *)0x98fe = *(undefined2 *)(*(int *)0xb60f * 0x11 + -0x6711);
  *(undefined2 *)0xb60f = 1;
  FUN_2000_e9e4(param_1,param_2);
  uVar1 = 0xbf;
  if (*(int *)0x9ba2 == 0) {
    return;
  }
  do {
    while( true ) {
      iVar4 = *(int *)0xb60f;
      func_0x0001544e(uVar1);
      iVar3 = *(int *)0xb60f;
      if (*(int *)0x9baa != 0 || *(int *)0x9ba8 != 0) {
        iVar3 = 0x14e6;
        (*(code *)*(undefined2 *)0x9ba8)();
      }
      if ((iVar4 != iVar3) && (0 < iVar3)) {
        iVar3 = iVar3 * 0x11 + -0x670b;
        FUN_2000_ee54();
      }
      if (*(int *)0xb611 == 0xd) break;
      uVar1 = 0x14e6;
      if (*(int *)0xb611 == 0x110) {
        func_0x0000ed38(0x14e6);
        uVar1 = 0xdea;
      }
    }
    *(undefined2 *)0x9b9e = 0;
    if (iVar3 < 1) {
      func_0x0000edda(0x14e6,0x21);
    }
    else {
      iVar4 = 0x22;
      func_0x0000edda(0x14e6);
      *(int *)0x98f8 = *(int *)0x98f8 + 1;
      uVar1 = *(undefined2 *)(iVar4 * 0x11 + -0x670d);
      uVar2 = *(undefined2 *)(iVar4 * 0x11 + -0x670f);
      FUN_2000_e8d4();
      *(int *)0x98f8 = *(int *)0x98f8 + -1;
      if (*(int *)0x9b9e != 0) {
        *(undefined2 *)0x9b9e = 0;
        return;
      }
      *(undefined2 *)0xb60f = uVar1;
      *(undefined2 *)0x98fe = uVar2;
      FUN_2000_e9e4(param_1,param_2);
      if (*(int *)0x9b9e != 0) {
        *(undefined2 *)0x9b9e = 0;
        return;
      }
    }
    uVar1 = 0xdea;
  } while( true );
}
