/* GS.GS2 28d4:0738 undefined FUN_28d4_0738(void) */
undefined2 __cdecl16far FUN_28d4_0738(void)

{
  undefined2 uVar1;
  undefined2 in_AX;
  int iVar2;
  int iVar3;
  int unaff_ES;
  byte bVar4;
  byte in_AF;
  bool bVar5;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  if (DAT_28d4_0007 == '\0') {
    return in_AX;
  }
  iVar2 = FUN_28d4_05de();
  uVar1 = DAT_28d4_006a;
  iVar2 = *(int *)((iVar2 + -1) * 8 + DAT_28d4_006c);
  bVar5 = iVar2 == 0;
  if (bVar5) {
    bVar4 = 1;
  }
  else {
    FUN_28d4_092f();
    FUN_28d4_0984();
    do {
      iVar3 = FUN_28d4_09ba(unaff_ES);
      iVar2 = *(int *)((iVar2 + -1) * 2 + DAT_28d4_0070);
      unaff_ES = unaff_ES + iVar3;
      bVar5 = iVar2 == 0;
    } while (!bVar5);
    bVar4 = 0;
  }
  FUN_28d4_070c((uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                (uint)bVar5 * 0x40 | (uint)(in_AF & 1) * 0x10 | 4 | (uint)bVar4);
  return in_AX;
}
