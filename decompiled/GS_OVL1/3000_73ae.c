/* GS.GS2 3000:73ae undefined FUN_3000_73ae(void) */
void __cdecl16far FUN_3000_73ae(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined4 uVar8;
  int iVar9;
  
  func_0x00000eb0();
  iVar9 = 0;
  while (uVar6 = (undefined2)((ulong)*(undefined4 *)0xb858 >> 0x10),
        *(char *)((int)*(undefined4 *)0xb858 + iVar9 * 9 + 8) != '\b') {
    iVar9 = iVar9 + 1;
  }
  iVar2 = iVar9 * 9;
  uVar8 = func_0x00003aec(0xbf,*(undefined2 *)(iVar2 + *(int *)0xb858),
                          *(undefined2 *)(iVar2 + *(int *)0xb858 + 2),0x155,0);
  uVar1 = *(uint *)(param_1 + 6);
  if ((((uint)uVar8 - uVar1 != 1) ||
      ((int)((ulong)uVar8 >> 0x10) - ((int)uVar1 >> 0xf) != (uint)((uint)uVar8 < uVar1))) ||
     (iVar2 = func_0x00003aec(0xbf,*(undefined2 *)(iVar2 + *(int *)0xb858 + 4),
                              *(undefined2 *)(iVar2 + *(int *)0xb858 + 6),0xfe39,0xffff),
     iVar2 - *(int *)(param_1 + 8) != -0x481)) {
    do {
      iVar9 = iVar9 + 1;
    } while (*(char *)((int)*(undefined4 *)0xb858 + iVar9 * 9 + 8) != '\b');
  }
  if (param_3 == '\0') {
    *(undefined2 *)(param_2 + 4) = 2;
    uVar6 = 0xbf;
    iVar2 = 0;
    do {
      uVar8 = func_0x0000eeb2(uVar6,*(undefined2 *)(param_2 + 8),*(undefined2 *)(param_2 + 10),
                              (iVar2 + 3) * 9);
      *(undefined2 *)(param_2 + 8) = (int)uVar8;
      *(undefined2 *)(param_2 + 10) = (int)((ulong)uVar8 >> 0x10);
      puVar3 = (undefined2 *)((iVar2 + iVar9) * 9 + *(int *)0xb858);
      uVar6 = *(undefined2 *)0xb85a;
      uVar7 = (undefined2)((ulong)*(undefined4 *)(param_2 + 8) >> 0x10);
      iVar4 = iVar2 * 9 + (int)*(undefined4 *)(param_2 + 8);
      *(undefined2 *)(iVar4 + 0x12) = *puVar3;
      *(undefined2 *)(iVar4 + 0x14) = puVar3[1];
      *(undefined2 *)(iVar4 + 0x16) = puVar3[2];
      *(undefined2 *)(iVar4 + 0x18) = puVar3[3];
      *(undefined1 *)(iVar4 + 0x1a) = *(undefined1 *)(puVar3 + 4);
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      iVar4 = iVar2 + 1;
      iVar5 = iVar2 + iVar9;
      uVar7 = (undefined2)((ulong)*(undefined4 *)0xb858 >> 0x10);
      uVar6 = 0xdea;
      iVar2 = iVar4;
    } while (*(char *)((int)*(undefined4 *)0xb858 + iVar5 * 9 + 8) != '@');
    iVar4 = (iVar4 + iVar9) * 9 + *(int *)0xb858;
    iVar2 = func_0x00003aec(0xdea,*(undefined2 *)(iVar4 + -9),*(undefined2 *)(iVar4 + -7),0x155,0);
    iVar9 = *(int *)0xc018;
    *(int *)(iVar9 * 0xb + -0x435c) = iVar2 + -1;
    iVar2 = func_0x00003aec(0xbf,*(undefined2 *)(iVar4 + -5),*(undefined2 *)(iVar4 + -3),0xfe39,
                            0xffff);
    *(int *)(iVar9 * 0xb + -0x435a) = iVar2 + 0x47f;
    FUN_3000_2c36(param_2);
    return;
  }
  iVar9 = iVar9 * 9;
  uVar7 = (undefined2)((ulong)*(undefined4 *)0xb858 >> 0x10);
  iVar2 = (int)*(undefined4 *)0xb858;
  uVar6 = *(undefined2 *)(iVar9 + iVar2 + 2);
  *(undefined2 *)0xa27c = *(undefined2 *)(iVar9 + iVar2);
  *(undefined2 *)0xa27e = uVar6;
  uVar6 = *(undefined2 *)(iVar9 + iVar2 + 6);
  *(undefined2 *)0xaca0 = *(undefined2 *)(iVar9 + iVar2 + 4);
  *(undefined2 *)0xaca2 = uVar6;
  return;
}
