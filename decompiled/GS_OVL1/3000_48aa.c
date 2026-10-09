/* GS.GS2 3000:48aa undefined FUN_3000_48aa(void) */
int __cdecl16far FUN_3000_48aa(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int iVar7;
  
  func_0x00000eb0();
  iVar4 = *(int *)0xc018;
  iVar7 = *(int *)0xc024;
  *(undefined2 *)(iVar7 * 8 + -0x3c6c) = *(undefined2 *)(iVar4 * 0xb + -0x4362);
  iVar4 = *(int *)(iVar4 * 0xb + -0x4360);
  *(int *)(iVar7 * 8 + -0x3c6e) = iVar4;
  uVar6 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
  if (*(char *)((int)*(undefined4 *)0xb85c + iVar4 * 8 + 2) == '\x01') {
    iVar7 = 0;
    while (uVar6 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10),
          *(uint *)((int)*(undefined4 *)0xb860 + *(int *)(*(int *)0xc018 * 0xb + -0x4362) * 0x27 +
                   0x19) != (uint)*(byte *)(iVar7 * 0x1a + (int)*(undefined4 *)0xa25c)) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = *(int *)0xc024 * 8;
    uVar1 = *(undefined2 *)0xa25e;
    iVar2 = *(int *)(*(int *)0xb860 + *(int *)(iVar7 + -0x3c6c) * 0x27 + 0x19) * 0x1a +
            *(int *)0xa25c + 1;
    *(int *)(iVar7 + -0x3c72) = iVar2;
    *(undefined2 *)(iVar7 + -0x3c70) = uVar1;
  }
  else {
    iVar2 = *(int *)0xc018 * 0xb;
    uVar3 = (uint)*(byte *)(*(int *)0xb85c + *(int *)(iVar2 + -0x4360) * 8 + 1);
    uVar6 = *(undefined2 *)0xa27a;
    iVar4 = *(int *)0xc024;
    *(int *)(iVar4 * 8 + -0x3c72) = uVar3 * 0x1b + *(int *)0xa278 + 2;
    *(undefined2 *)(iVar4 * 8 + -0x3c70) = uVar6;
    if ((*(char *)((int)*(undefined4 *)0xa278 + uVar3 * 0x1b + 1) != '\b') ||
       ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)(iVar2 + -0x4362) * 0x27 + 0x24) & 0x10) ==
        0)) {
      iVar2 = *(int *)0xc018;
      iVar5 = *(int *)(iVar2 * 0xb + -0x4362) * 0x27;
      uVar6 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
      iVar4 = (int)*(undefined4 *)0xb860;
      if ((*(int *)(iVar4 + iVar5 + 0x23) != 0) || (*(int *)(iVar4 + iVar5 + 0x25) != 0x1000)) {
        while (iVar2 = iVar7, iVar7 = iVar2 + -1, iVar2 != 0) {
          iVar4 = *(int *)(iVar7 * 8 + -0x3c6e) * 8 + *(int *)0xb85c;
          uVar6 = *(undefined2 *)0xb85e;
          iVar2 = *(int *)(*(int *)0xc024 * 8 + -0x3c6e) * 8 + *(int *)0xb85c;
          if ((*(char *)(iVar2 + 1) == *(char *)(iVar4 + 1)) &&
             (*(char *)(iVar2 + 3) == *(char *)(iVar4 + 3))) {
            return 0;
          }
        }
      }
    }
  }
  *(int *)0xc024 = *(int *)0xc024 + 1;
  return iVar2;
}
