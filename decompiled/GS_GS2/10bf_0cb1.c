/* GS.GS2 10bf:0cb1 undefined FUN_10bf_0cb1(void) */
void __cdecl16near FUN_10bf_0cb1(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 + 0x50) & 0x10) != 0) &&
     ((*(byte *)(*(byte *)((int)param_2 + 7) + 0x6873) & 0x40) != 0)) {
    FUN_10bf_0cf0(param_2);
    if (param_1 != 0) {
      *(byte *)(param_2 + 0x50) = 0;
      param_2[0x51] = 0;
      *param_2 = 0;
      param_2[2] = 0;
    }
  }
  return;
}
