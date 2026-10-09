/* GS.GS2 3000:1abe undefined FUN_3000_1abe(void) */
void __cdecl16far FUN_3000_1abe(void)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  func_0x00000eb0();
  if (*(int *)0xc020 != 0) {
    func_0x0000582f(0xbf);
    func_0x0000575a(0xbf);
    func_0x00006580(0xbf);
    func_0x000058df(0xbf);
    func_0x0000582f(0xbf);
    func_0x0000655c(0xbf);
    func_0x000058f7(0xbf);
    func_0x0000582f(0xbf);
    func_0x0000575a(0xbf);
    func_0x00006580(0xbf);
    func_0x000058df(0xbf);
    func_0x0000582f(0xbf);
    func_0x0000655c(0xbf);
    func_0x000058f7(0xbf);
    FUN_3000_1030(0,0);
    func_0x0000575a(0xbf);
    func_0x00005b29(0xbf);
    func_0x00005ae1(0xbf);
    func_0x00005ab1(0xbf);
    func_0x00005cec(0xbf);
    uVar1 = func_0x000059f5(0xbf);
    *(undefined2 *)0xc34a = (int)uVar1;
    *(undefined2 *)0xc34c = (int)((ulong)uVar1 >> 0x10);
    func_0x0000575a(0xbf);
    func_0x00005b29(0xbf);
    func_0x00005ae1(0xbf);
    func_0x00005ab1(0xbf);
    func_0x00005cec(0xbf);
    uVar1 = func_0x000059f5(0xbf);
    *(undefined2 *)0xc34e = (int)uVar1;
    *(undefined2 *)0xc350 = (int)((ulong)uVar1 >> 0x10);
    FUN_3000_68be();
    func_0x0001a93b(0xbf,0xc34a);
    if ((*(int *)0xc375 == 2) && (*(int *)0xc368 != 9999)) {
      FUN_3000_7f1a(0xc368);
    }
    if ((*(int *)0xbc7d == 2) && (*(int *)0xbc70 != 9999)) {
      FUN_3000_7f1a(0xbc70);
    }
    FUN_3000_324e();
    func_0x00016658(0x1a8d,0x892,0xe7,0,*(undefined2 *)0xc35a,*(undefined2 *)0xc35c,0x880,
                    *(undefined2 *)0xc354,*(undefined2 *)0xc356);
    FUN_3000_1da0(0x880);
  }
  FUN_3000_1008();
  return;
}
