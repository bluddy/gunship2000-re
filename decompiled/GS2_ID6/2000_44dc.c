/* GS2.GS2 2000:44dc undefined FUN_2000_44dc(void) */
void __cdecl16far FUN_2000_44dc(uint param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined2 *puStack_c;
  int iStack_8;
  
  func_0x00005187();
  if ((int)*(char *)0x5a5 == (uint)*(byte *)0x593c) {
LAB_2000_4511:
    iVar7 = 9;
  }
  else {
    if ((int)*(char *)0x55f == (uint)*(byte *)0x593c) {
      if ((int)param_1 < 3) goto LAB_2000_4511;
    }
    else if (1 < (int)param_1) goto LAB_2000_4511;
    iVar7 = 7;
  }
  func_0x00005187(0x37f,0xe8,0x48,0x13c,0x4e,iVar7 * 0x101);
  func_0x00007e2f(0x37f,0xea,0x48,0x13c,0xa3);
  func_0x00007e50(0x7e0,0xf);
  func_0x0000510a(0x7e0,0xe9,0x49,param_1 * 0x20 + 0xb5b,0x272d,2);
  func_0x00007e50(0x37f,2);
  func_0x0000510a(0x7e0,0xe9,0x50,0x53f9,0x7e0,2);
  uVar9 = 0x7e0;
  func_0x00007e50(0x37f,10);
  iVar7 = param_1 * 0x46;
  if ((*(char *)(iVar7 + 0x489) == '\x02') && (*(int *)(param_1 * 0x18 + 0x2598) < 2)) {
    uVar11 = 0x5231;
  }
  else {
    uVar9 = 0x2000;
    uVar11 = *(undefined2 *)(*(char *)(iVar7 + 0x489) * 2 + 0x6c8d);
  }
  func_0x0000510a(uVar9,0x10b,0x50,uVar11,0x7e0,2);
  pbVar2 = (byte *)(param_1 * 0x1e);
  uStack_14 = (byte *)CONCAT22(*(undefined2 *)0x3468,pbVar2);
  func_0x0000510a(0x2000,0x114,0x56,*(undefined2 *)((*pbVar2 & 7) * 2 + 0x6c5a),0x37f,2);
  func_0x0000510a(0x37f,0xee,0x5e,0x53f4,0x37f,2);
  iVar3 = param_1 * 0xc;
  if ((*(byte *)(iVar3 + 0x5fe) & 3) != 2) {
    uVar9 = func_0x000000e8(0x37f,*(undefined2 *)(pbVar2 + 0x17),0x41,2);
    func_0x0000510a(0,0x118,0x5e,uVar9);
  }
  iStack_8 = 0;
  puStack_c = (undefined2 *)(param_1 * 0x1e + 5);
  iVar5 = 0;
  iVar8 = 100;
  do {
    pbVar4 = pbVar2 + iVar5 + 1;
    uVar9 = *(undefined2 *)0x3468;
    uStack_1c = (byte *)CONCAT22(uVar9,pbVar4);
    if (*pbVar4 != 0) {
      func_0x0000510a(0x37f,0xee,iVar8,(char)*pbVar4 * 0x18 + 0xf5,0x3e9a,2);
      if (*uStack_1c != 1) {
        uVar9 = func_0x000000e8(0x37f,*puStack_c,1,2);
        func_0x0000510a(0,0x118,iVar8,uVar9);
      }
      iVar8 = iVar8 + 6;
      iStack_8 = iStack_8 + 1;
    }
    puStack_c = puStack_c + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar8 = iStack_8 * 6 + 100;
  func_0x0000510a(0x37f,0xee,iVar8,0x51f9,0x37f,2);
  uVar9 = func_0x000000e8(0x37f,*(undefined2 *)(pbVar2 + 0x19),1,2);
  func_0x0000510a(0,0x118,iVar8,uVar9);
  iVar8 = iStack_8 * 6 + 0x6a;
  func_0x0000510a(0x37f,0xee,iVar8,0x51ec,0x37f,2);
  uVar9 = func_0x000000e8(0x37f,*(undefined2 *)(pbVar2 + 0x1b),1,2);
  func_0x0000510a(0,0x118,iVar8,uVar9);
  if ((*uStack_14 & 7) == 6) {
    func_0x00007e50(0x37f,2);
    func_0x0000510a(0x7e0,0xea,0x82,0x6c7a,0x7e0,2);
    func_0x00007e50(0x37f,10);
    func_0x0000510a(0x2000,0x104,0x82,*(undefined2 *)((uint)(*uStack_14 >> 3) * 2 + -0x52eb),0x7e0,2
                   );
  }
  if (*(byte *)0x593c == param_1) {
    func_0x00006b66(0x37f,0xed,0x8b,0,0x308,0x75a,0x15b,0);
    func_0x00007e50(0x37f,7);
    if (*(int *)0x15e8 == 0) {
      uVar13 = 2;
      uVar11 = 0x7e0;
      uVar9 = 0x51a3;
    }
    else {
      uVar13 = 0x102;
      uVar11 = 0x272d;
      uVar9 = 0x15ce;
    }
    func_0x0000510a(0x7e0,0xf4,0x8a,uVar9,uVar11,uVar13);
    uVar11 = 0x37f;
    func_0x00006b66(0x37f,0xed,0x99,0,0x308,0x722,0x15b,0);
    if (*(int *)0x1626 == 0) {
      uVar14 = 2;
      uVar12 = 0x37f;
      uVar9 = 0x51a3;
    }
    else {
      uVar14 = 0x102;
      uVar12 = 0x272d;
      uVar9 = 0x160c;
    }
    uVar10 = 0x98;
    uVar13 = 0xf4;
  }
  else {
    if (*(char *)(iVar7 + 0x48c) == '\0') {
      uVar9 = 0x521e;
    }
    else {
      uVar9 = 21000;
    }
    func_0x0000510a(0x37f,0xea,0x8c,uVar9,0x37f,2);
    if ((*(int *)(iVar7 + 0x48e) == 0) || (*(int *)(iVar7 + 0x490) == 0)) goto LAB_2000_4942;
    func_0x00007e50(0x37f,2);
    func_0x0000510a(0x7e0,0xea,0x94,0x5341,0x7e0,2);
    func_0x00007e50(0x37f,10);
    func_0x0000510a(0x2000,0x10d,0x94,*(undefined2 *)(*(int *)(iVar7 + 0x48e) * 2 + -0x52e5),0x7e0,2
                   );
    uVar14 = 2;
    uVar12 = 0x37f;
    uVar11 = 0x2000;
    uVar9 = *(undefined2 *)(*(int *)(iVar7 + 0x490) * 2 + 0x6c6c);
    uVar10 = 0x9b;
    uVar13 = 0x10d;
  }
  func_0x0000510a(uVar11,uVar13,uVar10,uVar9,uVar12,uVar14);
LAB_2000_4942:
  if (param_2 == 0) {
    if (*(char *)0x3bbe == '\0') {
      func_0x00005119(0x37f,0x2257,0x37f,0xe5,0,4);
      iVar7 = 0;
      puVar6 = (undefined2 *)0x517d;
      do {
        bVar1 = *(byte *)(iVar3 + iVar7 + 0x5fe);
        if ((bVar1 & 3) != 0) {
          if ((bVar1 & 3) == 2) {
            uVar9 = *puVar6;
            uVar11 = puVar6[-1];
            uVar13 = 0x2186;
          }
          else {
            uVar9 = *puVar6;
            uVar11 = puVar6[-1];
            uVar13 = 0x2151;
          }
          func_0x00005119(0x2000,uVar13,0x2000,uVar11,uVar9,7);
        }
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (puVar6 < (undefined2 *)0x51a5);
      return;
    }
    func_0x00005119(0x37f,0x5415,0x37f,0xe5,0,4);
    iVar7 = 0;
    puVar6 = (undefined2 *)0x517d;
    do {
      bVar1 = *(byte *)(iVar3 + iVar7 + 0x5fe);
      if ((bVar1 & 3) != 0) {
        if ((bVar1 & 3) == 2) {
          uVar9 = *puVar6;
          uVar11 = puVar6[-1];
          uVar13 = 0x51ad;
        }
        else {
          uVar9 = *puVar6;
          uVar11 = puVar6[-1];
          uVar13 = 0x5146;
        }
        func_0x00005119(0x2000,uVar13,0x2000,uVar11,uVar9,7);
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 2;
    } while (puVar6 < (undefined2 *)0x51a5);
  }
  return;
}
