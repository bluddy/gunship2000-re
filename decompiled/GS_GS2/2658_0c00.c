/* GS.GS2 2658:0c00 undefined FUN_2658_0c00(void) */
void FUN_2658_0c00(void)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  uint in_DX;
  uint uVar6;
  int *unaff_SI;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if (&stack0x0000 == (undefined1 *)0x9e55) {
    bVar4 = *(byte *)0x9c52;
    uVar6 = *(uint *)0x9c50 >> (0x10 - bVar4 & 0x1f);
    for (; (char)bVar4 < *(char *)0x9c4a; bVar4 = bVar4 + 0x10) {
      if ((int *)*(undefined2 *)0x64c8 <= unaff_SI) {
        (*(code *)*(undefined2 *)0xc528)(0x2658);
        unaff_SI = (int *)*(undefined2 *)0xc86c;
      }
      piVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      iVar2 = *piVar1;
      *(int *)0x9c50 = iVar2;
      uVar6 = uVar6 | iVar2 << (bVar4 & 0x1f);
    }
    *(char *)0x9c52 = bVar4 - *(char *)0x9c4a;
    uVar6 = uVar6 & *(uint *)0x9c4c;
    uVar5 = uVar6;
    if ((int)in_DX <= (int)uVar6) {
      uVar6 = *(uint *)0x9c54;
      uVar5 = in_DX;
    }
    do {
      iVar2 = uVar6 * 3;
      uVar6 = *(uint *)(iVar2 + -0x3792);
    } while (uVar6 != 0xffff);
    uVar3 = *(undefined1 *)(iVar2 + -0x3790);
    *(undefined1 *)0x9c56 = uVar3;
    *(undefined1 *)(in_DX * 3 + -0x3790) = uVar3;
    *(undefined2 *)(in_DX * 3 + -0x3792) = *(undefined2 *)0x9c54;
    if (*(int *)0x9c4c < (int)(in_DX + 1)) {
      *(char *)0x9c4a = *(char *)0x9c4a + '\x01';
      *(uint *)0x9c4c = *(uint *)0x9c4c << 1 | 1;
    }
    if (*(char *)0x9c4b < *(char *)0x9c4a) {
      FUN_2658_0b58();
    }
    *(uint *)0x9c54 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00027188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*in_stack_00000000)();
  return;
}
