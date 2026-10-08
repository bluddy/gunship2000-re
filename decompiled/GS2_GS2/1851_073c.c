/* GS2.GS2 1851:073c undefined FUN_1851_073c(void) */
void __cdecl16near FUN_1851_073c(void)

{
  undefined2 in_BX;
  int iVar1;
  undefined2 unaff_DS;
  byte in_CF;
  bool bVar2;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  
  FUN_1926_0143((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  FUN_1851_05a3();
  *(undefined2 *)0x9e6 = in_BX;
  iVar1 = *(int *)0xb6d * 0x20 + DAT_1851_09e6;
  *(undefined2 *)0x9cb = 0;
  *(int *)0x9cd = iVar1;
  bVar2 = false;
  FUN_1851_0d59();
  if ((!bVar2) || (*(int *)0xb6d != 0)) {
    *(undefined1 *)0x9db = 0xff;
  }
  return;
}
