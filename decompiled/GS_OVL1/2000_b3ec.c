/* GS.GS2 2000:b3ec undefined FUN_2000_b3ec(void) */
undefined2 __cdecl16far FUN_2000_b3ec(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_26 [5];
  undefined1 uStack_1c;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iVar9;
  
  func_0x00000eb0();
  func_0x00013acc();
  func_0x00018b52();
  *(undefined2 *)0xaca4 = 0x50;
  if ((*(uint *)((int)*(undefined4 *)0xb860 + *(int *)0xc4d2 * 0x27 + 0x25) & 0x4000) != 0) {
    if (*(int *)0xb8ce == 2) {
      uVar4 = 5;
    }
    else {
      uVar4 = 2;
    }
    *(undefined2 *)0xb832 = uVar4;
  }
  uVar4 = 0x17d1;
  for (iVar9 = 9; iVar9 < 0x50; iVar9 = iVar9 + 1) {
    uVar8 = uVar4;
    if ((*(uint *)((uint)*(byte *)(iVar9 + -0x4794) * 0x27 + *(int *)0xb860 + 0x25) & 0x600) != 0) {
      uStack_e = 0xb5d6;
      uVar8 = 0xbf;
      uStack_12 = 0xb468;
      uStack_10 = uVar4;
      func_0x00003d8c();
    }
    uVar4 = uVar8;
  }
  uVar3 = func_0x00013a46();
  *(undefined1 *)0xa26b = uVar3;
  iVar9 = func_0x00013a46();
  *(char *)0xa26c = (*(char *)0xa26b <= iVar9) + (char)iVar9;
  if (*(char *)0xe282 == '\x05') {
    piVar5 = (int *)func_0x00007696();
    piVar7 = local_26;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      piVar2 = piVar7;
      piVar7 = piVar7 + 1;
      piVar1 = piVar5;
      piVar5 = piVar5 + 1;
      *piVar2 = *piVar1;
    }
    if (local_26[0] == -1) {
      piVar5 = (int *)func_0x00007696();
      piVar7 = local_26;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        piVar2 = piVar7;
        piVar7 = piVar7 + 1;
        piVar1 = piVar5;
        piVar5 = piVar5 + 1;
        *piVar2 = *piVar1;
      }
    }
    uStack_1c = 0x1b;
    for (iVar9 = 0; iVar9 < 4; iVar9 = iVar9 + 1) {
      piVar5 = (int *)((*(char *)0xe282 + iVar9) * 0x20 + -0x5d80);
      piVar7 = local_26;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        piVar2 = piVar5;
        piVar5 = piVar5 + 1;
        piVar1 = piVar7;
        piVar7 = piVar7 + 1;
        *piVar2 = *piVar1;
      }
    }
  }
  *(undefined1 *)0xe278 = *(undefined1 *)0xbc60;
  return 0xffff;
}
