/* GS.GS2 165c:0b44 undefined FUN_165c_0b44(void) */
byte __cdecl16far FUN_165c_0b44(int param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if ((((param_1 < 5) || (0x3a < param_1)) || (param_2 < 5)) ||
     ((0x3a < param_2 || (bVar1 = *(byte *)(param_1 + param_2 * -0x40 + 0xfc0), (bVar1 & 0x80) != 0)
      ))) {
    return 0;
  }
  bVar1 = *(byte *)((int)*(undefined4 *)0xb854 + (bVar1 & 0x3f));
  if (((param_4 & 0x20) != 0) || ((param_3 & 0x400) != 0)) {
    return bVar1 & 2;
  }
  if ((param_4 & 0x1000) != 0) {
    if (((bVar1 & 4) == 0) && ((bVar1 & 1) == 0)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    return bVar1;
  }
  if ((param_4 & 0x2000) == 0) {
    if ((param_4 & 8) == 0) {
      return bVar1 & 1;
    }
    if (((bVar1 & 1) == 0) || ((bVar1 & 0x10) == 0)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    return bVar1;
  }
  if ((((bVar1 & 4) == 0) && ((bVar1 & 1) == 0)) || ((bVar1 & 0x10) == 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}
