/* GS.GS2 10bf:4d0b undefined FUN_10bf_4d0b(void) */
void __cdecl16far FUN_10bf_4d0b(void)

{
  int iVar1;
  undefined2 *in_BX;
  undefined2 *puVar2;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x6ea8;
  if (*(char *)(iVar1 + -2) == '\x03') {
    puVar2 = (undefined2 *)*(undefined2 *)(iVar1 + -4);
  }
  else {
    *(undefined1 **)0x70a8 = &stack0xfffa;
    puVar2 = (undefined2 *)*(undefined2 *)(iVar1 + -4);
    FUN_10bf_3366();
  }
  *in_BX = *puVar2;
  in_BX[1] = puVar2[1];
  *(int *)0x6ea8 = *(int *)0x6ea8 + -0xc;
  return;
}
