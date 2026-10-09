/* GS.GS2 3000:83f2 undefined FUN_3000_83f2(void) */
undefined1 * __cdecl16far FUN_3000_83f2(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 ****ppppuVar3;
  undefined2 unaff_DS;
  undefined2 ***local_c;
  undefined2 ***local_a;
  undefined1 *puStack_8;
  undefined2 ***local_6;
  int iVar4;
  
  local_6 = (undefined2 ***)0x83fd;
  func_0x00000eb0();
  local_6 = (undefined2 ***)0xbf;
  puStack_8 = (undefined1 *)0x8404;
  FUN_3000_81de();
  *(undefined1 *)0x2acd = 0xff;
  *(undefined1 *)0x2ac4 = 0xff;
  local_6 = (undefined2 ***)0xbf;
  puStack_8 = (undefined1 *)0x8416;
  FUN_3000_14fc();
  local_6 = (undefined2 ***)0xbf;
  puStack_8 = (undefined1 *)0x8420;
  FUN_3000_14fc();
  local_6 = (undefined2 ***)0xbf;
  puStack_8 = (undefined1 *)0x842a;
  func_0x0000c980();
  local_6 = (undefined2 ***)0xc87;
  puStack_8 = (undefined1 *)0x8434;
  func_0x0000c928();
  local_6 = (undefined2 ***)0xff;
  puStack_8 = (undefined1 *)0x50;
  local_a = (undefined2 ***)0xc87;
  local_c = (undefined2 ***)0x8443;
  FUN_3000_82bc();
  local_6 = (undefined2 ***)0xfd;
  puStack_8 = (undefined1 *)0x58;
  local_a = (undefined2 ***)0xc87;
  local_c = (undefined2 ***)0x8452;
  FUN_3000_82bc();
  local_6 = (undefined2 ***)0xc87;
  puStack_8 = (undefined1 *)0x845c;
  func_0x0000c980();
  local_6 = (undefined2 ***)0x8;
  puStack_8 = (undefined1 *)0xa0;
  local_a = (undefined2 ***)0x68;
  local_c = (undefined2 ***)0x52;
  func_0x0000c8c0(0xc87,0x880);
  local_6 = (undefined2 ***)0xc87;
  puStack_8 = (undefined1 *)0x8481;
  func_0x0000c928();
  local_6 = (undefined2 ***)0xc87;
  puStack_8 = (undefined1 *)0x848c;
  func_0x0000c8aa();
  local_6 = (undefined2 ***)0x8;
  puStack_8 = (undefined1 *)0xa0;
  local_a = (undefined2 ***)0x74;
  local_c = (undefined2 ***)0x52;
  func_0x0000c8c0(0xc87,0x880);
  local_6 = (undefined2 ***)0xc87;
  puStack_8 = (undefined1 *)0x84ac;
  func_0x0000c928();
  local_6 = (undefined2 ***)0xc87;
  puStack_8 = (undefined1 *)0x84b7;
  func_0x0000c8aa();
  local_6 = (undefined2 ***)0x84be;
  FUN_3000_8324();
  local_6 = (undefined2 ***)0xc87;
  puStack_8 = (undefined1 *)0x84c5;
  func_0x0000c980();
  local_6 = (undefined2 ***)0x84cc;
  FUN_3000_1008();
  local_6 = &local_6;
  puStack_8 = &stack0xfffc;
  local_a = &local_c;
  local_c = (undefined2 ****)0xc87;
  FUN_3000_10a4();
  iVar4 = 0;
  ppppuVar3 = (undefined2 ****)0xc87;
  do {
    if ((iVar4 != 0) || ((undefined2 ****)local_c != (undefined2 ****)0x0)) {
      if (iVar4 != 0) {
        local_6 = (undefined2 ***)*(undefined2 *)0x2ac0;
        puStack_8 = (undefined1 *)*(undefined2 *)0x2abe;
        local_c = (undefined2 ***)*(int *)0x2abc;
        local_a = local_c;
        iVar4 = FUN_3000_118e(local_6);
        if (iVar4 != 0) {
LAB_3000_8596:
          puStack_8 = (undefined1 *)0x85a8;
          local_6 = ppppuVar3;
          FUN_3000_14fc();
          local_6 = (undefined2 ***)0x85af;
          FUN_3000_1008();
          local_6 = &local_6;
          puStack_8 = &stack0xfffc;
          local_a = &local_c;
          local_c = ppppuVar3;
          FUN_3000_10a4();
          *(int *)(*(int *)0xc358 + 1) = (int)local_6;
          *(int *)(*(int *)0xc358 + 3) = (int)local_a;
          return puStack_8;
        }
      }
      if (((undefined2 ****)local_c == (undefined2 ****)0x1) ||
         ((undefined2 ****)local_c == (undefined2 ****)0x31)) goto LAB_3000_8596;
      uVar1 = *(uint *)0x2acb;
      local_6 = (undefined2 ***)*(undefined2 *)0x2ac9;
      puStack_8 = (undefined1 *)*(undefined2 *)0x2ac7;
      local_c = (undefined2 ***)*(int *)0x2ac5;
      local_a = local_c;
      uVar2 = FUN_3000_118e(local_6);
      if (((uVar1 & uVar2) != 0) || ((undefined2 ****)local_c == (undefined2 ****)0x15))
      goto LAB_3000_8596;
    }
    local_6 = &local_6;
    puStack_8 = &stack0xfffc;
    local_a = &local_c;
    local_c = ppppuVar3;
    func_0x0001afe8();
    local_6 = (undefined2 ***)0x857a;
    FUN_3000_1070();
    *(undefined2 *)(*(int *)0xc358 + 1) = local_6;
    *(int *)(*(int *)0xc358 + 3) = (int)local_a;
    iVar4 = 0x1abf;
    local_6 = (undefined2 ***)0x8592;
    FUN_3000_10f2();
    ppppuVar3 = (undefined2 ****)0x1abf;
  } while( true );
}
