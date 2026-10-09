/* GS.GS2 2000:d22a undefined FUN_2000_d22a(void) */
void __cdecl16far FUN_2000_d22a(undefined2 param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  undefined2 ***pppuVar2;
  int iVar3;
  byte unaff_SI;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  undefined4 uVar8;
  uint uStack_58;
  uint uStack_56;
  int iStack_54;
  undefined2 *local_52;
  undefined1 local_50 [21];
  uint auStack_3b [20];
  int iStack_12;
  uint uStack_10;
  undefined2 ***local_e;
  uint uStack_c;
  undefined1 *puStack_a;
  undefined2 **ppuStack_8;
  
  func_0x00000eb0();
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  ppuStack_8 = (undefined2 **)0x24d5;
  puStack_a = (undefined1 *)param_1;
  uStack_c = 0xbf;
  local_e = (undefined2 ***)0xd256;
  pppuVar2 = (undefined2 ***)func_0x000012cc();
  if (pppuVar2 != (undefined2 ***)0x0) {
    ppuStack_8 = (undefined2 **)0x0;
    puStack_a = (undefined1 *)0x0;
    uStack_c = 0;
    uStack_10 = 0xbf;
    iStack_12 = 0xd272;
    local_e = pppuVar2;
    func_0x000030da();
    puStack_a = (undefined1 *)0x3f;
    uStack_c = 1;
    local_e = (undefined2 ***)&local_52;
    uStack_10 = 0xbf;
    iVar5 = 0xbf;
    iStack_12 = 0xd285;
    ppuStack_8 = pppuVar2;
    uStack_58 = func_0x0000131a();
    uStack_56 = 0;
    if (param_3 == 0) {
      bVar7 = 0xfff6 < uStack_58;
      uStack_58 = uStack_58 + 9;
      uStack_56 = (uint)bVar7;
    }
    iStack_12 = (-(uint)(param_3 == 0) & 6) + 6;
    if (param_3 == 0) {
      iVar3 = 0x241a;
    }
    else {
      iVar3 = 0x240e;
    }
    for (uStack_10 = (uint)(param_3 == 0); (int)uStack_10 < iStack_12; uStack_10 = uStack_10 + 1) {
      ppuStack_8 = (undefined2 **)0x0;
      puStack_a = (undefined1 *)uStack_56;
      uStack_c = uStack_58;
      iStack_12 = -0x2d16;
      uStack_10 = iVar5;
      local_e = pppuVar2;
      func_0x000030da();
      ppuStack_8 = (undefined2 **)0x23bc;
      puStack_a = (undefined1 *)*(undefined2 *)(uStack_10 * 2 + iVar3);
      uStack_c = 0xbf;
      local_e = (undefined2 ***)0xd2ff;
      iVar5 = func_0x00002df8();
      if (iVar5 == 0) {
        puStack_a = (undefined1 *)0x3;
        uStack_c = 1;
        local_e = (undefined2 ***)0xbc5e;
        uStack_10 = 0xbf;
        iStack_12 = -0x2ceb;
        ppuStack_8 = pppuVar2;
        func_0x0000131a();
      }
      ppuStack_8 = (undefined2 **)0x23c4;
      puStack_a = (undefined1 *)*(undefined2 *)(uStack_10 * 2 + iVar3);
      uStack_c = 0xbf;
      local_e = (undefined2 ***)0xd32a;
      iVar5 = func_0x00002df8();
      if (iVar5 == 0) {
        puStack_a = (undefined1 *)0xa20;
        uStack_c = 1;
        local_e = (undefined2 ***)0xa280;
        uStack_10 = 0xbf;
        iStack_12 = -0x2cbf;
        ppuStack_8 = pppuVar2;
        func_0x0000131a();
      }
      ppuStack_8 = (undefined2 **)0x23d0;
      puStack_a = (undefined1 *)*(undefined2 *)(uStack_10 * 2 + iVar3);
      uStack_c = 0xbf;
      local_e = (undefined2 ***)0xd356;
      iVar5 = func_0x00002df8();
      if (iVar5 == 0) {
        puStack_a = (undefined1 *)0x14;
        uStack_c = 1;
        local_e = (undefined2 ***)0xa248;
        uStack_10 = 0xbf;
        iStack_12 = -0x2c94;
        ppuStack_8 = pppuVar2;
        func_0x0000131a();
      }
      ppuStack_8 = (undefined2 **)0x23de;
      puStack_a = (undefined1 *)*(undefined2 *)(uStack_10 * 2 + iVar3);
      uStack_c = 0xbf;
      local_e = (undefined2 ***)0xd381;
      iVar5 = func_0x00002df8();
      if (iVar5 == 0) {
        puStack_a = (undefined1 *)0x136;
        uStack_c = 1;
        local_e = (undefined2 ***)0xb8e4;
        uStack_10 = 0xbf;
        iStack_12 = -0x2c68;
        ppuStack_8 = pppuVar2;
        func_0x0000131a();
      }
      ppuStack_8 = (undefined2 **)0x23ea;
      puStack_a = (undefined1 *)*(undefined2 *)(uStack_10 * 2 + iVar3);
      uStack_c = 0xbf;
      iVar6 = 0xbf;
      local_e = (undefined2 ***)0xd3ad;
      iVar5 = func_0x00002df8();
      if (iVar5 == 0) {
        if (*(int *)0xb8dc != 0) {
          *(undefined2 *)0xb8dc = 0;
          ppuStack_8 = (undefined2 **)*(undefined2 *)0xb8d6;
          puStack_a = (undefined1 *)*(undefined2 *)0xb8d4;
          uStack_c = 0xbf;
          iVar6 = 0xdea;
          local_e = (undefined2 ***)0xd3cd;
          func_0x0000ef26();
        }
        ppuStack_8 = (undefined2 **)auStack_3b[uStack_10];
        *(uint *)0xb8dc = (uint)ppuStack_8 / 9;
        uStack_c = 0xd3ea;
        puStack_a = (undefined1 *)iVar6;
        uVar8 = func_0x0000eee8();
        *(undefined2 *)0xb8d4 = (int)uVar8;
        *(undefined2 *)0xb8d6 = (int)((ulong)uVar8 >> 0x10);
        *(undefined2 *)0xb8e2 = 0;
        iVar6 = 0xdea;
        for (iStack_54 = 0; iStack_54 < *(int *)0xb8dc; iStack_54 = iStack_54 + 1) {
          puStack_a = (undefined1 *)0x9;
          uStack_c = 1;
          local_e = &local_e;
          iStack_12 = -0x2be6;
          uStack_10 = iVar6;
          ppuStack_8 = pppuVar2;
          func_0x0000131a();
          if ((unaff_SI & 0x40) != 0) {
            *(int *)0xb8e2 = *(int *)0xb8e2 + 1;
          }
          uVar4 = (undefined2)((ulong)*(undefined4 *)0xb8d4 >> 0x10);
          piVar1 = (int *)(iStack_54 * 9 + (int)*(undefined4 *)0xb8d4);
          *piVar1 = (int)local_e;
          piVar1[1] = uStack_c;
          piVar1[2] = (int)puStack_a;
          piVar1[3] = (int)ppuStack_8;
          *(byte *)(piVar1 + 4) = unaff_SI;
          iVar6 = 0xbf;
        }
      }
      ppuStack_8 = (undefined2 **)0x23f4;
      puStack_a = (undefined1 *)*(undefined2 *)(uStack_10 * 2 + iVar3);
      iVar5 = 0xbf;
      local_e = (undefined2 ***)0xd454;
      uStack_c = iVar6;
      iVar6 = func_0x00002df8();
      if (iVar6 == 0) {
        puStack_a = (undefined1 *)0xbf;
        iVar5 = 0x17d1;
        uStack_c = 0xd463;
        ppuStack_8 = pppuVar2;
        func_0x00018c92();
      }
      bVar7 = CARRY2(uStack_58,auStack_3b[uStack_10]);
      uStack_58 = uStack_58 + auStack_3b[uStack_10];
      uStack_56 = uStack_56 + bVar7;
    }
    if (param_2 != (undefined1 *)0x0) {
      ppuStack_8 = (undefined2 **)local_50;
      puStack_a = param_2;
      local_e = (undefined2 ***)0xd48c;
      uStack_c = iVar5;
      func_0x00002dc6();
    }
    return;
  }
  return;
}
