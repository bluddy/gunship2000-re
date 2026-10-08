/* GS.GS2 106f:00c0 undefined FUN_106f_00c0(void) */
void __cdecl16far FUN_106f_00c0(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  int iVar6;
  
  FUN_10bf_02c0();
  iVar6 = 0;
  do {
    if (*(int *)0x79f4 <= iVar6) {
LAB_106f_00f9:
      for (; iVar6 < *(int *)0x79f4; iVar6 = iVar6 + 1) {
        puVar5 = (undefined2 *)(iVar6 * 0x24 + 0x76dc);
        puVar4 = (undefined2 *)(iVar6 * 0x24 + 0x7700);
        for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
      }
      return;
    }
    if (*(int *)(iVar6 * 0x24 + 0x76dc) == param_1) {
      *(int *)0x79f4 = *(int *)0x79f4 + -1;
      goto LAB_106f_00f9;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
