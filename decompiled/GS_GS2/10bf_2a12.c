/* GS.GS2 10bf:2a12 undefined FUN_10bf_2a12(void) */
void __cdecl16far
FUN_10bf_2a12(undefined2 param_1,undefined1 *param_2,undefined2 param_3,undefined1 *param_4,
             int param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  for (; param_5 != 0; param_5 = param_5 + -1) {
    puVar2 = param_4;
    param_4 = param_4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
