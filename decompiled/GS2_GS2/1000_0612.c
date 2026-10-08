/* GS2.GS2 1000:0612 undefined FUN_1000_0612(void) */
void __cdecl16far FUN_1000_0612(void)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  uint uStack_4;
  
  bVar2 = true;
  uVar1 = *(undefined2 *)0x3b8c;
  *(int *)0x3b8c = *(int *)0x3b8c + 0x20;
  uVar6 = 0x17e0;
  FUN_17e0_0050(0xc);
  if (*(char *)0xde != '\0') {
    uVar6 = 0x1844;
    thunk_EXT_FUN_0000_0000(0x17e0,0x40);
  }
  do {
    iVar4 = DAT_3a29_00a5;
    if ((*(byte *)0x593e & 8) == 0) {
      *(undefined1 *)(DAT_3a29_00a5 + 0x11) = 0x46;
      *(undefined1 *)(iVar4 + 0x12) = 0x46;
    }
    else {
      *(undefined1 *)(DAT_3a29_00a5 + 0x11) = 0x4e;
      *(undefined1 *)(iVar4 + 0x12) = 0;
    }
    iVar4 = DAT_3a29_00a7;
    if ((*(byte *)0x593e & 4) == 0) {
      *(undefined1 *)(DAT_3a29_00a7 + 0x15) = 0x46;
      *(undefined1 *)(iVar4 + 0x16) = 0x46;
      *(undefined2 *)0x1c9c = 0x1000;
      *(undefined2 *)0x1c9e = 0x1800;
      *(undefined2 *)0x1ca0 = 0x2000;
    }
    else {
      *(undefined1 *)(DAT_3a29_00a7 + 0x15) = 0x4e;
      *(undefined1 *)(iVar4 + 0x16) = 0;
      *(undefined2 *)0x1c9c = 0x2000;
      *(undefined2 *)0x1c9e = 0x2800;
      *(undefined2 *)0x1ca0 = 0x4000;
    }
    iVar4 = DAT_3a29_00a9;
    if ((*(byte *)0x593e & 2) == 0) {
      *(undefined1 *)(DAT_3a29_00a9 + 0x13) = 0x46;
      *(undefined1 *)(iVar4 + 0x14) = 0x46;
    }
    else {
      *(undefined1 *)(DAT_3a29_00a9 + 0x13) = 0x4e;
      *(undefined1 *)(iVar4 + 0x14) = 0;
    }
    iVar4 = DAT_3a29_00ab;
    if ((*(byte *)0x593e & 1) == 0) {
      *(undefined1 *)(DAT_3a29_00ab + 0x11) = 0x46;
      *(undefined1 *)(iVar4 + 0x12) = 0x46;
    }
    else {
      *(undefined1 *)(DAT_3a29_00ab + 0x11) = 0x4e;
      *(undefined1 *)(iVar4 + 0x12) = 0;
    }
    iVar4 = DAT_3a29_00ad;
    if ((*(byte *)0x593e & 0x10) == 0) {
      *(undefined1 *)(DAT_3a29_00ad + 0x15) = 0x46;
      *(undefined1 *)(iVar4 + 0x16) = 0x46;
    }
    else {
      *(undefined1 *)(DAT_3a29_00ad + 0x15) = 0x4e;
      *(undefined1 *)(iVar4 + 0x16) = 0;
    }
    uVar7 = 0x1851;
    FUN_1851_0cf5(uVar6);
    uStack_4 = 0;
    if ((-(uint)(*(char *)0x3bbe == '\0') & 2) != 0xfffd) {
      iVar4 = 0x14;
      puVar5 = (undefined2 *)0xa5;
      uVar6 = uVar7;
      do {
        uVar7 = 0x137f;
        thunk_EXT_FUN_0000_0000
                  (uVar6,*(undefined2 *)0xfe,iVar4,*puVar5,*(undefined2 *)0x326a,0x1812);
        iVar4 = iVar4 + 10;
        puVar5 = puVar5 + 1;
        uStack_4 = uStack_4 + 1;
        uVar6 = uVar7;
      } while (uStack_4 < (-(uint)(*(char *)0x3bbe == '\0') & 2) + 3);
    }
    thunk_EXT_FUN_0000_0000(uVar7,*(undefined2 *)0xfe,0x4e,0x16,0x3a29,0x1812);
    thunk_EXT_FUN_0000_0000(0x137f);
    FUN_171d_0273();
    do {
      uVar6 = 0x171d;
      uVar3 = FUN_171d_0293();
    } while (uVar3 == 0);
    if (uVar3 == 0x2064) {
      *(byte *)0x593e = *(byte *)0x593e ^ 4;
    }
    else if (uVar3 < 0x2065) {
      if (uVar3 == 0x11b) {
        bVar2 = false;
      }
      else if (uVar3 == 0x1970) {
        *(byte *)0x593e = *(byte *)0x593e ^ 0x10;
      }
    }
    else if (uVar3 == 0x2166) {
      *(byte *)0x593e = *(byte *)0x593e ^ 1;
    }
    else if (uVar3 == 0x2267) {
      *(byte *)0x593e = *(byte *)0x593e ^ 2;
    }
    else if (uVar3 == 0x2e63) {
      *(byte *)0x593e = *(byte *)0x593e ^ 8;
    }
  } while (bVar2);
  if (*(char *)0xde != '\0') {
    thunk_EXT_FUN_0000_0000(0x171d,0x41);
  }
  *(undefined2 *)0x3b8c = uVar1;
  return;
}
