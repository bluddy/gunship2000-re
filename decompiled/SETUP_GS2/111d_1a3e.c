/* SETUP.GS2 111d:1a3e undefined FUN_111d_1a3e(void) */
undefined2 __cdecl16far FUN_111d_1a3e(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x1d2c = 0x42;
  *(undefined2 *)0x1d2a = param_1;
  *(undefined2 *)0x1d26 = param_1;
  *(undefined2 *)0x1d28 = 0x7fff;
  uVar3 = FUN_111d_0b86(0x1d26,param_2,&stack0x0008);
  piVar1 = (int *)0x1d28;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_111d_0872(0,0x1d26);
  }
  else {
    puVar2 = (undefined1 *)*(undefined2 *)0x1d26;
    *(int *)0x1d26 = *(int *)0x1d26 + 1;
    *puVar2 = 0;
  }
  return uVar3;
}
