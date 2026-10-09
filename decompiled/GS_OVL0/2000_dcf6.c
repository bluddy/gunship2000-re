/* GS.GS2 2000:dcf6 undefined FUN_2000_dcf6(void) */
void __cdecl16far FUN_2000_dcf6(undefined2 param_1,undefined2 ***param_2,int param_3)

{
  undefined2 ***pppuVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_56;
  int iStack_52;
  undefined2 *local_50 [11];
  int aiStack_39 [19];
  undefined2 uStack_12;
  int iStack_10;
  undefined2 ***local_e;
  undefined2 *puStack_c;
  
  func_0x00000eb0();
  puStack_c = local_50;
  local_e = (undefined2 ***)0xbf;
  iStack_10 = 0xdd10;
  func_0x0000382a();
  if (param_3 == 0) {
    puStack_c = (undefined2 *)param_1;
    local_e = param_2;
    iStack_10 = 0xbf;
    uStack_12 = 0xdd29;
    FUN_2000_da32();
  }
  puStack_c = (undefined2 *)0xbf;
  local_e = (undefined2 ***)0xdd38;
  func_0x00002dc6();
  local_50[0] = (undefined2 **)0x4;
  puStack_c = (undefined2 *)0xbf;
  uVar3 = 0xbf;
  local_e = (undefined2 ***)0xdd57;
  pppuVar1 = (undefined2 ***)func_0x000012cc();
  if (pppuVar1 != (undefined2 ***)0x0) {
    puStack_c = (undefined2 *)0x3f;
    local_e = (undefined2 ***)local_50;
    iStack_10 = 0xbf;
    uVar3 = 0xbf;
    uStack_12 = 0xdd72;
    func_0x00001418();
    for (iStack_10 = 0; iStack_10 < 6; iStack_10 = iStack_10 + 1) {
      local_e = (undefined2 ***)0xdd99;
      puStack_c = (undefined2 *)uVar3;
      iVar2 = func_0x00002df8();
      if (iVar2 == 0) {
        puStack_c = (undefined2 *)0x1;
        local_e = (undefined2 ***)0xbc5e;
        iStack_10 = 0xbf;
        uStack_12 = 0xddaf;
        iStack_56 = func_0x00001418();
      }
      puStack_c = (undefined2 *)0xbf;
      local_e = (undefined2 ***)0xddc6;
      iVar2 = func_0x00002df8();
      if (iVar2 == 0) {
        puStack_c = (undefined2 *)0x1;
        local_e = (undefined2 ***)0xa280;
        iStack_10 = 0xbf;
        uStack_12 = 0xdddd;
        iStack_56 = func_0x00001418();
      }
      puStack_c = (undefined2 *)0xbf;
      local_e = (undefined2 ***)0xddf4;
      iVar2 = func_0x00002df8();
      if (iVar2 == 0) {
        puStack_c = (undefined2 *)0x1;
        local_e = (undefined2 ***)0xa248;
        iStack_10 = 0xbf;
        uStack_12 = 0xde0a;
        iStack_56 = func_0x00001418();
      }
      puStack_c = (undefined2 *)0xbf;
      local_e = (undefined2 ***)0xde21;
      iVar2 = func_0x00002df8();
      if (iVar2 == 0) {
        puStack_c = (undefined2 *)0x1;
        local_e = (undefined2 ***)0xb8e4;
        iStack_10 = 0xbf;
        uStack_12 = 0xde38;
        iStack_56 = func_0x00001418();
      }
      puStack_c = (undefined2 *)0xbf;
      local_e = (undefined2 ***)0xde4f;
      iVar2 = func_0x00002df8();
      if (iVar2 == 0) {
        iStack_56 = 0;
        for (iStack_52 = 0; iStack_52 < *(int *)0xb8dc; iStack_52 = iStack_52 + 1) {
          unaff_DS = *(undefined2 *)(iStack_52 * 9 + *(int *)0xb8d4 + 6);
          puStack_c = (undefined2 *)0x1;
          local_e = &local_e;
          iStack_10 = 0xbf;
          uStack_12 = 0xde9b;
          iVar2 = func_0x00001418();
          iStack_56 = iStack_56 + iVar2;
        }
      }
      puStack_c = (undefined2 *)0xbf;
      uVar3 = 0xbf;
      local_e = (undefined2 ***)0xdeb5;
      iVar2 = func_0x00002df8();
      if (iVar2 == 0) {
        uVar3 = 0x17d1;
        puStack_c = (undefined2 *)0xdec4;
        iStack_56 = func_0x00018ca6();
      }
      aiStack_39[iStack_10] = iStack_56;
    }
  }
  puStack_c = (undefined2 *)0x0;
  uStack_12 = 0xdee6;
  iStack_10 = uVar3;
  local_e = pppuVar1;
  func_0x000030da();
  puStack_c = (undefined2 *)0x3f;
  local_e = (undefined2 ***)local_50;
  iStack_10 = 0xbf;
  uStack_12 = 0xdef9;
  func_0x00001418();
  puStack_c = (undefined2 *)0xdf04;
  func_0x000011e6();
  return;
}
