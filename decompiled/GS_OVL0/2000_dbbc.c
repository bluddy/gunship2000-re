/* GS.GS2 2000:dbbc undefined FUN_2000_dbbc(void) */
void __cdecl16far FUN_2000_dbbc(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int iStack_10c;
  undefined2 local_108;
  undefined2 uStack_106;
  int iStack_6;
  
  func_0x00000eb0();
  *(undefined2 *)0x2549 = 0;
  iVar1 = func_0x000012cc();
  if (iVar1 != 0) {
    func_0x00001418();
    func_0x00001418();
    for (iStack_6 = 1; iStack_6 < 0xc; iStack_6 = iStack_6 + 1) {
      iStack_10c = 0;
      iStack_6 = *(int *)(iStack_6 * 2 + 0x241a);
      iVar1 = func_0x000012cc();
      if (iVar1 != 0) {
        while (iVar1 = func_0x0000131a(), iVar1 != 0) {
          iStack_10c = iStack_10c + iVar1;
          func_0x00001418();
        }
        iStack_6 = 0xbf;
        func_0x000011e6();
      }
      if (iStack_6 == 9) {
        *(undefined2 *)0x2545 = uStack_106;
        *(undefined2 *)0x2547 = 0x7fff;
      }
      if (iStack_6 == 10) {
        *(undefined2 *)0x2549 = local_108;
      }
      *(int *)(iStack_6 * 2 + 0x2523) = iStack_10c;
    }
    func_0x000030da();
    func_0x00003cc2();
    func_0x00001418();
    func_0x000011e6();
  }
  return;
}
