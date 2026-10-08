/* GS.GS2 23ed:0b26 undefined FUN_23ed_0b26(void) */
int __cdecl16far FUN_23ed_0b26(undefined2 param_1,undefined2 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x10bf;
  FUN_10bf_02c0();
  do {
    while( true ) {
      while( true ) {
        thunk_EXT_FUN_0000_0000(uVar3,0x8a4,param_1,param_2,param_2,param_1,0x880);
        FUN_23ed_084a(param_3,param_1,param_2,0);
        thunk_EXT_FUN_0000_0000(0x2658,0x880,param_1,param_2,param_2,param_1,0x86e);
        FUN_212a_0000(1);
        uVar3 = 0x1f32;
        uVar2 = FUN_1f32_01e8();
        if (uVar2 != 0x110) break;
        uVar3 = 0x1dea;
        FUN_1dea_0e98();
      }
      if (0x110 < (int)uVar2) break;
      if (uVar2 == 0x20) goto LAB_23ed_0bc2;
      if (uVar2 < 0x21) {
        cVar1 = (char)uVar2;
        if (cVar1 == '\b') goto LAB_23ed_0bb6;
        if (cVar1 == '\r') {
          return param_3;
        }
        if (cVar1 == '\x1b') {
          return -1;
        }
      }
    }
    if ((uVar2 == 0x148) || (uVar2 == 0x14b)) {
LAB_23ed_0bb6:
      param_3 = param_3 + -1;
      if (param_3 < 0) {
        param_3 = 0x11;
      }
    }
    else if ((uVar2 == 0x14d) || (uVar2 == 0x150)) {
LAB_23ed_0bc2:
      param_3 = param_3 + 1;
      if (0x11 < param_3) {
        param_3 = 0;
      }
    }
  } while( true );
}
