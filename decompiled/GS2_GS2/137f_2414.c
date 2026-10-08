/* GS2.GS2 137f:2414 undefined FUN_137f_2414(void) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl16far FUN_137f_2414(int param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined2 unaff_DS;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  
  param_1 = -param_1;
  iVar4 = (int)((long)*(int *)0x1348 * (long)*(int *)0x1352);
  lVar1 = (long)(int)-(((int)((ulong)((long)*(int *)0x1348 * (long)*(int *)0x1352) >> 0x10) << 1 |
                       (uint)(iVar4 < 0)) << 1 | (uint)(iVar4 << 1 < 0)) * (long)param_1;
  iVar4 = (int)lVar1;
  iVar5 = (int)((long)*(int *)0x134a * (long)*(int *)0x1352);
  iVar6 = (int)((long)*(int *)0x1348 * (long)*(int *)0x1350);
  lVar2 = (long)(int)(((int)((ulong)((long)*(int *)0x1348 * (long)*(int *)0x1350) >> 0x10) << 1 |
                      (uint)(iVar6 < 0)) << 1 | (uint)(iVar6 << 1 < 0)) * (long)param_1;
  iVar6 = (int)lVar2;
  iVar7 = (int)((long)*(int *)0x134a * (long)*(int *)0x1350);
  iVar8 = (int)((long)*(int *)0x134a * (long)param_1);
  iVar8 = (((int)((ulong)((long)*(int *)0x134a * (long)param_1) >> 0x10) << 1 | (uint)(iVar8 < 0))
           << 1 | (uint)(iVar8 << 1 < 0)) + *(int *)0x1348;
  iVar7 = (int)((((int)((ulong)lVar2 >> 0x10) << 1 | (uint)(iVar6 < 0)) << 1 |
                (uint)(iVar6 << 1 < 0)) -
               (((int)((ulong)((long)*(int *)0x134a * (long)*(int *)0x1350) >> 0x10) << 1 |
                (uint)(iVar7 < 0)) << 1 | (uint)(iVar7 << 1 < 0))) >> 1;
  iVar6 = iVar7 - *(int *)0x1352;
  iVar6 = *(int *)0x100 - (int)(CONCAT22((int)(char)((uint)iVar6 >> 8),iVar6 * 0x100) / (long)iVar8)
  ;
  iVar7 = iVar7 + *(int *)0x1352;
  iVar7 = *(int *)0x100 - (int)(CONCAT22((int)(char)((uint)iVar7 >> 8),iVar7 * 0x100) / (long)iVar8)
  ;
  iVar5 = (int)((((int)((ulong)lVar1 >> 0x10) << 1 | (uint)(iVar4 < 0)) << 1 |
                (uint)(iVar4 << 1 < 0)) +
               (((int)((ulong)((long)*(int *)0x134a * (long)*(int *)0x1352) >> 0x10) << 1 |
                (uint)(iVar5 < 0)) << 1 | (uint)(iVar5 << 1 < 0))) >> 1;
  iVar4 = iVar5 - *(int *)0x1350;
  iVar4 = (int)(CONCAT22((int)(char)((uint)iVar4 >> 8),iVar4 * 0x100) / (long)iVar8) + *(int *)0xfe;
  iVar5 = iVar5 + *(int *)0x1350;
  iVar5 = (int)(CONCAT22((int)(char)((uint)iVar5 >> 8),iVar5 * 0x100) / (long)iVar8) + *(int *)0xfe;
  iStack_c = (iVar5 + iVar7) - iVar6;
  iStack_e = (iVar7 + iVar4) - iVar5;
  iStack_10 = (iVar4 + iVar7) - iVar6;
  iStack_12 = (iVar6 + iVar4) - iVar5;
  bVar9 = 0xa1;
  do {
    FUN_137f_204e();
    FUN_137f_275a();
    FUN_137f_275a();
    FUN_137f_275a();
    FUN_137f_275a();
    bVar3 = bVar9 + 1;
    if ((bVar9 + 1 & 0xf) == 0) {
      bVar3 = bVar9;
    }
    bVar9 = bVar3;
    thunk_EXT_FUN_0000_0000(0x137f);
    iStack_10 = iVar4 + iStack_10 >> 1;
    iStack_c = iVar5 + iStack_c >> 1;
    iStack_12 = iVar6 + iStack_12 >> 1;
    iStack_e = iVar7 + iStack_e >> 1;
  } while (((uint)(((iStack_e + iStack_12 >> 1) + 1) - (iVar6 + iVar7 >> 1)) >> 1 != 0) ||
          ((uint)(((iStack_c + iStack_10 >> 1) + 1) - (iVar4 + iVar5 >> 1)) >> 1 != 0));
  return;
}
