/* GS2.GS2 1000:0828 undefined FUN_1000_0828(void) */
void __cdecl16far FUN_1000_0828(void)

{
  undefined2 uVar1;
  bool bVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  bVar2 = true;
  if (*(char *)0xde != '\0') {
    thunk_EXT_FUN_0000_0000(0x1000,0x40);
  }
  uVar1 = *(undefined2 *)0x3b8c;
  *(int *)0x3b8c = *(int *)0x3b8c + 0x20;
  uVar5 = 0x17e0;
  FUN_17e0_0050(0xc);
  do {
    if (*(char *)0xde == '\0') {
      DAT_3a29_00bf = 0x46;
      DAT_3a29_00c0 = 0x46;
    }
    else {
      DAT_3a29_00bf = 0x4e;
      DAT_3a29_00c0 = 0;
    }
    if ((*(byte *)0xde & 0x80) == 0) {
      DAT_3a29_00d7 = 0x46;
      DAT_3a29_00d8 = 0x46;
    }
    else {
      DAT_3a29_00d7 = 0x4e;
      DAT_3a29_00d8 = 0;
    }
    if ((*(byte *)0xde & 0x20) == 0) {
      DAT_3a29_00eb = 0x46;
      DAT_3a29_00ec = 0x46;
    }
    else {
      DAT_3a29_00eb = 0x4e;
      DAT_3a29_00ec = 0;
    }
    if ((*(byte *)0xde & 0x40) == 0) {
      DAT_3a29_0101 = 0x46;
      DAT_3a29_0102 = 0x46;
    }
    else {
      DAT_3a29_0101 = 0x4e;
      DAT_3a29_0102 = 0;
    }
    FUN_1851_0cf5(uVar5);
    iVar4 = 0x14;
    puVar3 = (undefined2 *)0x104;
    uVar5 = 0x1851;
    do {
      thunk_EXT_FUN_0000_0000(uVar5,*(undefined2 *)0xfe,iVar4,*puVar3,*(undefined2 *)0x326a,0x1812);
      iVar4 = iVar4 + 10;
      puVar3 = puVar3 + 1;
      uVar5 = 0x137f;
    } while (puVar3 < (undefined2 *)0x10c);
    thunk_EXT_FUN_0000_0000(0x137f,*(undefined2 *)0xfe,0x46,0x16,0x3a29,0x1812);
    thunk_EXT_FUN_0000_0000(0x137f);
    FUN_171d_0273();
    do {
      uVar5 = 0x171d;
      iVar4 = FUN_171d_0293();
    } while (iVar4 == 0);
    if (iVar4 == 0x11b) {
      bVar2 = false;
    }
    else if (iVar4 == 0x1177) {
      *(byte *)0xde = *(byte *)0xde ^ 0x40;
    }
    else if (iVar4 == 0x1372) {
      *(byte *)0xde = *(byte *)0xde ^ 0x20;
      if ((*(byte *)0xde & 0x20) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)0xaaf >> 1;
      }
      uVar5 = 0x1844;
      thunk_EXT_FUN_0000_0000(0x171d,0xb,iVar4);
    }
    else if (iVar4 == 0x1e61) {
      if (*(char *)0xde == '\0') {
        bVar6 = (*(byte *)0x3bbf & 0x5f) != 0x4e;
        *(bool *)0xde = bVar6;
        if (bVar6) {
          *(byte *)0xde = *(byte *)0xde | *(byte *)0x3bbf & 0xe0 | 0x60;
        }
      }
      else {
        *(undefined1 *)0xde = 0;
      }
    }
    else if ((iVar4 == 0x2064) && ((*(byte *)0x3bbf & 0x80) != 0)) {
      *(byte *)0xde = *(byte *)0xde ^ 0x80;
    }
  } while (bVar2);
  if (*(char *)0xde != '\0') {
    thunk_EXT_FUN_0000_0000(uVar5,0x41);
  }
  *(uint *)0x2d02 = (uint)*(byte *)0xde;
  *(undefined2 *)0x3b8c = uVar1;
  return;
}
