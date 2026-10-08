/* GS.GS2 10bf:2af0 undefined FUN_10bf_2af0(void) */
uint __cdecl16far FUN_10bf_2af0(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  if (param_3 != 0) {
    do {
      bVar2 = *param_1;
      bVar1 = *param_2;
      if ((bVar2 == 0) || (bVar1 == 0)) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        bVar2 = bVar2 + 0x20;
      }
      if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
        bVar1 = bVar1 + 0x20;
      }
      bVar3 = bVar2 < bVar1;
      if (bVar2 != bVar1) goto LAB_10bf_2b36;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    param_3 = 0;
    bVar3 = bVar2 < bVar1;
    if (bVar2 != bVar1) {
LAB_10bf_2b36:
      param_3 = 0;
      if (!bVar3) {
        param_3 = 0xfffe;
      }
      param_3 = ~param_3;
    }
  }
  return param_3;
}
