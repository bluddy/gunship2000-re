/* GS.GS2 10bf:26e0 undefined FUN_10bf_26e0(void) */
undefined2 __cdecl16far FUN_10bf_26e0(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x9e66 = 0x42;
  *(undefined2 *)0x9e64 = param_1;
  *(undefined2 *)0x9e60 = param_1;
  *(undefined2 *)0x9e62 = 0x7fff;
  uVar3 = FUN_10bf_15a0(0x9e60,param_2,&stack0x0008);
  piVar1 = (int *)0x9e62;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_10bf_0a02(0,0x9e60);
  }
  else {
    puVar2 = (undefined1 *)*(undefined2 *)0x9e60;
    *(int *)0x9e60 = *(int *)0x9e60 + 1;
    *puVar2 = 0;
  }
  return uVar3;
}
