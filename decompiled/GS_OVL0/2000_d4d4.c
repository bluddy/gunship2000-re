/* GS.GS2 2000:d4d4 undefined FUN_2000_d4d4(void) */
void __cdecl16far FUN_2000_d4d4(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  int local_72 [28];
  undefined2 uStack_39;
  int iStack_37;
  undefined2 uStack_35;
  int local_32;
  int iStack_30;
  undefined2 local_10;
  undefined2 uStack_e;
  int *piStack_c;
  
  func_0x00000eb0();
  *(undefined1 *)0x98aa = 0;
  *(undefined1 *)0x98ab = 0;
  *(undefined1 *)0x9892 = 0;
  bVar2 = false;
  bVar1 = false;
  piStack_c = (int *)0xd50d;
  func_0x00002dc6();
  do {
    piStack_c = (int *)0xbf;
    uStack_e = 0xd526;
    uVar4 = func_0x0000eeb2();
    *(undefined2 *)0x98a6 = (int)uVar4;
    *(undefined2 *)0x98a8 = (int)((ulong)uVar4 >> 0x10);
    piStack_c = (int *)(*(char *)0x98aa * 0x29 + *(int *)0x98a6);
    uStack_e = 0xdea;
    local_10 = 0xd54a;
    func_0x00003d8c();
    piStack_c = (int *)0xd559;
    iStack_30 = func_0x000012cc();
    if (iStack_30 != 0) {
      piStack_c = (int *)0xbf;
      uStack_e = 0xd573;
      func_0x0000382a();
      piStack_c = local_72;
      uStack_e = 0xbf;
      local_10 = 0xd586;
      func_0x0000131a();
      if ((-(uint)(*(char *)0x988e == '\0') & 6) + 4 == local_72[0]) {
        piStack_c = (int *)(*(char *)0x98aa * 0x29 + *(int *)0x98a6 + 0xd);
        uStack_e = 0xbf;
        local_10 = 0xd5bb;
        func_0x00003d8c();
        *(undefined1 *)((int)*(undefined4 *)0x98a6 + *(char *)0x98aa * 0x29 + 0x22) =
             (undefined1)local_72[0];
        *(undefined2 *)((int)*(undefined4 *)0x98a6 + *(char *)0x98aa * 0x29 + 0x27) = uStack_35;
        if (*(char *)0x988e == '\0') {
          *(undefined2 *)((int)*(undefined4 *)0x98a6 + *(char *)0x98aa * 0x29 + 0x23) = uStack_39;
          *(int *)((int)*(undefined4 *)0x98a6 + *(char *)0x98aa * 0x29 + 0x25) = iStack_37;
          if ((!bVar1) && (iStack_37 == *(int *)0x23ba)) {
            bVar1 = true;
            local_32 = FUN_2000_d732();
            *(int *)((int)*(undefined4 *)0x98a6 + *(char *)0x98aa * 0x29 + 0x25) = local_32;
            piStack_c = (int *)iStack_30;
            uStack_e = 0xbf;
            local_10 = 0xd64a;
            func_0x000030da();
            piStack_c = &local_32;
            uStack_e = 0xbf;
            local_10 = 0xd65d;
            func_0x00001418();
            *(undefined1 *)0x9892 = *(undefined1 *)0x98aa;
            if (*(char *)0x98ab + 0xc <= (int)*(char *)0x9892) {
              *(char *)0x98ab = *(char *)0x9892;
            }
          }
        }
        else {
          piStack_c = (int *)0x9898;
          uStack_e = 0xbf;
          local_10 = 0xd695;
          iVar3 = func_0x00003d62();
          if (iVar3 == 0) {
            *(undefined1 *)0x9892 = *(undefined1 *)0x98aa;
          }
        }
        *(char *)0x98aa = *(char *)0x98aa + '\x01';
      }
      func_0x000011e6();
    }
    if (bVar2) {
      iVar3 = func_0x00003a28();
    }
    else {
      bVar2 = true;
      piStack_c = (int *)0xbf;
      uStack_e = 0xd6f1;
      iVar3 = func_0x00003a33();
    }
  } while (iVar3 == 0);
  return;
}
