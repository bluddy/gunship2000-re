/* GS.GS2 1b63:02d6 undefined FUN_1b63_02d6(void) */
void __cdecl16far FUN_1b63_02d6(char param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 in_DX;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (param_1 != -1) {
    FUN_1b63_0366((int)param_1);
  }
  if (*(int *)0x820a == 0 && *(int *)0x8208 == 0) {
    uVar4 = FUN_1dea_1048(0xe);
    *(undefined2 *)0x8208 = uVar4;
    *(undefined2 *)0x820a = in_DX;
    *(undefined2 *)0x8206 = 0;
  }
  else {
    uVar4 = FUN_1dea_1012(*(undefined2 *)0x8208,*(undefined2 *)0x820a,(*(int *)0x8206 + 1) * 0xe);
    *(undefined2 *)0x8208 = uVar4;
    *(undefined2 *)0x820a = in_DX;
  }
  uVar3 = *(undefined4 *)0x8208;
  puVar7 = (undefined2 *)(*(int *)0x8206 * 0xe + (int)uVar3);
  puVar6 = (undefined2 *)&param_1;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  *(int *)0x8206 = *(int *)0x8206 + 1;
  return;
}
