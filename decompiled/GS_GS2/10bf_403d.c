/* GS.GS2 10bf:403d undefined FUN_10bf_403d(void) */
void FUN_10bf_403d(void)

{
  undefined2 uVar1;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x6eca = 0;
  uVar1 = *(undefined2 *)0x6ea8;
  *(undefined2 *)0x6ea8 = 0x6ed5;
  FUN_10bf_3c57(0,0,0,0,0,0);
  *(undefined2 *)0x6ecd = 0;
  *(undefined2 *)0x6ecf = 0;
  *(undefined2 *)0x6ed1 = 0;
  *(undefined2 *)0x6ed3 = 0;
  *(undefined2 *)0x6ea8 = uVar1;
  FUN_10bf_3c57();
  return;
}
