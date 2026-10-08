/* GS.GS2 2330:001c undefined FUN_2330_001c(void) */
void __cdecl16far
FUN_2330_001c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined1 param_5)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_2330_0064((int)(char)param_1);
  if (0x1d < *(int *)0x94ee) {
    *(undefined2 *)0x94ee = 0x1d;
  }
  iVar1 = *(int *)0x94ee * 9;
  *(undefined2 *)(iVar1 + -0x6c20) = param_1;
  *(undefined2 *)(iVar1 + -0x6c1e) = param_2;
  *(undefined2 *)(iVar1 + -0x6c1c) = param_3;
  *(undefined2 *)(iVar1 + -0x6c1a) = param_4;
  *(undefined1 *)(iVar1 + -0x6c18) = param_5;
  *(int *)0x94ee = *(int *)0x94ee + 1;
  return;
}
