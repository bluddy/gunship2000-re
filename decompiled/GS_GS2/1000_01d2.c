/* GS.GS2 1000:01d2 undefined FUN_1000_01d2(void) */
void __cdecl16far FUN_1000_01d2(int param_1)

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
    if (*(int *)0x76b0 <= iVar6) {
LAB_1000_020d:
      for (; iVar6 < *(int *)0x76b0; iVar6 = iVar6 + 1) {
        puVar5 = (undefined2 *)(iVar6 * 0x26 + 0x7476);
        puVar4 = (undefined2 *)(iVar6 * 0x26 + 0x749c);
        for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
      }
      return;
    }
    if (*(char *)(iVar6 * 0x26 + 0x7476) == param_1) {
      *(int *)0x76b0 = *(int *)0x76b0 + -1;
      goto LAB_1000_020d;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
