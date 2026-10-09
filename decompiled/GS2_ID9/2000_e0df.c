/* GS2.GS2 2000:e0df undefined FUN_2000_e0df(void) */
void __cdecl16far FUN_2000_e0df(int param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  uVar2 = *(undefined2 *)0x18cc;
  puVar6 = (undefined2 *)(param_1 + param_2 * 0x100 + ((uint)(param_2 * 0x100) >> 2));
  uVar5 = (param_3 - param_1) + 1;
  iVar3 = (param_4 - param_2) + 1;
  do {
    for (uVar4 = uVar5 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = param_5;
    }
    for (uVar4 = (uint)((uVar5 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar1 = puVar6;
      puVar6 = (undefined2 *)((int)puVar6 + 1);
      *(char *)puVar1 = (char)param_5;
    }
    puVar6 = (undefined2 *)((int)puVar6 + (0x140 - uVar5));
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
