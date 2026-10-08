/* GS.GS2 28d4:1644 undefined FUN_28d4_1644(void) */
void __cdecl16near FUN_28d4_1644(void)

{
  byte bVar1;
  byte in_AL;
  int *piVar2;
  undefined2 unaff_DS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar3;
  byte in_NT;
  uint uVar4;
  
  bVar3 = false;
  for (piVar2 = (int *)0x158d; *piVar2 != 0 || piVar2[1] != 0; piVar2 = piVar2 + 3) {
    bVar1 = *(byte *)(piVar2 + 2) & in_AL;
    if (bVar1 != 0) {
      uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)bVar3 * 0x400 | (uint)(in_IF & 1) * 0x200 |
              (uint)(in_TF & 1) * 0x100 | (uint)((char)bVar1 < '\0') * 0x80 |
              (uint)(bVar1 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
              (uint)((POPCOUNT(bVar1) & 1U) == 0) * 4;
      in_AL = (*(code *)*piVar2)(0x28d4,uVar4);
      in_NT = (uVar4 & 0x4000) != 0;
      bVar3 = (uVar4 & 0x400) != 0;
      in_IF = (uVar4 & 0x200) != 0;
      in_TF = (uVar4 & 0x100) != 0;
      in_AF = (uVar4 & 0x10) != 0;
    }
  }
  return;
}
