/* GS2.GS2 2000:3598 undefined FUN_2000_3598(void) */
void __cdecl16far FUN_2000_3598(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_e [6];
  
  iVar6 = param_1 * 0x18;
  if (-0x1800 < *(int *)(iVar6 + 0x258a)) {
    *(undefined2 *)(iVar6 + 0x258a) = 0xfe00;
  }
  puVar4 = (undefined2 *)(iVar6 + 0x2590);
  func_0x0000445c();
  puVar7 = local_e;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iVar5 = func_0x0000693c(0x37f,local_e);
  uVar3 = *(undefined2 *)0x3364;
  if (*(int *)(iVar6 + 0x2598) <= iVar5) {
    *(int *)(iVar6 + 0x2598) = iVar5;
    if (*(char *)(iVar6 + 0x2584) != '\0') {
      *(undefined1 *)(iVar6 + 0x2584) = 0;
    }
    puVar4 = (undefined2 *)(param_1 * 0x26 + 0x1682);
    puVar7 = (undefined2 *)(param_1 * 0x26 + 0x460a);
    for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    uVar3 = *(undefined2 *)0x3364;
    *(undefined1 *)(iVar6 + 0x2582) = 0x1c;
    *(undefined2 *)(iVar6 + 0x2586) = 0xff9c;
    *(undefined1 *)(iVar6 + 0x2583) = 0;
  }
  return;
}
