/* GS.GS2 2330:00ca undefined FUN_2330_00ca(void) */
void __cdecl16far FUN_2330_00ca(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uVar2 = 0x10bf;
  for (uStack_4 = 0; uStack_4 < *(int *)0x94ee; uStack_4 = uStack_4 + 1) {
    iVar1 = uStack_4 * 9;
    uVar3 = uVar2;
    if (*(char *)(iVar1 + -0x6c20) == param_1) {
      uStack_4 = param_3;
      uVar3 = 0x2658;
      thunk_EXT_FUN_0000_0000
                (uVar2,0x892,*(undefined2 *)(iVar1 + -0x6c1f),*(undefined2 *)(iVar1 + -0x6c1d),
                 *(undefined2 *)(iVar1 + -0x6c1b),*(undefined2 *)(iVar1 + -0x6c19),0x880,param_2);
    }
    uVar2 = uVar3;
  }
  return;
}
