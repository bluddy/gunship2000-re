/* GS.GS2 3000:85e2 undefined FUN_3000_85e2(void) */
/* WARNING: Removing unreachable block (ram,0x0003870a) */
/* WARNING: Removing unreachable block (ram,0x0003874e) */

undefined2 __cdecl16far FUN_3000_85e2(undefined4 param_1)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined1 local_22 [14];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int *piStack_c;
  undefined1 *puStack_a;
  undefined2 *puStack_8;
  undefined2 *puStack_6;
  int iVar3;
  
  puStack_6 = (undefined2 *)0x85ed;
  func_0x00000eb0();
  uStack_26 = 0xffff;
  puStack_6 = (undefined2 *)0x6;
  puStack_8 = (undefined2 *)0xbf;
  puStack_a = (undefined1 *)0x85f9;
  FUN_3000_0fbc();
  *(undefined1 *)0xe291 = 0xff;
  *(undefined1 *)0xe28f = 0;
  local_2a = 0;
  local_24 = *(undefined2 *)(*(int *)0xc358 + 1);
  local_28 = *(undefined2 *)(*(int *)0xc358 + 3);
  iVar3 = 0;
  do {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    local_22[iVar3] = *(undefined1 *)((int)param_1 + iVar3);
    pcVar1 = (char *)((int)param_1 + iVar3);
    iVar3 = iVar3 + 1;
  } while (*pcVar1 != '\0');
  puStack_6 = (undefined2 *)0x3077;
  puStack_8 = (undefined2 *)0xbf;
  puStack_a = (undefined1 *)0x8640;
  FUN_3000_81de();
  *(undefined1 *)0x2acd = 0xff;
  *(undefined1 *)0x2ac4 = 0xff;
  puStack_6 = (undefined2 *)0x2abc;
  puStack_8 = (undefined2 *)0xbf;
  puStack_a = (undefined1 *)0x8652;
  FUN_3000_14fc();
  puStack_6 = (undefined2 *)0x2ac5;
  puStack_8 = (undefined2 *)0xbf;
  puStack_a = (undefined1 *)0x865c;
  FUN_3000_14fc();
  puStack_6 = (undefined2 *)0x2;
  puStack_8 = (undefined2 *)0xbf;
  puStack_a = (undefined1 *)0x8666;
  func_0x0000c980();
  puStack_6 = (undefined2 *)0x8;
  puStack_8 = (undefined2 *)0xc87;
  puStack_a = (undefined1 *)0x8670;
  func_0x0000c928();
  puStack_6 = (undefined2 *)0x3088;
  puStack_8 = (undefined2 *)0xff;
  puStack_a = (undefined1 *)0x50;
  piStack_c = (int *)0xc87;
  uStack_e = 0x867f;
  FUN_3000_82bc();
  puStack_6 = (undefined2 *)0x30a3;
  puStack_8 = (undefined2 *)0xfd;
  puStack_a = (undefined1 *)0x58;
  piStack_c = (int *)0xc87;
  uStack_e = 0x868e;
  FUN_3000_82bc();
  puStack_6 = (undefined2 *)0x3;
  puStack_8 = (undefined2 *)0xc87;
  puStack_a = (undefined1 *)0x8698;
  func_0x0000c980();
  puStack_6 = (undefined2 *)0xffff;
  puStack_8 = (undefined2 *)0x8;
  puStack_a = (undefined1 *)0xa0;
  piStack_c = (int *)0x68;
  uStack_e = 0x52;
  uStack_10 = 0x880;
  uStack_12 = 0xc87;
  uStack_14 = 0x86ae;
  func_0x0000c8c0();
  puStack_6 = (undefined2 *)0xa;
  puStack_8 = (undefined2 *)0xc87;
  puStack_a = (undefined1 *)0x86b8;
  func_0x0000c928();
  puStack_6 = (undefined2 *)local_22;
  puStack_8 = (undefined2 *)0xc87;
  puStack_a = (undefined1 *)0x86c4;
  func_0x0000c8aa();
  puStack_6 = (undefined2 *)0xc87;
  puStack_8 = (undefined2 *)0x86cb;
  FUN_3000_8324();
  puStack_6 = (undefined2 *)0x3;
  puStack_8 = (undefined2 *)0xc87;
  puStack_a = (undefined1 *)0x86d2;
  func_0x0000c980();
  puStack_6 = (undefined2 *)0xc87;
  puStack_8 = (undefined2 *)0x86d9;
  FUN_3000_1008();
  puStack_6 = &local_28;
  puStack_8 = &local_24;
  puStack_a = &stack0xfffc;
  piStack_c = &local_2a;
  uStack_e = 0xc87;
  uStack_10 = 0x86ed;
  FUN_3000_10a4();
  uVar2 = 0xc87;
  do {
    if (local_2a != 0) {
      puStack_8 = (undefined2 *)uVar2;
      if ((local_2a == 1) || (local_2a == 0x31)) {
        uStack_26 = 0;
        puStack_6 = (undefined2 *)0x2abc;
        puStack_a = (undefined1 *)0x8743;
        FUN_3000_14fc();
        goto LAB_3000_87be;
      }
      if (local_2a == 0x15) {
        uStack_26 = 1;
        puStack_6 = (undefined2 *)0x2ac5;
        puStack_a = (undefined1 *)0x8781;
        FUN_3000_14fc();
LAB_3000_87be:
        puStack_8 = (undefined2 *)0x87c2;
        puStack_6 = (undefined2 *)uVar2;
        FUN_3000_1008();
        puStack_6 = &local_28;
        puStack_8 = &local_24;
        puStack_a = &stack0xfffc;
        piStack_c = &local_2a;
        uStack_10 = 0x87d6;
        uStack_e = uVar2;
        FUN_3000_10a4();
        puStack_8 = (undefined2 *)0x87dd;
        puStack_6 = (undefined2 *)uVar2;
        FUN_3000_19cc();
        puStack_8 = (undefined2 *)0x87e1;
        puStack_6 = (undefined2 *)uVar2;
        FUN_3000_0fe2();
        *(undefined1 *)0xe291 = 0;
        *(undefined1 *)0xe28f = 1;
        return uStack_26;
      }
    }
    puStack_6 = &local_28;
    puStack_8 = &local_24;
    puStack_a = &stack0xfffc;
    piStack_c = &local_2a;
    uStack_10 = 0x879b;
    uStack_e = uVar2;
    func_0x0001afe8();
    puStack_6 = (undefined2 *)0x1abf;
    puStack_8 = (undefined2 *)0x87a2;
    FUN_3000_1070();
    *(undefined2 *)(*(int *)0xc358 + 1) = local_24;
    *(undefined2 *)(*(int *)0xc358 + 3) = local_28;
    puStack_6 = (undefined2 *)0x1abf;
    puStack_8 = (undefined2 *)0x87ba;
    FUN_3000_10f2();
    uVar2 = 0x1abf;
  } while( true );
}
