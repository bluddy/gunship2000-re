/* GS2.GS2 2000:3668 undefined FUN_2000_3668(void) */
void __cdecl16far FUN_2000_3668(uint param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  byte bVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uStack_14;
  undefined2 local_e [5];
  int iStack_4;
  
  iVar7 = param_1 * 0x18;
  if (-0x1800 < *(int *)(iVar7 + 0x258a)) {
    *(int *)(iVar7 + 0x258a) = *(int *)(iVar7 + 0x258a) + -0x200;
  }
  puVar5 = (undefined2 *)(iVar7 + 0x2590);
  func_0x0000445c();
  puVar9 = local_e;
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  iStack_4 = func_0x0000693c(0x37f,local_e,0,0);
  uVar3 = *(undefined2 *)0x3364;
  if (*(int *)(iVar7 + 0x2598) <= iStack_4) {
    if (*(char *)(iVar7 + 0x2584) != '\0') {
      *(undefined1 *)(iVar7 + 0x2584) = 0;
    }
    puVar5 = (undefined2 *)(param_1 * 0x26 + 0x1682);
    puVar9 = (undefined2 *)(param_1 * 0x26 + 0x460a);
    for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uVar3 = *(undefined2 *)0x3364;
    *(undefined1 *)(iVar7 + 0x2582) = 0x1c;
    *(undefined2 *)(iVar7 + 0x2586) = 0xff9c;
    *(undefined1 *)(iVar7 + 0x2583) = 0;
    uVar3 = *(undefined2 *)0x3366;
    *(undefined1 *)(param_1 * 0x46 + 0x489) = 0;
    pcVar8 = (char *)(param_1 * 0x46 + 0x48b);
    uStack_14 = (char *)CONCAT22(uVar3,pcVar8);
    if ('\0' < *pcVar8) {
      *(byte *)(*pcVar8 * 0xe + 0x634) = *(byte *)(*pcVar8 * 0xe + 0x634) & 0xf9 | 1;
    }
    *uStack_14 = '\0';
    func_0x00000bc2(0x37f,3,param_1,0);
    iVar7 = (int)param_1 >> 1;
    if ((param_1 & 1) == 0) {
      bVar4 = *(byte *)(iVar7 + 0x284) & 0xf6 | 6;
    }
    else {
      bVar4 = *(byte *)(iVar7 + 0x284) & 0xf | 0x60;
    }
    *(byte *)(iVar7 + 0x284) = bVar4;
  }
  return;
}
