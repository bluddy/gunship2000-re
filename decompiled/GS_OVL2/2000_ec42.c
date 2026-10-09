/* GS.GS2 2000:ec42 undefined FUN_2000_ec42(void) */
void __cdecl16far
FUN_2000_ec42(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 *param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined2 *puVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined2 *puVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_b2 [82];
  char local_60 [4];
  int iStack_5c;
  int iStack_5a;
  undefined1 uStack_58;
  char cStack_57;
  undefined2 uStack_42;
  undefined2 auStack_3e [8];
  uint uStack_2e;
  int iStack_2a;
  int iStack_28;
  int local_26;
  undefined2 uStack_24;
  int iStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  
  func_0x00000eb0();
  local_60[1] = 3;
  local_60[2] = 10;
  local_60[3] = 0xf;
  iStack_5c = *(int *)0x9bae + 8;
  iStack_5a = *(int *)0x9bb0 + *(int *)0x9bac + 3;
  uStack_58 = 1;
  local_60[0] = *(char *)0x9ba2;
  cStack_57 = local_60[0] + '\x01';
  puStack_e = local_b2;
  uStack_10 = 0xbf;
  uStack_12 = 0xec91;
  func_0x00003d8c();
  puStack_e = (undefined1 *)0xeca0;
  iVar6 = func_0x00003674();
  iStack_28 = (-(uint)(iVar6 == 0) & 0xfffa) + 0xc;
  puStack_e = (undefined1 *)0xbf;
  uStack_10 = 0xecc0;
  func_0x00002e40();
  uStack_2e = (uint)(byte)uStack_2e;
  puVar10 = auStack_3e;
  pcVar7 = local_60;
  for (iVar6 = 0x1c; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 2;
    *puVar3 = *(undefined2 *)pcVar1;
  }
  uStack_42 = 0xecdb;
  func_0x000102ca();
  puStack_e = (undefined1 *)0x102b;
  uStack_10 = 0xeceb;
  func_0x0000382a();
  local_26 = *(int *)0x9ba2 + 1;
  uStack_24 = *(undefined2 *)0x9bae;
  iStack_22 = *(int *)0x9bb0 + *(int *)0x9bac;
  iStack_1e = iStack_28;
  uStack_20 = 1;
  uStack_1c = 1;
  uStack_1a = 0;
  piVar9 = &iStack_2a;
  piVar8 = &local_26;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    piVar4 = piVar9;
    piVar9 = piVar9 + 1;
    piVar2 = piVar8;
    piVar8 = piVar8 + 1;
    *piVar4 = *piVar2;
  }
  uStack_2e = 0xed2c;
  func_0x00000770();
  if (*(int *)0x9bb0 == 0) {
    *(undefined2 *)0x9bb0 = *(undefined2 *)0x9bac;
    *(undefined2 *)0x9bac = 0;
  }
  *(int *)0x9bac = *(int *)0x9bac + iStack_28;
  iVar6 = *(int *)0x9ba2 * 0x11;
  *(undefined2 *)(iVar6 + -0x6700) = param_3;
  *(undefined2 *)(iVar6 + -0x66fe) = param_4;
  *(undefined2 *)(iVar6 + -0x66fc) = param_5;
  if (param_6 == (undefined2 *)0x0) {
    puStack_e = (undefined1 *)0x6f;
    uStack_10 = 0xed9c;
    func_0x0000382a();
  }
  else {
    puVar10 = (undefined2 *)(iVar6 + -0x66fa);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar5 = puVar10;
      puVar10 = puVar10 + 1;
      puVar3 = param_6;
      param_6 = param_6 + 1;
      *puVar5 = *puVar3;
    }
    *(undefined1 *)puVar10 = *(undefined1 *)param_6;
    func_0x00010e6a();
  }
  *(int *)0x9ba2 = *(int *)0x9ba2 + 1;
  return;
}
