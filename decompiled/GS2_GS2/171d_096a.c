/* GS2.GS2 171d:096a undefined FUN_171d_096a(void) */
uint __cdecl16far FUN_171d_096a(int param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  uint local_6 [2];
  
  uVar4 = 0x171d;
  local_6[1] = 0;
  iVar3 = param_1;
  if (param_1 != 0) {
    do {
      uVar5 = uVar4;
      if (*(int *)0x45fc == 0) {
        uVar5 = 0x12a2;
        FUN_12a2_0c28(uVar4,param_2,local_6);
        *(uint *)0x4604 = *(uint *)0x4604 | local_6[0];
        puVar1 = (uint *)0x45fe;
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        *(int *)0x4600 = *(int *)0x4600 + (uint)(0xfffe < uVar2);
      }
      *(uint *)0x45fc = (byte)(*(char *)0x45fc - 1) & 0xf;
      puVar1 = (uint *)0x4604;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 >> 1;
      *(uint *)0x4602 = *(uint *)0x4602 >> 1 | (uint)((uVar2 & 1) != 0) << 0xf;
      iVar3 = iVar3 + -1;
      uVar4 = uVar5;
    } while (iVar3 != 0);
  }
  return *(uint *)0x4602 >> (0x10 - (byte)param_1 & 0x1f) & (1 << ((byte)param_1 & 0x1f)) - 1U;
}
