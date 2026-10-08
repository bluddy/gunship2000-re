/* GS.GS2 10bf:4d51 undefined FUN_10bf_4d51(void) */
void __cdecl16far FUN_10bf_4d51(void)

{
  undefined2 *in_BX;
  undefined2 *puVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)*(undefined2 *)0x6ea8;
  if (*(char *)(puVar1 + -1) == '\a') {
    puVar1 = (undefined2 *)puVar1[-2];
  }
  else {
    FUN_10bf_32d7();
  }
  *in_BX = *puVar1;
  in_BX[1] = puVar1[1];
  in_BX[2] = puVar1[2];
  in_BX[3] = puVar1[3];
  *(int *)0x6ea8 = *(int *)0x6ea8 + -0xc;
  return;
}
