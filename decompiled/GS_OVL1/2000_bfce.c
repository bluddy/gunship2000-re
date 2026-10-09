/* GS.GS2 2000:bfce undefined FUN_2000_bfce(void) */
void __cdecl16far FUN_2000_bfce(int param_1,undefined2 param_2,undefined2 **param_3)

{
  undefined2 unaff_DS;
  undefined2 **local_c;
  undefined2 **ppuStack_a;
  int iStack_8;
  undefined2 **ppuStack_6;
  undefined2 uVar1;
  
  ppuStack_6 = (undefined2 **)0xbfd9;
  func_0x00000eb0();
  if (*(char *)((int)*(undefined4 *)0xb85c + *(int *)(param_1 + 2) * 8 + 2) == '\x01') {
    uVar1 = *(undefined2 *)0xa25e;
  }
  else {
    uVar1 = *(undefined2 *)0xa27a;
  }
  ppuStack_6 = (undefined2 **)0xca;
  iStack_8 = 6;
  ppuStack_a = (undefined2 **)0x82;
  local_c = param_3;
  func_0x0000c8c0(0xbf,0x8a4,param_2);
  ppuStack_6 = (undefined2 **)0x44;
  iStack_8 = 0xc87;
  ppuStack_a = (undefined2 **)0xc051;
  func_0x0000c928();
  ppuStack_6 = (undefined2 **)0xf;
  iStack_8 = 0;
  ppuStack_a = (undefined2 **)0x0;
  local_c = (undefined2 **)0xc87;
  func_0x0000c9a6();
  ppuStack_6 = (undefined2 **)(*(int *)(param_1 + 8) / -0x48 + 0xf);
  iStack_8 = *(int *)(param_1 + 6) / 0x60;
  ppuStack_a = (undefined2 **)0x271e;
  local_c = &local_c;
  func_0x000032d0(0xc87);
  ppuStack_a = &local_c;
  local_c = (undefined2 **)0x2728;
  iStack_8 = uVar1;
  ppuStack_6 = ppuStack_a;
  func_0x0000ca66(0xbf);
  return;
}
