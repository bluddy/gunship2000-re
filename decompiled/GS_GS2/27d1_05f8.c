/* GS.GS2 27d1:05f8 undefined FUN_27d1_05f8(void) */
undefined2 __cdecl16near FUN_27d1_05f8(undefined2 param_1,undefined2 param_2)

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
  
  if ((DAT_27d1_0d21 & 0x100) != 0) {
    FUN_27d1_06fa((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200
                  | (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40
                  | (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  }
  uVar1 = DAT_27d1_0b76;
  puVar2 = (undefined2 *)(DAT_27d1_0b74 + DAT_27d1_0b72);
  DAT_27d1_0b72 = DAT_27d1_0b72 + 6;
  if (DAT_27d1_0b72 < DAT_27d1_0b78) {
    *puVar2 = *(undefined2 *)(in_stack_00000000 + 5);
    if ((DAT_27d1_0d21 & 1) == 0) {
      param_2 = 0x27d1;
    }
    puVar2[2] = param_2;
    puVar2[1] = param_1;
    FUN_27d1_025c();
    return in_AX;
  }
  uVar1 = FUN_27d1_0b4a();
  return uVar1;
}
