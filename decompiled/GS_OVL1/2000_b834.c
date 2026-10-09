/* GS.GS2 2000:b834 undefined FUN_2000_b834(void) */
void __cdecl16far FUN_2000_b834(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_1c;
  int iStack_1a;
  int iStack_c;
  int iStack_a;
  
  func_0x00000eb0();
  puVar9 = &local_1c;
  puVar8 = (undefined2 *)0x2704;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  func_0x00013acc();
  func_0x00025af8();
  for (iStack_a = 9; iStack_a < 0x50; iStack_a = iStack_a + 1) {
  }
  if (*(int *)0xbc5e < 0) {
    uVar4 = 0x50;
  }
  else {
    uVar4 = *(undefined1 *)0xbc5e;
  }
  *(undefined1 *)0xe290 = uVar4;
  for (iStack_a = 0; iStack_a < 5; iStack_a = iStack_a + 1) {
    *(undefined1 *)((int)&local_1c + iStack_a) = *(undefined1 *)(iStack_a + -0x5db6);
  }
  func_0x0001769a();
  uVar5 = func_0x0001a790();
  *(undefined2 *)0xb8d8 = 0;
  *(undefined2 *)0xb8da = uVar5;
  func_0x00021c60();
  func_0x0000ef26();
  *(undefined2 *)0xbc7d = 0xffff;
  *(undefined2 *)0xc375 = 0xffff;
  *(undefined2 *)0xc018 = 0;
  func_0x0000dd4a();
  func_0x0000c928();
  for (iStack_a = -0x4707; iStack_a < 0x50; iStack_a = iStack_a + iVar7) {
    uVar3 = *(uint *)(iStack_a * 0x20 + -0x5d80);
    if ((uVar3 & 2) != 0) {
      if ((uVar3 & 0x10) == 0) {
        if ((*(byte *)(iStack_a * 0x20 + -0x5d80) & 0x20) != 0) {
          *(undefined2 *)0xbc7d = 2;
        }
      }
      else {
        *(undefined2 *)0xc375 = 2;
      }
      iStack_a = iStack_a + 1;
      *(char *)0x2b98 = *(char *)0x2b98 + -1;
    }
    uVar5 = *(undefined2 *)0xb862;
    if ((*(byte *)((uint)*(byte *)(iStack_a + -0x4794) * 0x27 + *(int *)0xb860 + 0x24) & 0x10) == 0)
    {
      iVar7 = (uint)*(byte *)(iStack_a + -0x4794) * 0x27;
      uVar3 = *(uint *)(*(int *)0xb860 + iVar7 + 0x23);
      if (((uVar3 & 0x200) == 0) &&
         ((uVar3 != 0 || (*(int *)(*(int *)0xb860 + iVar7 + 0x25) != 0x1000)))) {
        iStack_a = 0x2000;
        iVar6 = func_0x00003aec();
        iVar7 = *(int *)0xc018;
        *(int *)(iVar7 * 0xb + -0x435c) = iVar6 * 0x18 + 0xc;
        iStack_1a = 0xbaad;
        iVar6 = func_0x00003aec();
        *(int *)(iVar7 * 0xb + -0x435a) = iVar6 * -0x12 + 0x477;
      }
      else {
        iStack_a = 0x155;
        iVar6 = func_0x00003aec();
        iVar7 = *(int *)0xc018 * 0xb;
        *(int *)(iVar7 + -0x435c) = iVar6 + -1;
        iStack_1a = 0xba3f;
        iVar6 = func_0x00003aec();
        *(int *)(iVar7 + -0x435a) = iVar6 + 0x481;
        if ((*(uint *)((int)*(undefined4 *)0xb860 + (uint)*(byte *)0xb9c1 * 0x27 + 0x25) & 0x1000)
            != 0) {
          *(int *)(iVar7 + -0x435a) = iVar6 + 0x47f;
        }
      }
    }
    else {
      iStack_a = 0x155;
      iVar6 = func_0x00003aec();
      iVar7 = *(int *)0xc018;
      *(int *)(iVar7 * 0xb + -0x435c) = iVar6 + -1;
      iStack_1a = 0xb9ce;
      iVar6 = func_0x00003aec();
      *(int *)(iVar7 * 0xb + -0x435a) = iVar6 + 0x47f;
    }
    *(uint *)(*(int *)0xc018 * 0xb + -0x4362) = (uint)*(byte *)(iStack_a + -0x4794);
    iStack_c = 0;
    while (uVar5 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10),
          *(uint *)((int)*(undefined4 *)0xb860 + (uint)*(byte *)(iStack_a + -0x4794) * 0x27 + 0x19)
          != (uint)*(byte *)(iStack_c * 8 + (int)*(undefined4 *)0xb85c)) {
      iStack_c = iStack_c + 1;
    }
    if ((*(uint *)(*(int *)0xb860 + (uint)*(byte *)(iStack_a + -0x4794) * 0x27 + 0x25) & 0x400) == 0
       ) {
      if ((*(byte *)((int)*(undefined4 *)0xb85c + iStack_c * 8 + 2) & 2) != 0) {
        while( true ) {
          iVar7 = iStack_c * 8 + *(int *)0xb85c;
          if ((*(char *)(iVar7 + 1) == *(char *)(iStack_a * 0x20 + -0x5d74)) &&
             (*(char *)(iVar7 + 3) == *(char *)(iStack_a * 0x20 + -0x5d75))) break;
          iStack_c = iStack_c + 1;
        }
      }
    }
    else {
      while (*(char *)((int)*(undefined4 *)0xb85c + iStack_c * 8 + 1) !=
             *(char *)(iStack_a * 0x20 + -0x5d74)) {
        iStack_c = iStack_c + 1;
      }
    }
    iVar7 = *(int *)0xc018;
    *(int *)(iVar7 * 0xb + -0x4360) = iStack_c;
    iStack_1a = 0xbf;
    local_1c = 0xbb9a;
    uVar5 = func_0x00023a48();
    *(undefined2 *)(iVar7 * 0xb + -0x435e) = uVar5;
    uVar5 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    if ((*(byte *)((int)*(undefined4 *)0xb860 + (uint)*(byte *)(iStack_a + -0x4794) * 0x27 + 0x23) &
        0x20) == 0) {
      if ((*(byte *)(*(int *)0xb860 + (uint)*(byte *)(iStack_a + -0x4794) * 0x27 + 0x23) & 0x40) ==
          0) {
        if ((*(byte *)(iStack_a * 0x20 + -0x5d80) & 0x10) == 0) {
          if ((*(byte *)(iStack_a * 0x20 + -0x5d80) & 0x20) == 0) {
            if ((*(uint *)(*(int *)0xb860 + (uint)*(byte *)(iStack_a + -0x4794) * 0x27 + 0x25) &
                0x600) == 0) {
              iVar7 = *(int *)0xc018 * 0xb;
              iStack_1a = *(undefined2 *)(iVar7 + -0x435a);
              local_1c = *(undefined2 *)(iVar7 + -0x435c);
              func_0x00022464(0x20f4,iVar7 + -0x4358);
              iStack_1a = iStack_c;
              local_1c = 0x20f4;
              uVar5 = 0x20f4;
              func_0x000224c4();
              *(int *)0xc018 = *(int *)0xc018 + 1;
            }
            else {
              puVar8 = (undefined2 *)0xc510;
              puVar9 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
              for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
                puVar2 = puVar8;
                puVar8 = puVar8 + 1;
                puVar1 = puVar9;
                puVar9 = puVar9 + 1;
                *puVar2 = *puVar1;
              }
              *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
              iStack_1a = iStack_c;
              local_1c = 0x20f4;
              func_0x000224c4();
              iStack_1a = 6;
              local_1c = 0x50;
              func_0x0000c8c0(0x20f4,0x8a4,0xd6,0x42);
              uVar5 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
              iVar7 = (int)*(undefined4 *)0xb860;
              if ((*(uint *)(iVar7 + (uint)*(byte *)(iStack_a + -0x4794) * 0x27 + 0x25) & 0x200) ==
                  0) {
                iStack_1a = (uint)*(byte *)((int)*(undefined4 *)0xb85c + *(int *)0xc512 * 8 + 1) *
                            0x1b + *(int *)0xa278 + 2;
                local_1c = 0x271b;
                func_0x0000ca66(0xc87);
              }
              else {
                iStack_1a = *(int *)(iVar7 + *(int *)0xc510 * 0x27 + 0x19) * 0x1a + *(int *)0xa25c +
                            1;
                local_1c = 0x2718;
                func_0x0000ca66(0xc87);
              }
              uVar5 = 0xc87;
            }
          }
          else {
            puVar8 = (undefined2 *)0xc504;
            puVar9 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
            for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar2 = puVar8;
              puVar8 = puVar8 + 1;
              puVar1 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar2 = *puVar1;
            }
            *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
            iStack_1a = iStack_c;
            local_1c = 0x20f4;
            func_0x000224c4();
            iStack_1a = 3;
            local_1c = 0xbc70;
            FUN_2000_b51e(0xc504);
            iStack_1a = 0xb2;
            local_1c = 0xc504;
            FUN_2000_bfce();
            iStack_1a = 6;
            local_1c = 0x50;
            func_0x0000c8c0(0x20f4,0x8a4,0xe0,0x31);
            iStack_1a = *(undefined2 *)(*(int *)0xbc7d * 4 + 0x8f4);
            local_1c = 0x2715;
            uVar5 = 0xc87;
            func_0x0000ca66(0xc87);
          }
        }
        else {
          puVar8 = (undefined2 *)0xc4f0;
          puVar9 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
          for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
          iStack_1a = iStack_c;
          local_1c = 0x20f4;
          func_0x000224c4();
          iStack_1a = 2;
          local_1c = 0xc368;
          FUN_2000_b51e(0xc4f0);
          iStack_1a = 0xb2;
          local_1c = 0xc4f0;
          FUN_2000_bfce();
          iStack_1a = 6;
          local_1c = 0x50;
          func_0x0000c8c0(0x20f4,0x8a4,0xd6,0x20);
          iStack_1a = *(undefined2 *)(*(int *)0xc375 * 4 + 0x8f4);
          local_1c = 0x2712;
          uVar5 = 0xc87;
          func_0x0000ca66(0xc87);
        }
      }
      else {
        uVar5 = 0x20f4;
        iStack_1a = 0xbc18;
        func_0x00022ce8();
      }
    }
    else {
      if ((*(byte *)0xa249 & 8) == 0) {
        if ((*(uint *)(*(int *)0xb860 + *(int *)(*(int *)0xc018 * 0xb + -0x4362) * 0x27 + 0x25) &
            0x4000) == 0) {
          *(undefined1 *)0xe28c = 0;
        }
        else {
          *(undefined1 *)0xe28c = 3;
        }
      }
      else {
        *(undefined1 *)0xe28c = 2;
      }
      uVar5 = 0x20f4;
      iStack_1a = 0xbbf8;
      func_0x00022db0();
    }
    local_1c = 0xbe51;
    iStack_1a = uVar5;
    iVar7 = func_0x00023aee();
  }
  if ((*(byte *)0xa249 & 8) != 0) {
    iVar6 = func_0x00003aec();
    iVar7 = *(int *)0xc018 * 0xb;
    *(int *)(iVar7 + -0x435c) = iVar6 * 0x18 + 0xc;
    iStack_1a = 0xbea6;
    iVar6 = func_0x00003aec();
    *(int *)(iVar7 + -0x435a) = iVar6 * 0x12 + 0x477;
    iStack_1a = *(undefined2 *)(iVar7 + -0x435c);
    local_1c = 0xbf;
    uVar5 = FUN_2000_abf6();
    *(undefined2 *)(iVar7 + -0x4362) = uVar5;
    *(undefined2 *)(*(int *)0xc018 * 0xb + -0x4360) = 0xffff;
    *(undefined1 *)0xe28c = 2;
    iStack_1a = 0xbedf;
    func_0x00022db0();
  }
  *(int *)0xc026 = (int)*(char *)0xa26a;
  *(undefined2 *)0xc028 = *(undefined2 *)0xa252;
  func_0x00005d19();
  func_0x00005ba0();
  uVar5 = func_0x000059f5();
  *(undefined2 *)0xc02a = uVar5;
  func_0x0000582f();
  func_0x00005ba0();
  uVar5 = func_0x000059f5();
  *(undefined2 *)0xa250 = uVar5;
  func_0x00011320();
  func_0x0000582f();
  func_0x00005ba0();
  func_0x000059f5();
  func_0x000213f2();
  func_0x0002126e();
  if ((*(byte *)0xa249 & 1) == 0) {
    func_0x0002126e();
    return;
  }
  func_0x0002126e();
  return;
}
