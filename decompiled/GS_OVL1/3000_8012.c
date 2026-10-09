/* GS.GS2 3000:8012 undefined FUN_3000_8012(void) */
void __cdecl16far FUN_3000_8012(void)

{
  byte *pbVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int iVar6;
  
  func_0x00000eb0();
  func_0x0000c980(0xbf,3);
  uVar5 = *(undefined2 *)0xb8e0;
  *(undefined2 *)0xbc8a = *(undefined2 *)0xb8de;
  *(undefined2 *)0xbc8c = uVar5;
  FUN_3000_19dc();
  if (*(int *)0xb8ce == 2) {
    *(undefined1 *)0xa03c = 0;
    iVar6 = 6;
    while (iVar6 != 0) {
      *(undefined1 *)(iVar6 + -0x3fef) = *(undefined1 *)(iVar6 + 0x2fb7);
      iVar6 = iVar6 + -1;
    }
  }
  else {
    *(undefined1 *)0xa03c = 0xff;
    iVar6 = 6;
    while (iVar6 != 0) {
      *(undefined1 *)(iVar6 + -0x3fef) = *(undefined1 *)(iVar6 + 0x2fbe);
      iVar6 = iVar6 + -1;
    }
  }
  uVar2 = *(undefined1 *)0xa03c;
  *(undefined1 *)0xa03d = uVar2;
  *(undefined1 *)0xa03e = uVar2;
  if ((*(byte *)0xa249 & 2) == 0) {
    FUN_3000_126e(*(undefined2 *)0x988,*(undefined2 *)0x98a,199,0x4c,0x15,0xf);
  }
  else {
    FUN_3000_126e(0xc012);
  }
  *(undefined1 *)0x9f6d = 0;
  *(undefined1 *)0x9f6e = 0;
  *(undefined1 *)0x9f6f = 0;
  FUN_3000_1206();
  *(undefined1 *)0xe28f = 1;
  func_0x0001fc5e(0xc87);
  for (iVar6 = 0; iVar6 < *(int *)0xb8ca; iVar6 = iVar6 + 1) {
    iVar4 = iVar6 * 8;
    uVar5 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
    iVar3 = (int)*(undefined4 *)0xb85c;
    if (((((*(char *)(iVar3 + iVar4 + 1) == -0x25) || (*(char *)(iVar3 + iVar4 + 1) == '\x16')) ||
         (*(char *)(iVar3 + iVar4 + 1) == -0x69)) ||
        (((*(char *)(iVar3 + iVar4 + 1) == -0x1c || (*(char *)(iVar3 + iVar4 + 1) == -0x50)) ||
         (*(char *)(iVar3 + iVar4 + 1) == 'B')))) && (iVar3 = FUN_3000_3aee(iVar6), iVar3 == 1)) {
      *(undefined1 *)((int)*(undefined4 *)0xb85c + iVar6 * 8 + 2) = 2;
    }
  }
  for (iVar6 = 0; iVar6 < *(int *)0xb8c8; iVar6 = iVar6 + 1) {
    iVar3 = 0;
    while (*(uint *)((int)*(undefined4 *)0xb860 + iVar6 * 0x27 + 0x19) !=
           (uint)*(byte *)(iVar3 * 8 + (int)*(undefined4 *)0xb85c)) {
      iVar3 = iVar3 + 1;
    }
    if (*(char *)((int)*(undefined4 *)0xb85c + iVar3 * 8 + 2) == '\x01') {
      pbVar1 = (byte *)((int)*(undefined4 *)0xb860 + iVar6 * 0x27 + 0x25);
      *pbVar1 = *pbVar1 | 8;
    }
  }
  FUN_3000_1346(*(undefined2 *)0xc026,3,0xed,0x56,0);
  FUN_3000_1346(*(undefined2 *)0xc028,2,199,0x60,0);
  FUN_3000_1346(*(undefined2 *)0xc02a,3,0x101,0x60,0);
  return;
}
