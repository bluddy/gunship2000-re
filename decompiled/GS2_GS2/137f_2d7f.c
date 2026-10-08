/* GS2.GS2 137f:2d7f undefined FUN_137f_2d7f(void) */
void __cdecl16far FUN_137f_2d7f(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined2 unaff_DS;
  
  uVar1 = *(uint *)0x3b84 - *param_1;
  uVar2 = (int)uVar1 >> 0xf;
  if ((*(int *)0x3b86 - param_1[1]) - (uint)(*(uint *)0x3b84 < *param_1) != uVar2) {
    return;
  }
  uVar2 = (uVar1 ^ uVar2) - uVar2;
  uVar1 = *(uint *)0x3b88 - param_1[2];
  uVar3 = (int)uVar1 >> 0xf;
  if (uVar3 != (*(int *)0x3b8a - param_1[3]) - (uint)(*(uint *)0x3b88 < param_1[2])) {
    return;
  }
  uVar3 = (uVar1 ^ uVar3) - uVar3;
  puVar5 = param_1;
  if (((int)(uVar3 + uVar2 >> 1 | (uint)CARRY2(uVar3,uVar2) << 0xf) < 0x401) &&
     ((((char)(*param_1 >> 8) + 1U & 0xe) == 0 || (((char)(param_1[2] >> 8) + 1U & 0xe) == 0)))) {
    puVar5 = (uint *)0x3b84;
  }
  uVar1 = *puVar5;
  uVar2 = puVar5[2];
  iVar4 = iRam0001620a * 4;
  *(int *)(iVar4 + 0x2a1c) =
       ((((puVar5[1] << 1 | (uint)((int)uVar1 < 0)) << 1 | (uint)((int)(uVar1 << 1) < 0)) << 1 |
        (uint)((int)(uVar1 << 2) < 0)) -
       (((uint)(byte)((byte)(((puVar5[3] << 1 | (uint)((int)uVar2 < 0)) << 1 |
                             (uint)((int)(uVar2 << 1) < 0)) << 1) | (int)(uVar2 << 2) < 0) << 8) >>
       2)) + 0xfce;
  *(int *)(iVar4 + 0x2a1e) = param_2;
  *(int *)(param_2 + 2) = (((*puVar5 & 0x1fff) - 0x1000) + *param_1) - *puVar5;
  *(int *)(param_2 + 6) = (((puVar5[2] & 0x1fff) - 0x1000) + param_1[2]) - puVar5[2];
  *(uint *)(param_2 + 4) = param_1[4];
  iRam0001620a = iRam0001620a + 1;
  return;
}
