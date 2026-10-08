/* GS.GS2 1ef4:0306 undefined FUN_1ef4_0306(void) */
void __cdecl16far FUN_1ef4_0306(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined2 unaff_DS;
  int iVar1;
  
  FUN_10bf_02c0();
  *(undefined2 *)0x8624 = param_1;
  *(undefined2 *)0x8626 = param_2;
  FUN_1ef4_034e();
  if (param_3 != 0) {
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      *(undefined2 *)(iVar1 * 2 + 0x8ca) = *(undefined2 *)(iVar1 * 2 + param_3);
    }
  }
  return;
}
