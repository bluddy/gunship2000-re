/* GS.GS2 10bf:150a undefined FUN_10bf_150a(void) */
uint FUN_10bf_150a(uint param_1)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 + 0x6a97) & 4) == 0) {
    param_1 = (param_1 & 0xffdf) - 7;
  }
  return param_1;
}
