/* GS.GS2 3000:5c06 undefined FUN_3000_5c06(void) */
/* WARNING: Removing unreachable block (ram,0x00035d62) */
/* WARNING: Removing unreachable block (ram,0x00035d6d) */
/* WARNING: Removing unreachable block (ram,0x00035d75) */
/* WARNING: Removing unreachable block (ram,0x00035d9c) */
/* WARNING: Removing unreachable block (ram,0x00035d6a) */
/* WARNING: Removing unreachable block (ram,0x00035dd4) */
/* WARNING: Removing unreachable block (ram,0x00035dda) */
/* WARNING: Removing unreachable block (ram,0x00035d22) */

undefined2 __cdecl16far FUN_3000_5c06(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 **ppuVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 **ppuVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_1c [3];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 **ppuStack_10;
  undefined2 ***local_e;
  undefined1 *local_c;
  undefined1 ***pppuStack_a;
  undefined1 **local_8;
  
  func_0x00000eb0();
  puVar6 = local_1c;
  puVar5 = (undefined2 *)0x2e82;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  for (pppuStack_a = (undefined1 ***)0x0; (int)pppuStack_a < 5;
      pppuStack_a = (undefined1 ***)((int)pppuStack_a + 1)) {
    *(undefined1 *)((int)local_1c + (int)pppuStack_a) = *(undefined1 *)(param_2 + (int)pppuStack_a);
  }
  local_8 = (undefined1 **)0x9f40;
  pppuStack_a = (undefined1 ***)local_1c;
  local_c = (undefined1 *)0xbf;
  local_e = (undefined2 ***)0x5c66;
  func_0x0001769a();
  local_8 = (undefined1 **)0x9f40;
  pppuStack_a = (undefined1 ***)0x1741;
  local_c = (undefined1 *)0x5c71;
  func_0x00016697();
  local_8 = (undefined1 **)0xffff;
  pppuStack_a = (undefined1 ***)0xc8;
  local_c = (undefined1 *)0x140;
  local_e = (undefined2 ***)0x0;
  ppuStack_10 = (undefined1 **)0x0;
  uStack_12 = 0x880;
  uStack_14 = 0x1658;
  uStack_16 = 0x5c88;
  func_0x0000c8c0();
  local_8 = (undefined1 **)0x5;
  pppuStack_a = (undefined1 ***)0xc87;
  local_c = (undefined1 *)0x5c92;
  func_0x0000c980();
  local_8 = (undefined1 **)0x44;
  pppuStack_a = (undefined1 ***)0xc87;
  local_c = (undefined1 *)0x5c9c;
  func_0x0000c928();
  local_8 = (undefined1 **)0xb4;
  pppuStack_a = (undefined1 ***)0x0;
  local_c = (undefined1 *)0xc87;
  local_e = (undefined2 ***)0x5ca9;
  func_0x0000c9f6();
  local_8 = (undefined1 **)0x2e90;
  pppuStack_a = (undefined1 ***)0xc87;
  local_c = (undefined1 *)0x5cb4;
  func_0x0000c8aa();
  local_8 = (undefined1 **)0x2ea3;
  pppuStack_a = (undefined1 ***)0xc87;
  ppuVar7 = (undefined1 **)0x10bc;
  local_c = (undefined1 *)0x5cbf;
  func_0x00010be0();
  for (pppuStack_a = (undefined1 ***)0x0; (int)pppuStack_a < param_1;
      pppuStack_a = (undefined1 ***)((int)pppuStack_a + 1)) {
    ppuVar3 = (undefined1 **)((int)pppuStack_a * 0x13 + param_2);
    local_c = (undefined1 *)0x5ce3;
    pppuStack_a = (undefined1 ***)ppuVar7;
    local_8 = ppuVar3;
    local_8 = (undefined1 **)func_0x0001a790();
    *(undefined2 *)0xb8d8 = 0;
    *(undefined2 *)0xb8da = local_8;
    pppuStack_a = (undefined1 ***)*(undefined2 *)0xb8d8;
    local_c = (undefined1 *)*(undefined2 *)((int)ppuVar3 + 0xf);
    local_e = (undefined2 ***)*(undefined2 *)((int)ppuVar3 + 0xd);
    ppuStack_10 = (undefined1 **)*(undefined2 *)0xbc32;
    uStack_12 = 0x1a79;
    uStack_14 = 0x5d02;
    FUN_3000_1c60();
    local_8 = (undefined1 **)*(undefined2 *)0xb8da;
    pppuStack_a = (undefined1 ***)*(int *)0xb8d8;
    local_c = (undefined1 *)0x1a79;
    ppuVar7 = (undefined1 **)0xdea;
    local_e = (undefined2 ***)0x5d12;
    func_0x0000ef26();
  }
  pppuStack_a = (undefined1 ***)0x5d1c;
  local_8 = ppuVar7;
  FUN_3000_1008();
  do {
    local_8 = &local_c;
    pppuStack_a = &local_8;
    local_c = &stack0xfffc;
    local_e = &local_e;
    uStack_12 = 0x5d3a;
    ppuStack_10 = ppuVar7;
    func_0x0001afe8();
    local_8 = (undefined1 **)0x1abf;
    pppuStack_a = (undefined1 ***)0x5d41;
    FUN_3000_1070();
    *(undefined2 *)(*(int *)0xc358 + 1) = local_8;
    *(int *)(*(int *)0xc358 + 3) = (int)local_c;
    local_8 = (undefined1 **)0x1abf;
    pppuStack_a = (undefined1 ***)0x5d59;
    FUN_3000_10f2();
    pppuStack_a = (undefined1 ***)0x1abf;
    ppuVar7 = (undefined1 **)0x1abf;
  } while ((undefined2 ****)local_e != (undefined2 ****)0x1);
  local_8 = (undefined1 **)0x22;
  local_c = (undefined1 *)0x5df1;
  func_0x0000edda();
  return 0;
}
