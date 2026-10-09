/* GS2.GS2 2000:e148 undefined FUN_2000_e148(void) */
void __cdecl16far FUN_2000_e148(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 unaff_DS;
  
  uVar4 = *(undefined2 *)0x18ca;
  uVar5 = *(undefined2 *)0x18ca;
  puVar9 = (undefined2 *)(param_1 + param_2 * 0x100 + ((uint)(param_2 * 0x100) >> 2));
  param_4 = param_4 - param_2;
  do {
    puVar8 = (undefined2 *)((int)puVar9 + param_5);
    uVar6 = (param_3 - param_1) - param_5;
    puVar10 = puVar9;
    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar2;
    }
    if ((uVar6 & 1) != 0) {
      puVar2 = puVar8;
      puVar8 = (undefined2 *)((int)puVar8 + 1);
      *(undefined1 *)puVar10 = *(undefined1 *)puVar2;
    }
    puVar10 = (undefined2 *)((int)puVar8 + 1);
    uVar1 = *(undefined1 *)puVar8;
    for (uVar6 = param_5 - 1U >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = CONCAT11(uVar1,uVar1);
    }
    if ((param_5 - 1U & 1) != 0) {
      *(undefined1 *)puVar10 = uVar1;
    }
    puVar9 = puVar9 + 0xa0;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}
