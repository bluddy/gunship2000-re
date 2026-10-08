/* GS.GS2 2134:024c undefined FUN_2134_024c(void) */
bool __cdecl16far FUN_2134_024c(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(char *)(param_1 * 0x20 + -0x5d76) == '\x02') {
    return *(char *)(param_2 * 0x20 + -0x5d76) == '\x02';
  }
  param_2 = param_2 * 0x20;
  if (((((*(byte *)(param_2 + -0x5d80) & 0x70) == 0) && (*(char *)(param_2 + -0x5d75) != '\0')) &&
      (2 < *(byte *)(param_2 + -0x5d76))) && (*(byte *)(param_2 + -0x5d76) < 7)) {
    return true;
  }
  return false;
}
