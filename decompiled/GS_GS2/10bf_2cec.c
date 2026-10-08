/* GS.GS2 10bf:2cec undefined FUN_10bf_2cec(void) */
undefined2 __cdecl16far FUN_10bf_2cec(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  puVar1 = (undefined2 *)*(int *)0x6b9e;
  if (puVar1 != (undefined2 *)0x9ef2) {
    *(int *)0x6b9e = *(int *)0x6b9e + 4;
    puVar1[1] = param_2;
    *puVar1 = param_1;
    uVar2 = 0;
  }
  return uVar2;
}
