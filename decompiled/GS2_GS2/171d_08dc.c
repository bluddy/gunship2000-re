/* GS2.GS2 171d:08dc undefined FUN_171d_08dc(void) */
uint __cdecl16far FUN_171d_08dc(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined4 uStack_6;
  
  if (param_1 != 0) {
    uVar3 = *(int *)0x45fe * 2;
    uStack_6 = (uint *)CONCAT22(((*(int *)0x4600 << 1 | (uint)(*(int *)0x45fe < 0)) +
                                (uint)CARRY2(uVar3,*(uint *)0x45f8)) * 0x1000 + *(int *)0x45fa,
                                (uint *)(uVar3 + *(uint *)0x45f8));
    uVar3 = *(uint *)0x45fc;
    iVar4 = param_1;
    do {
      puVar1 = uStack_6;
      if (uVar3 == 0) {
        if ((uint *)0xfffd < (uint *)uStack_6) {
          uStack_6._2_2_ = uStack_6._2_2_ + 0x1000;
        }
        uStack_6 = (uint *)CONCAT22(uStack_6._2_2_,(uint *)uStack_6 + 1);
        *(uint *)0x4604 = *(uint *)0x4604 | *puVar1;
        puVar1 = (uint *)0x45fe;
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        *(int *)0x4600 = *(int *)0x4600 + (uint)(0xfffe < uVar2);
      }
      uVar3 = (byte)((char)uVar3 - 1) & 0xf;
      puVar1 = (uint *)0x4604;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 >> 1;
      *(uint *)0x4602 = *(uint *)0x4602 >> 1 | (uint)((uVar2 & 1) != 0) << 0xf;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(uint *)0x45fc = uVar3;
  }
  return *(uint *)0x4602 >> (0x10 - (byte)param_1 & 0x1f) & (1 << ((byte)param_1 & 0x1f)) - 1U;
}
