/* GS.GS2 27d1:0878 undefined FUN_27d1_0878(void) */
void __cdecl16near FUN_27d1_0878(void)

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
  
  FUN_28d4_1510((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  FUN_28d4_1535();
  FUN_27d1_067b();
  *(undefined2 *)0xba2 = in_BX;
  iVar1 = *(int *)0xd2f * 0x20 + DAT_27d1_0ba2;
  *(undefined2 *)0xb72 = 0;
  *(int *)0xb74 = iVar1;
  *(undefined2 *)0xb78 = *(undefined2 *)0xd31;
  bVar2 = false;
  FUN_28d4_0099();
  if ((!bVar2) || (*(int *)0xd2f != 0)) {
    *(undefined1 *)0xb96 = 0xff;
  }
  return;
}
