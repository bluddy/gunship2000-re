/* GS.GS2 10bf:3fe7 undefined FUN_10bf_3fe7(void) */
void FUN_10bf_3fe7(void)

{
  undefined2 in_AX;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 in_BX;
  uint unaff_BP;
  undefined2 unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined2 uStack_2;
  
  *(undefined1 *)0x6eca = 0;
  if (((*(int *)0x6ecb == 0) || (*(int *)0x6ecb - 0x4c0U <= unaff_BP)) && (unaff_BP != 0)) {
    uStack_2 = *(undefined2 *)0x6ea8;
    *(undefined2 *)0x6ea8 = 0x6ecd;
    FUN_10bf_3c57();
    *(undefined2 *)0x6ea8 = 0x6ed5;
    FUN_10bf_3c02(unaff_DI,unaff_BP,in_BX,in_DX,in_CX,in_AX);
  }
  else {
    uStack_2 = *(undefined2 *)0x6ea8;
    *(undefined2 *)0x6ea8 = 0x6ed5;
    FUN_10bf_3c57();
    *(undefined2 *)0x6ecd = 0;
    *(undefined2 *)0x6ecf = 0;
    *(undefined2 *)0x6ed1 = 0;
    *(undefined2 *)0x6ed3 = 0;
  }
  *(undefined2 *)0x6ea8 = uStack_2;
  FUN_10bf_3c57();
  return;
}
