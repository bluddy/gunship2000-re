/* GS.GS2 2163:173a undefined FUN_2163_173a(void) */
void __cdecl16far FUN_2163_173a(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  uint uStackY_a;
  
  FUN_10bf_02c0();
  FUN_2634_0204((int)param_1[2]);
  iVar1 = (int)*param_1;
  iVar2 = FUN_2581_039c();
  if (-1 < iVar2) {
    uStackY_a = 0;
    iVar4 = 0x2581;
    while (uStackY_a < 3) {
      iVar1 = (int)param_1[uStackY_a + 3];
      iVar3 = FUN_2634_0204();
      if (-1 < iVar3) {
        *(int *)(param_1 + uStackY_a * 2 + 6) =
             *(int *)((int)*(undefined4 *)0xbc38 + iVar3 * 0xd6 + 0xf) *
             (int)*(char *)((int)*(undefined4 *)0xb83a + iVar2 * 0xfc + 9);
        iVar1 = iVar1 + *(int *)((int)*(undefined4 *)0xbc38 + iVar3 * 0xd6 + 0xd) *
                        *(int *)(param_1 + uStackY_a * 2 + 0xc) +
                        *(int *)(param_1 + uStackY_a * 2 + 6);
      }
      uStackY_a = iVar4 + 1;
      iVar4 = 0x2634;
    }
  }
  *(int *)(param_1 + 0x19) = iVar1;
  return;
}
