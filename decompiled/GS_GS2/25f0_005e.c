/* GS.GS2 25f0:005e undefined FUN_25f0_005e(void) */
void __cdecl16far FUN_25f0_005e(int param_1)

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
    if (*(int *)0x9820 <= iVar6) {
LAB_25f0_009f:
      for (; iVar6 < *(int *)0x9820; iVar6 = iVar6 + 1) {
        puVar5 = (undefined2 *)(iVar6 * 0xf + -0x6876);
        puVar4 = (undefined2 *)(iVar6 * 0xf + -0x6867);
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      }
      return;
    }
    if (*(char *)(iVar6 * 0xf + -0x6876) == param_1) {
      *(int *)0x9820 = *(int *)0x9820 + -1;
      goto LAB_25f0_009f;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
