/* GS.GS2 2000:d0a8 undefined FUN_2000_d0a8(void) */
void __cdecl16far FUN_2000_d0a8(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar4;
  undefined1 local_150 [256];
  uint uStack_50;
  int iStack_4e;
  int iStack_4c;
  undefined1 local_4a [23];
  uint auStack_33 [12];
  undefined1 local_1b [9];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  int iVar5;
  
  func_0x00000eb0();
  iStack_4e = 0;
  uStack_50 = 0;
  puStack_a = (undefined1 *)0xbf;
  puStack_c = (undefined1 *)0xd0c7;
  puStack_c = (undefined1 *)func_0x000012cc();
  if (puStack_c != (undefined1 *)0x0) {
    puStack_a = (undefined1 *)0x0;
    uStack_e = 0xbf;
    uStack_10 = 0xd0e0;
    func_0x000030da();
    puStack_a = (undefined1 *)0x1;
    puStack_c = local_4a;
    uStack_e = 0xbf;
    uStack_10 = 0xd0f3;
    uStack_50 = func_0x0000131a();
    iStack_4e = 0;
    puStack_a = (undefined1 *)0x1;
    puStack_c = (undefined1 *)0xad13;
    uStack_e = 0xbf;
    uStack_10 = 0xd10d;
    uVar2 = func_0x0000131a();
    bVar4 = CARRY2(uStack_50,uVar2);
    uStack_50 = uStack_50 + uVar2;
    iStack_4e = iStack_4e + (uint)bVar4;
    puStack_a = (undefined1 *)0xc;
    for (iVar5 = 1; iVar1 = iStack_4e, iVar5 < (int)puStack_a; iVar5 = iVar5 + 1) {
      puStack_a = (undefined1 *)uStack_50;
      puStack_c = (undefined1 *)0x0;
      uStack_e = 0xbf;
      uStack_10 = 0xd141;
      func_0x000030da();
      iVar5 = *(int *)(iVar1 * 2 + 0x241a);
      puStack_a = (undefined1 *)0xbf;
      puStack_c = (undefined1 *)0xd157;
      iVar3 = func_0x000012cc();
      if (iVar3 != 0) {
        uVar2 = auStack_33[iVar1];
        while (uVar2 != 0) {
          puStack_a = (undefined1 *)0x1;
          puStack_c = local_150;
          uStack_e = 0xbf;
          uStack_10 = 0xd18b;
          iStack_4c = func_0x0000131a();
          uVar2 = uVar2 - iStack_4c;
          if (iStack_4c == 0) break;
          puStack_c = local_150;
          uStack_e = 0xbf;
          uStack_10 = 0xd1ab;
          puStack_a = (undefined1 *)iStack_4c;
          func_0x00001418();
        }
        iVar5 = 0xbf;
        puStack_a = (undefined1 *)0xd1b9;
        func_0x000011e6();
      }
      bVar4 = CARRY2(uStack_50,auStack_33[iVar5]);
      uStack_50 = uStack_50 + auStack_33[iVar5];
      iStack_4e = iStack_4e + (uint)bVar4;
    }
    puStack_a = (undefined1 *)0x3b;
    puStack_c = (undefined1 *)0x0;
    uStack_e = 0xbf;
    uStack_10 = 0xd1dc;
    func_0x000030da();
    puStack_a = (undefined1 *)0x2;
    puStack_c = (undefined1 *)0x23ba;
    uStack_e = 0xbf;
    uStack_10 = 0xd1ee;
    func_0x00001418();
    puStack_a = (undefined1 *)0xd1f9;
    func_0x000011e6();
    func_0x0000ee2a();
    func_0x0000d2f0();
    puStack_a = local_1b;
    puStack_c = (undefined1 *)*(undefined2 *)0x9f1a;
    uStack_e = *(undefined2 *)0x9f18;
    uStack_10 = 0xd02;
    uStack_12 = 0xd21a;
    func_0x00003cc2();
    puStack_a = (undefined1 *)0xd224;
    func_0x00000dc5();
  }
  return;
}
