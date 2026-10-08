/* GS.GS2 202b:005c undefined FUN_202b_005c(void) */
void __cdecl16far FUN_202b_005c(int param_1)

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
    if (*(int *)0x8fc4 <= iVar6) {
LAB_202b_0097:
      for (; iVar6 < *(int *)0x8fc4; iVar6 = iVar6 + 1) {
        puVar5 = (undefined2 *)(iVar6 * 0x38 + -0x78fc);
        puVar4 = (undefined2 *)(iVar6 * 0x38 + -0x78c4);
        for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
      }
      return;
    }
    if (*(char *)(iVar6 * 0x38 + -0x78fc) == param_1) {
      *(int *)0x8fc4 = *(int *)0x8fc4 + -1;
      goto LAB_202b_0097;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
