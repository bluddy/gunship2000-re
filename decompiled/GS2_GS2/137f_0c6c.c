/* GS2.GS2 137f:0c6c undefined FUN_137f_0c6c(void) */
void __cdecl16far FUN_137f_0c6c(uint *param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_3 >> 0x10);
  iVar3 = FUN_137f_27a9();
  iVar4 = (int)((long)iVar3 * (long)param_4);
  uVar5 = ((int)((ulong)((long)iVar3 * (long)param_4) >> 0x10) << 1 | (uint)(iVar4 < 0)) << 1 |
          (uint)(iVar4 << 1 < 0);
  puVar1 = param_1;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  param_1[1] = param_1[1] + ((int)uVar5 >> 0xf) + (uint)CARRY2(uVar2,uVar5);
  iVar3 = FUN_137f_27a6();
  iVar4 = (int)((long)iVar3 * (long)param_4);
  uVar5 = ((int)((ulong)((long)iVar3 * (long)param_4) >> 0x10) << 1 | (uint)(iVar4 < 0)) << 1 |
          (uint)(iVar4 << 1 < 0);
  puVar1 = param_1 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  param_1[3] = param_1[3] + ((int)uVar5 >> 0xf) + (uint)CARRY2(uVar2,uVar5);
  iVar3 = FUN_137f_27a9();
  iVar4 = (int)((long)iVar3 * (long)param_4);
  param_1[4] = param_1[4] +
               (((int)((ulong)((long)iVar3 * (long)param_4) >> 0x10) << 1 | (uint)(iVar4 < 0)) << 1
               | (uint)(iVar4 << 1 < 0));
  return;
}
