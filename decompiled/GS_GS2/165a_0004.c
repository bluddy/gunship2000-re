/* GS.GS2 165a:0004 undefined FUN_165a_0004(void) */
char __cdecl16far FUN_165a_0004(uint param_1,uint param_2,byte param_3,byte param_4)

{
  long lVar1;
  
  lVar1 = (ulong)param_4 * (ulong)param_2 + (ulong)param_3 * (ulong)param_1;
  return (char)((ulong)lVar1 >> 0x10) + ((int)lVar1 < 0);
}
