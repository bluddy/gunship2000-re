/* GS.GS2 10bf:41ae undefined FUN_10bf_41ae(void) */
void __cdecl16near FUN_10bf_41ae(void)

{
  int iVar1;
  uint uVar2;
  uint in_BX;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
code_r0x00014d9e:
  *(undefined1 *)0x6eec = 10;
  iVar1 = FUN_10bf_42b9();
  if ((bool)in_CF) {
    return;
  }
  in_CF = in_BX < 0xccc;
  if (in_BX < 0xccd) goto code_r0x00014dae;
  goto LAB_10bf_41ab;
code_r0x00014dae:
  uVar2 = iVar1 + in_BX * 2;
  in_CF = CARRY2(in_BX * 8,uVar2);
  in_BX = in_BX * 8 + uVar2;
  if ((int)in_BX < 0) {
LAB_10bf_41ab:
    in_BX = 0x3fff;
  }
  goto code_r0x00014d9e;
}
