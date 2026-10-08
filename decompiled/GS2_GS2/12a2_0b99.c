/* GS2.GS2 12a2:0b99 undefined FUN_12a2_0b99(void) */
int __cdecl16far FUN_12a2_0b99(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  puVar1 = (undefined2 *)*(int *)(param_1 + 6);
  *puVar1 = *(undefined2 *)(param_1 + 8);
  puVar1[1] = *(undefined2 *)(param_1 + 10);
  return param_2;
}
