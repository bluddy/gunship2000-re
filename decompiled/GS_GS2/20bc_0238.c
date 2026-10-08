/* GS.GS2 20bc:0238 undefined FUN_20bc_0238(void) */
int __cdecl16far FUN_20bc_0238(void)

{
  undefined2 unaff_DS;
  undefined4 uStack_e;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  FUN_10bf_02c0();
  _uStack_6 = (undefined4 *)CONCAT22(*(undefined2 *)0x686a,(undefined4 *)0x34);
  uStack_e = (int *)CONCAT22(*(undefined2 *)0x686a,(int *)0x32);
  uStack_a = 0;
  for (uStack_8 = 0; uStack_8 < *uStack_e; uStack_8 = uStack_8 + 1) {
    if (*(char *)((int)*_uStack_6 + uStack_8) != -1) {
      uStack_a = uStack_a + 1;
    }
  }
  return uStack_a;
}
