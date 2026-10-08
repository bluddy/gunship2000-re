/* GS.GS2 27d1:082f undefined entry(void) */
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
  undefined2 unaff_ES;
  int iVar5;
  undefined2 unaff_DS;
  
  DAT_3b38_ea9e = 0x27d1;
  DAT_3b38_ea9c = 0x8552;
  DAT_27d1_0b98 = unaff_ES;
  DAT_27d1_0b9a = unaff_DS;
  FUN_27d1_0878();
  uVar2 = DAT_3b38_ea9e;
  iVar1 = *(int *)0xd23;
  puVar3 = extraout_DX;
  puVar4 = (undefined1 *)0x800;
  iVar5 = 0x4962;
  if (iVar1 != 0) {
    in_CX = 0x4962;
    puVar4 = (undefined1 *)0x200;
    puVar3 = (undefined1 *)0x800;
    iVar5 = iVar1;
  }
  *(int *)(puVar4 + -2) = iVar1;
  *(undefined2 *)(puVar4 + -4) = in_CX;
  *(undefined1 **)(puVar4 + -6) = puVar3;
  *(undefined2 *)(puVar4 + -8) = uVar2;
  *(undefined2 *)(puVar4 + -10) = 0x856d;
  FUN_27d1_08e9();
  FUN_10bf_0018();
  return;
}
