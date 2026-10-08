/* GS.GS2 2351:01a4 undefined FUN_2351_01a4(void) */
void __cdecl16far FUN_2351_01a4(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (((*(int *)0x9508 < 2) && (param_1 == *(int *)0x9502)) && (param_2 == *(int *)0x9504)) {
    return;
  }
  if (*(int *)0x950c != 0) {
    FUN_2351_0452();
  }
  *(int *)0x9502 = param_1 - *(int *)0x950e;
  *(int *)0x9504 = param_2 - *(int *)0x9510;
  if (*(int *)0x950c != 0) {
    FUN_2351_0258(1);
    FUN_2351_0408();
  }
  return;
}
