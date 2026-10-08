/* GS.GS2 10bf:1ad2 undefined FUN_10bf_1ad2(void) */
uint __cdecl16far FUN_10bf_1ad2(uint param_1,int *param_2)

{
  undefined2 unaff_DS;
  
  if ((param_1 == 0xffff) ||
     (((*(byte *)(param_2 + 3) & 1) == 0 &&
      (((*(byte *)(param_2 + 3) & 0x80) == 0 || ((*(byte *)(param_2 + 3) & 2) != 0)))))) {
LAB_10bf_1af4:
    param_1 = 0xffff;
  }
  else {
    if (param_2[2] == 0) {
      FUN_10bf_0b12(param_2);
    }
    if (param_2[2] == *param_2) {
      if (param_2[1] != 0) goto LAB_10bf_1af4;
      *param_2 = *param_2 + 1;
    }
    param_2[1] = param_2[1] + 1;
    *param_2 = *param_2 + -1;
    *(undefined1 *)*param_2 = (char)param_1;
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xef;
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 1;
    param_1 = param_1 & 0xff;
  }
  return param_1;
}
