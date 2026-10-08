/* GS.GS2 10bf:5026 undefined FUN_10bf_5026(void) */
undefined2 __cdecl16far FUN_10bf_5026(void)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  byte bVar5;
  char cVar6;
  char in_AF;
  char cVar7;
  
  uVar4 = 0x10;
  iVar2 = *(int *)0x6ea8;
  if (*(char *)(iVar2 + -2) == '\a') {
    uVar4 = 0x12;
    if (*(char *)(iVar2 + -0xe) != '\a') {
      *(int *)0x6ea8 = iVar2 + -0xc;
      FUN_10bf_32d7();
      goto LAB_10bf_5056;
    }
  }
  else if (*(char *)(iVar2 + -0xe) == '\a') {
    uVar4 = 0x12;
    FUN_10bf_32d7();
  }
  *(int *)0x6ea8 = iVar2 + -0xc;
LAB_10bf_5056:
  *(int *)(iVar2 + -0x10) = iVar2 + -0xc;
  if (0x1b < uVar4) {
    *(int *)0x6ea8 = *(int *)0x6ea8 + -0xc;
    *(undefined1 **)0x70a8 = &stack0xfffa;
    uVar3 = (*(code *)*(undefined2 *)(uVar4 + 0x707e))();
    return uVar3;
  }
  if (uVar4 < 0x18) {
    *(undefined1 **)0x70a8 = &stack0xfffa;
    uVar3 = (*(code *)*(undefined2 *)(uVar4 + 0x7082))();
    return uVar3;
  }
  puVar1 = (uint *)0x6ea8;
  bVar5 = *puVar1 < 0xc;
  *puVar1 = *puVar1 - 0xc;
  cVar7 = *puVar1 == 0;
  cVar6 = '\0';
  *(undefined1 **)0x70a8 = &stack0xfffa;
  (*(code *)*(undefined2 *)(uVar4 + 0x7082))();
  uVar4 = (byte)(cVar7 << 6 | in_AF << 4 | cVar6 << 2 | bVar5) & 0x41;
  bVar5 = (byte)((uVar4 << 8) >> 1);
  return CONCAT11((byte)uVar4 & 0xfe | bVar5,bVar5);
}
