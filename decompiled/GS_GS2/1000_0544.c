/* GS.GS2 1000:0544 undefined FUN_1000_0544(void) */
void __cdecl16far FUN_1000_0544(int param_1)

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
    if (*(int *)0x76b2 <= iVar6) {
LAB_1000_057f:
      for (; iVar6 < *(int *)0x76b2; iVar6 = iVar6 + 1) {
        puVar5 = (undefined2 *)(iVar6 * 0x12 + 0x742e);
        puVar4 = (undefined2 *)(iVar6 * 0x12 + 0x7440);
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
      }
      return;
    }
    if (*(char *)(iVar6 * 0x12 + 0x742e) == param_1) {
      *(int *)0x76b2 = *(int *)0x76b2 + -1;
      goto LAB_1000_057f;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
