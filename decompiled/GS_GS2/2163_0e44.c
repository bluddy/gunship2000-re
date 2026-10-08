/* GS.GS2 2163:0e44 undefined FUN_2163_0e44(void) */
void __cdecl16far FUN_2163_0e44(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 local_44 [32];
  undefined1 local_24 [20];
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0x247f;
  FUN_10bf_02c0();
  iVar2 = (int)*(char *)(param_1 * 0x29 + -0x45e6);
  if (iVar2 == 0) {
    cVar1 = *(char *)0xad0a;
  }
  else {
    cVar1 = *(char *)(iVar2 * 0x29 + -0x52d3);
  }
  puStack_6 = (undefined1 *)*(undefined2 *)(cVar1 * 2 + *(int *)0x1a90);
  puStack_8 = local_44;
  uStack_a = 0x10bf;
  iStack_c = 0x24b3;
  FUN_2627_0000();
  if (iVar2 == 0) {
    puStack_6 = (undefined1 *)0xacb6;
  }
  else {
    puStack_6 = (undefined1 *)(iVar2 * 0x29 + -0x52f5);
  }
  puStack_8 = local_24;
  uStack_a = 0x2627;
  iStack_c = 0x24d3;
  FUN_2627_0084();
  puStack_6 = local_24;
  puStack_8 = local_44;
  uStack_a = 0x119a;
  iVar2 = param_1 * 0x29;
  iStack_c = iVar2 + -0x45e2;
  uStack_e = 0x2627;
  uStack_10 = 0x24f2;
  FUN_10bf_26e0();
  if (param_1 != 0) {
    *(undefined1 *)(iVar2 + -0x45e3) = *(undefined1 *)(iVar2 + -0x52d1);
    return;
  }
  *(undefined1 *)0xba1d = 0;
  return;
}
