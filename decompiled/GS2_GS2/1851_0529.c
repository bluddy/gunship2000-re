/* GS2.GS2 1851:0529 undefined FUN_1851_0529(void) */
undefined2 __cdecl16near FUN_1851_0529(undefined2 param_1,undefined2 param_2)

{
  undefined2 in_AX;
  undefined2 uVar1;
  undefined2 *puVar2;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  int in_stack_00000000;
  
  if ((DAT_1851_0b5f & 0x100) != 0) {
    FUN_1851_0622((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200
                  | (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40
                  | (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  }
  puVar2 = (undefined2 *)(DAT_1851_09cd + DAT_1851_09cb);
  DAT_1851_09cb = DAT_1851_09cb + 6;
  if (DAT_1851_09cb < DAT_1851_0b6f) {
    *puVar2 = *(undefined2 *)(in_stack_00000000 + 5);
    if ((DAT_1851_0b5f & 1) == 0) {
      param_2 = 0x1851;
    }
    puVar2[2] = param_2;
    puVar2[1] = param_1;
    FUN_1851_021c();
    return in_AX;
  }
  uVar1 = FUN_1851_09a4();
  return uVar1;
}
