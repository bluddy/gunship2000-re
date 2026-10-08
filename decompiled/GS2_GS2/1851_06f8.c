/* GS2.GS2 1851:06f8 undefined entry(void) */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void entry(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_CX;
  undefined1 *extraout_DX;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  DAT_506a_613e = 0x1851;
  DAT_506a_613c = 0x8c16;
  DAT_1851_09de = unaff_DS;
  FUN_1851_073c();
  uVar2 = DAT_506a_613e;
  iVar1 = *(int *)0xb61;
  puVar3 = extraout_DX;
  puVar4 = (undefined1 *)0x800;
  iVar5 = 0x55fe;
  if (iVar1 != 0) {
    in_CX = 0x55fe;
    puVar4 = (undefined1 *)0x200;
    puVar3 = (undefined1 *)0x800;
    iVar5 = iVar1;
  }
  *(int *)(puVar4 + -2) = iVar1;
  *(undefined2 *)(puVar4 + -4) = in_CX;
  *(undefined1 **)(puVar4 + -6) = puVar3;
  *(undefined2 *)(puVar4 + -8) = uVar2;
  *(undefined2 *)(puVar4 + -10) = 0x8c31;
  FUN_1851_079d();
  FUN_12a2_0016();
  return;
}
