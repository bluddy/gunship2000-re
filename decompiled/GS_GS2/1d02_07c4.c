/* GS.GS2 1d02:07c4 undefined FUN_1d02_07c4(void) */
void __cdecl16far FUN_1d02_07c4(int param_1,int param_2)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  char *pcVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  char *pcVar9;
  undefined2 *puVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_c;
  int iStack_a;
  
  FUN_10bf_02c0();
  if (param_2 != param_1) {
    puVar7 = (undefined2 *)(param_2 * 10 + -0x43f8);
    puVar10 = &local_c;
    puVar8 = puVar7;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar1;
    }
    pcVar5 = (char *)(param_1 * 10 + -0x43f8);
    pcVar9 = pcVar5;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 2;
      *puVar1 = *(undefined2 *)pcVar2;
    }
    puVar10 = &local_c;
    pcVar9 = pcVar5;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 2;
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      *(undefined2 *)pcVar2 = *puVar1;
    }
    uVar4 = *(undefined2 *)(param_2 * 2 + -0x43d0);
    *(undefined2 *)(param_2 * 2 + -0x43d0) = *(undefined2 *)(param_1 * 2 + -0x43d0);
    *(undefined2 *)(param_1 * 2 + -0x43d0) = uVar4;
    iStack_a = param_1 + 1;
    local_c = 0x10bf;
    thunk_EXT_FUN_0000_0000();
    iStack_a = param_2 + 1;
    local_c = 0x2658;
    thunk_EXT_FUN_0000_0000();
    if ('\x01' < *pcVar5) {
      *pcVar5 = *pcVar5 + -1;
    }
    if ('\x01' < *(char *)(param_2 * 10 + -0x43f8)) {
      pcVar2 = (char *)(param_2 * 10 + -0x43f8);
      *pcVar2 = *pcVar2 + -1;
    }
  }
  return;
}
