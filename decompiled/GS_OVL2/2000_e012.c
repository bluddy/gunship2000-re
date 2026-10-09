/* GS.GS2 2000:e012 undefined FUN_2000_e012(void) */
/* WARNING: Removing unreachable block (ram,0x0002e0a9) */

void __cdecl16far FUN_2000_e012(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_64 [78];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 *puStack_12;
  int iVar5;
  int iStack_e;
  int iVar6;
  undefined2 local_a;
  
  func_0x00000eb0();
  FUN_2000_f058();
  FUN_2000_d678();
  FUN_2000_dc16();
  FUN_2000_d7a4();
  FUN_2000_dbb2();
  puStack_12 = (undefined1 *)func_0x00015c8c();
  iVar6 = 0;
  for (iVar5 = 0; iVar5 < (int)puStack_12; iVar5 = iVar5 + 1) {
    iVar6 = -0x1fa2;
    puVar1 = (undefined2 *)func_0x00015c98();
    _local_a = CONCAT22(puVar1[1],*puVar1);
    local_a._0_1_ = (char)*puVar1;
    uVar4 = (undefined2)((ulong)*(undefined4 *)0xbc38 >> 0x10);
    iVar3 = (int)*(undefined4 *)0xbc38;
    if ((*(char *)(*(int *)0x98fe * 0xd6 + iVar3) == (char)local_a) &&
       ((iVar2 = (int)(char)((uint)puVar1[1] >> 8),
        *(char *)(*(int *)0x98fe * 0xd6 + iVar3) != *(char *)(iVar2 + -0x65a9) ||
        (*(int *)(iVar2 * 2 + -0x65a0) != *(char *)0x9aab * stack0xfff7)))) {
      puStack_12 = (undefined1 *)0xe0d8;
      func_0x00003d8c();
      puStack_12 = (undefined1 *)0xe0ef;
      func_0x000032d0();
      puStack_12 = (undefined1 *)0xe106;
      func_0x00003dc2();
      iVar6 = 0x11ec;
      puStack_12 = local_64;
      uStack_14 = 0xbf;
      uStack_16 = 0xe11f;
      FUN_2000_ec42();
      iVar5 = unaff_SS;
    }
  }
  iStack_e = 0;
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    if ((*(char *)(*(int *)0x98fe * 0xd6 + (int)*(undefined4 *)0xbc38) == *(char *)(iVar5 + -0x65a9)
        ) && (0 < *(int *)(iVar5 * 2 + -0x65a0))) {
      if (iStack_e == 0) {
        if (iVar6 != 0) {
          FUN_2000_ee40();
        }
        FUN_2000_eda8();
      }
      puStack_12 = (undefined1 *)0xe1a8;
      func_0x00003d8c();
      puStack_12 = (undefined1 *)0xe1c5;
      func_0x000032d0();
      puStack_12 = (undefined1 *)0xe1db;
      func_0x00003dc2();
      iVar6 = 0x12ba;
      iStack_e = -0xc0;
      puStack_12 = local_64;
      uStack_14 = 0xbf;
      uStack_16 = 0xe1f6;
      FUN_2000_ec42();
      iVar5 = unaff_SS;
    }
  }
  FUN_2000_ee40();
  FUN_2000_ef58();
  *(undefined2 *)0x9ba8 = 0x716;
  *(undefined2 *)0x9baa = 0x1d50;
  return;
}
