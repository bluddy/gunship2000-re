/* GS.GS2 1b63:0366 undefined FUN_1b63_0366(void) */
void __cdecl16far FUN_1b63_0366(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  int iVar7;
  
  FUN_10bf_02c0();
  iVar7 = 0;
  do {
    if (*(int *)0x8206 <= iVar7) {
LAB_1b63_03af:
      for (; iVar7 < *(int *)0x8206; iVar7 = iVar7 + 1) {
        puVar4 = (undefined2 *)(iVar7 * 0xe + *(int *)0x8208);
        uVar3 = *(undefined2 *)0x820a;
        puVar6 = puVar4 + 7;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
      }
      return;
    }
    if (*(char *)(iVar7 * 0xe + (int)*(undefined4 *)0x8208) == param_1) {
      *(int *)0x8206 = *(int *)0x8206 + -1;
      goto LAB_1b63_03af;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}
