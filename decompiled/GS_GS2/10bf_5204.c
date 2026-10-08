/* GS.GS2 10bf:5204 undefined FUN_10bf_5204(void) */
void __cdecl16far FUN_10bf_5204(undefined2 param_1,uint param_2)

{
  uint in_CX;
  uint unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x6edf = 1;
  FUN_10bf_523e();
  *(undefined1 *)0x6edf = 0;
  if (unaff_SI < param_2) {
    *unaff_DI = in_CX | 0x40;
  }
  return;
}
