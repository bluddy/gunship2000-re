/* GS2.GS2 171d:07ec undefined FUN_171d_07ec(void) */
undefined2 __cdecl16far FUN_171d_07ec(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  undefined2 uVar7;
  
  *(undefined1 *)0x133e = 1;
  DAT_171d_00b8 = 1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined2 *)param_1;
  puVar6 = (undefined2 *)0x4;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  DAT_171d_001c = DAT_171d_0008 - DAT_171d_0004;
  DAT_171d_0020 = DAT_171d_000a - DAT_171d_0006;
  DAT_171d_001e = DAT_171d_000c - DAT_171d_0008;
  DAT_171d_0022 = DAT_171d_000e - DAT_171d_000a;
  DAT_171d_0024 = DAT_171d_0014 - DAT_171d_0010;
  DAT_171d_0028 = DAT_171d_0016 - DAT_171d_0012;
  DAT_171d_0026 = DAT_171d_0018 - DAT_171d_0014;
  DAT_171d_002a = DAT_171d_001a - DAT_171d_0016;
  uVar3 = DAT_171d_000c;
  if (DAT_171d_000c < DAT_171d_000e) {
    uVar3 = DAT_171d_001a;
  }
  if (((uVar3 < 30000) && (uVar3 << 1 < 30000)) && (uVar3 << 2 < 30000)) {
    *(uint *)0x1340 = uVar3 << 2;
    return 0;
  }
  return 1;
}
