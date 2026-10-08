/* GS.GS2 165c:02a4 undefined FUN_165c_02a4(void) */
void __cdecl16far
FUN_165c_02a4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int *param_5,int *param_6)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = FUN_10bf_2efc(param_1,param_2,0x1000,0);
  *param_5 = iVar1 + *(int *)0x7a1e;
  iVar1 = FUN_10bf_2efc(param_3,param_4,0x1000,0);
  *param_6 = 0x7f - (iVar1 - *(int *)0x7a20);
  return;
}
