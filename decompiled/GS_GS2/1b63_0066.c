/* GS.GS2 1b63:0066 undefined FUN_1b63_0066(void) */
void __cdecl16far FUN_1b63_0066(int param_1)

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
    if (*(int *)0x820c <= iVar6) {
LAB_1b63_00ab:
      for (; iVar6 < *(int *)0x820c; iVar6 = iVar6 + 1) {
        puVar5 = (undefined2 *)(iVar6 * 0xd + 0x7a68);
        puVar4 = (undefined2 *)(iVar6 * 0xd + 0x7a75);
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
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
    if (*(char *)(iVar6 * 0xd + 0x7a68) == param_1) {
      *(int *)0x820c = *(int *)0x820c + -1;
      goto LAB_1b63_00ab;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
