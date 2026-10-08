/* GS2.GS2 137f:278e undefined FUN_137f_278e(void) */
uint __cdecl16far FUN_137f_278e(undefined2 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_137f_27a9();
  iVar2 = (int)((long)iVar1 * (long)param_2);
  return ((int)((ulong)((long)iVar1 * (long)param_2) >> 0x10) << 1 | (uint)(iVar2 < 0)) << 1 |
         (uint)(iVar2 << 1 < 0);
}
