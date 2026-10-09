/* GS2.GS2 2000:d624 undefined FUN_2000_d624(void) */
void __cdecl16far FUN_2000_d624(int param_1,int param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  
  uVar10 = (undefined2)((ulong)param_3 >> 0x10);
  puVar8 = (undefined2 *)((int)param_3 + param_1 * 3);
  puVar9 = (undefined2 *)((int)param_3 + param_1 * 3);
  puVar1 = puVar8 + 1;
  uVar3 = *puVar8;
  uVar2 = *(undefined1 *)puVar1;
  for (iVar7 = param_2 * 3 + -3; puVar1 = (undefined2 *)((int)puVar1 + 1), iVar7 != 0;
      iVar7 = iVar7 + -1) {
    puVar4 = puVar9;
    puVar9 = (undefined2 *)((int)puVar9 + 1);
    *(undefined1 *)puVar4 = *(undefined1 *)puVar1;
  }
  *puVar9 = uVar3;
  *(undefined1 *)(puVar9 + 1) = uVar2;
  do {
    bVar6 = in(0x3da);
  } while ((bVar6 & 8) == 0);
  pcVar5 = (code *)swi(0x10);
  (*pcVar5)();
  return;
}
