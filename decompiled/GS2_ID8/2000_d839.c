/* GS2.GS2 2000:d839 undefined FUN_2000_d839(void) */
undefined2 __cdecl16far FUN_2000_d839(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined1 *)(param_3 * 0x28);
  param_4 = param_4 * 0x28;
  out(0x3ce,0x105);
  puVar4 = puVar3;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  return 0x105;
}
