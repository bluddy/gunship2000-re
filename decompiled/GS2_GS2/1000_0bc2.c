/* GS2.GS2 1000:0bc2 undefined FUN_1000_0bc2(void) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_0bc2(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0x3262;
  *(undefined2 *)0x5e6 = *(undefined2 *)0x5ec;
  *(undefined2 *)0x5e8 = *(undefined2 *)0x5ee;
  *(undefined2 *)0x5ea = *(undefined2 *)0x5f0;
  *(undefined2 *)0x5ec = DAT_372d_05f2;
  *(undefined2 *)0x5ee = DAT_372d_05f4;
  *(undefined2 *)0x5f0 = DAT_372d_05f6;
  DAT_372d_05f2 = _DAT_372d_05f8;
  DAT_372d_05f4 = _DAT_372d_05fa;
  DAT_372d_05f6 = DAT_372d_05fc;
  _DAT_372d_05f8 = CONCAT11(param_1,DAT_372d_05f8 + '\x01');
  _DAT_372d_05fa = CONCAT11(param_3,param_2);
  *(undefined2 *)0x5fc = *(undefined2 *)0xda;
  return;
}
