/* GS.GS2 206a:0066 undefined FUN_206a_0066(void) */
void __cdecl16far FUN_206a_0066(int param_1)

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
    if (*(int *)0x916a <= iVar6) {
LAB_206a_00ab:
      for (; iVar6 < *(int *)0x916a; iVar6 = iVar6 + 1) {
        puVar5 = (undefined2 *)(iVar6 * 0xe + -0x703a);
        puVar4 = (undefined2 *)(iVar6 * 0xe + -0x702c);
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
      }
      return;
    }
    if (*(char *)(iVar6 * 0xe + -0x703a) == param_1) {
      *(int *)0x916a = *(int *)0x916a + -1;
      goto LAB_206a_00ab;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
