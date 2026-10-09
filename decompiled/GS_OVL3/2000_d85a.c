/* GS.GS2 2000:d85a undefined FUN_2000_d85a(void) */
void __cdecl16far FUN_2000_d85a(void)

{
  int iVar1;
  int iStack_12;
  undefined1 local_10 [2];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined2 uStack_6;
  
  uStack_6 = 0xd865;
  func_0x00000eb0();
  for (iStack_12 = 0; iStack_12 < 4; iStack_12 = iStack_12 + 1) {
    uStack_6 = 9;
    iVar1 = iStack_12 * 0xc + -0x6406;
    puStack_a = (undefined1 *)((int)&uStack_e + 1);
    uStack_c = 0xbf;
    uStack_e = 0xd89a;
    puStack_8 = (undefined1 *)iVar1;
    func_0x000037fe();
    uStack_6 = 3;
    puStack_8 = (undefined1 *)(iStack_12 * 0xc + -0x63fd);
    puStack_a = local_10;
    uStack_c = 0xbf;
    uStack_e = 0xd8af;
    func_0x000037fe();
    uStack_6 = 0xc;
    puStack_8 = local_10;
    uStack_c = 0xbf;
    uStack_e = 0xd8be;
    puStack_a = (undefined1 *)iVar1;
    func_0x000037fe();
  }
  uStack_6 = 0x9bf4;
  puStack_8 = (undefined1 *)0xbf;
  puStack_a = (undefined1 *)0xd8cc;
  func_0x00016697();
  return;
}
