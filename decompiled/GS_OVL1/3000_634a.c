/* GS.GS2 3000:634a undefined FUN_3000_634a(void) */
void __cdecl16far FUN_3000_634a(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 uStackY_12;
  int iVar7;
  uint uVar8;
  
  func_0x00000eb0();
  iVar7 = 0;
  bVar1 = *(byte *)((int)*(undefined4 *)0xa278 +
                    (uint)*(byte *)((int)*(undefined4 *)0xb85c + *(int *)(param_1 + 2) * 8 + 1) *
                    0x1b + 1);
  bVar1 = (bVar1 - 9 & -(bVar1 < 9)) + 9;
  if ((uint)bVar1 - *(int *)0xc01c == -1) {
    uStackY_12 = 0xe;
  }
  else {
    uStackY_12 = *(undefined1 *)((uint)bVar1 * 10 + 0x2b9d);
  }
  func_0x0000582f(0xbf);
  func_0x00005ba0(0xbf);
  func_0x000059f5(0xbf);
  func_0x0000582f(0xbf);
  func_0x00005ba0(0xbf);
  uVar8 = 0x63e1;
  iVar2 = func_0x000059f5(0xbf);
  uVar3 = iVar2 + 4;
  if ((*(char *)0x29ea != '\0') || (*(char *)0x2a05 != '\0')) {
    iVar2 = *(int *)(param_1 + 2) * 8 + *(int *)0xb85c;
    if ((*(char *)((int)*(undefined4 *)0xa278 + (uint)*(byte *)(iVar2 + 1) * 0x1b + 1) != '\x05') ||
       (*(char *)(iVar2 + 2) != '\x02')) {
      uVar6 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
      if (*(char *)((int)*(undefined4 *)0xb85c + *(int *)(param_1 + 2) * 8 + 2) == '\x01') {
        do {
          uVar4 = (uint)*(byte *)((*(byte *)(*(int *)0xb85c + (*(int *)(param_1 + 2) + iVar7) * 8 +
                                            3) & 0xf) * 0x1b + (int)*(undefined4 *)0xa272);
          FUN_3000_182e(1);
          uVar3 = (uint)*(byte *)((uint)(*(byte *)((int)*(undefined4 *)0xb85c +
                                                   (*(int *)(param_1 + 2) + uVar3) * 8 + 3) >> 4) *
                                  0x1b + (int)*(undefined4 *)0xa272);
          uStackY_12 = 0xaf;
          uVar8 = uVar3;
          FUN_3000_182e(1);
          iVar7 = uVar4 + 1;
          uVar6 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
        } while (*(char *)((*(int *)(param_1 + 2) + iVar7) * 8 + (int)*(undefined4 *)0xb85c) == -1);
      }
      else {
        uVar4 = (uint)*(byte *)((*(byte *)(*(int *)0xb85c + *(int *)(param_1 + 2) * 8 + 3) & 0xf) *
                                0x1b + (int)*(undefined4 *)0xa272);
        FUN_3000_182e(1,uVar4,uVar3,uVar4,0x9f);
        uVar3 = (uint)*(byte *)((uint)(*(byte *)((int)*(undefined4 *)0xb85c +
                                                 *(int *)(param_1 + 2) * 8 + 3) >> 4) * 0x1b +
                               (int)*(undefined4 *)0xa272);
        uStackY_12 = 0x33;
        uVar8 = uVar3;
        FUN_3000_182e(1,uVar3,uVar4,uVar3,0x9f);
      }
    }
  }
  if (8 < *(byte *)((int)*(undefined4 *)0xa278 +
                    (uint)*(byte *)((int)*(undefined4 *)0xb85c + *(int *)(param_1 + 2) * 8 + 1) *
                    0x1b + 1)) {
    uVar8 = 0xbf;
    iVar7 = FUN_3000_3aee(*(int *)(param_1 + 2));
    uStackY_12 = 0x44;
    while (iVar2 = iVar7 + -1, iVar7 != 0) {
      iVar7 = iVar2;
      if (*(char *)((int)*(undefined4 *)0xb85c + (*(int *)(param_1 + 2) + iVar2) * 8 + 3) == '\0') {
        uStackY_12 = 6;
      }
    }
  }
  uVar6 = *(undefined2 *)0xbc32;
  puVar5 = (undefined1 *)(uVar3 * 0x140 + uVar8);
  *puVar5 = uStackY_12;
  iVar7 = *(int *)(param_1 + 2) * 8 + *(int *)0xb85c;
  if (*(char *)(iVar7 + 2) == '\x01') {
    if (8 < *(byte *)((int)*(undefined4 *)0xa278 + (uint)*(byte *)(iVar7 + 1) * 0x1b + 1)) {
      puVar5 = (undefined1 *)*(int *)(param_1 + 2);
      iVar7 = FUN_3000_3aee();
      uStackY_12 = 6;
      while (iVar2 = iVar7 + -1, iVar7 != 0) {
        iVar7 = iVar2;
        if (*(char *)((int)*(undefined4 *)0xb85c + (*(int *)(param_1 + 2) + iVar2) * 8 + 3) != '\0')
        {
          uStackY_12 = 0x44;
        }
      }
    }
    puVar5[0x13f] = uStackY_12;
    puVar5[0x141] = uStackY_12;
  }
  return;
}
