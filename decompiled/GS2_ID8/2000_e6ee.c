/* GS2.GS2 2000:e6ee undefined FUN_2000_e6ee(void) */
undefined2 __cdecl16far FUN_2000_e6ee(uint param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 unaff_DS;
  
  uVar2 = *(undefined2 *)0x18ca;
  uVar3 = *(undefined2 *)0x18ca;
  puVar7 = (undefined1 *)((param_1 >> 3) + param_2 * 0x28);
  out(0x3ce,0x105);
  iVar6 = (param_3 - param_1 >> 3) + 1;
  param_4 = param_4 - param_2;
  iVar5 = iVar6;
  puVar4 = puVar7;
  puVar8 = puVar7;
  do {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = puVar4[1];
      puVar4 = puVar4 + 1;
    }
    puVar7 = puVar8 + 0x28;
    param_4 = param_4 + -1;
    iVar5 = iVar6;
    puVar4 = puVar7;
    puVar8 = puVar7;
  } while (param_4 != 0);
  return 0x105;
}
