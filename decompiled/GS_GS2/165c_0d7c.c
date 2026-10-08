/* GS.GS2 165c:0d7c undefined FUN_165c_0d7c(void) */
void __cdecl16far FUN_165c_0d7c(undefined1 *param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if ((-1 < param_2) && (param_2 < *(int *)0xb8c8)) {
    FUN_10bf_26e0(param_1,0x11c,param_2 * 0x27 + *(int *)0xb860,*(undefined2 *)0xb862);
    return;
  }
  *param_1 = 0;
  return;
}
