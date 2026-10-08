/* GS.GS2 2330:01a0 undefined FUN_2330_01a0(void) */
void __cdecl16far FUN_2330_01a0(int param_1)

{
  int iVar1;
  undefined2 unaff_SI;
  undefined1 unaff_DI;
  undefined2 unaff_DS;
  int iStack_e;
  undefined2 ***local_c;
  undefined2 uStack_a;
  
  FUN_10bf_02c0();
  iStack_e = *(int *)0x94ee;
  do {
    iStack_e = iStack_e + -1;
    if (iStack_e < 0) {
      uStack_a = 0;
      local_c = &local_c;
      FUN_10bf_2c3a();
      local_c = (undefined2 ***)CONCAT11(local_c._1_1_,0xff);
      *(undefined2 *)0x94f0 = local_c;
      *(undefined2 *)0x94f2 = uStack_a;
      *(undefined2 *)0x94f4 = unaff_DS;
      *(undefined2 *)0x94f6 = unaff_SI;
      *(undefined1 *)0x94f8 = unaff_DI;
      return;
    }
    iVar1 = iStack_e * 9;
  } while (*(char *)(iVar1 + -0x6c20) != param_1);
  *(undefined2 *)0x94f0 = *(undefined2 *)(iVar1 + -0x6c20);
  *(undefined2 *)0x94f2 = *(undefined2 *)(iVar1 + -0x6c1e);
  *(undefined2 *)0x94f4 = *(undefined2 *)(iVar1 + -0x6c1c);
  *(undefined2 *)0x94f6 = *(undefined2 *)(iVar1 + -0x6c1a);
  *(undefined1 *)0x94f8 = *(undefined1 *)(iVar1 + -0x6c18);
  return;
}
