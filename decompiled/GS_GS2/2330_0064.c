/* GS.GS2 2330:0064 undefined FUN_2330_0064(void) */
void __cdecl16far FUN_2330_0064(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  iVar2 = 0;
  do {
    if (*(int *)0x94ee <= iVar2) {
LAB_2330_00a3:
      for (; iVar2 < *(int *)0x94ee; iVar2 = iVar2 + 1) {
        iVar1 = iVar2 * 9;
        *(undefined2 *)(iVar1 + -0x6c20) = *(undefined2 *)(iVar1 + -0x6c17);
        *(undefined2 *)(iVar1 + -0x6c1e) = *(undefined2 *)(iVar1 + -0x6c15);
        *(undefined2 *)(iVar1 + -0x6c1c) = *(undefined2 *)(iVar1 + -0x6c13);
        *(undefined2 *)(iVar1 + -0x6c1a) = *(undefined2 *)(iVar1 + -0x6c11);
        *(undefined1 *)(iVar1 + -0x6c18) = *(undefined1 *)(iVar1 + -0x6c0f);
      }
      return;
    }
    if (*(char *)(iVar2 * 9 + -0x6c20) == param_1) {
      *(int *)0x94ee = *(int *)0x94ee + -1;
      goto LAB_2330_00a3;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
