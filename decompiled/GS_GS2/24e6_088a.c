/* GS.GS2 24e6:088a undefined FUN_24e6_088a(void) */
void __cdecl16far FUN_24e6_088a(char *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*param_1 == '\0') {
    return;
  }
  FUN_1c87_0050(0x880,0,0xbf,0x140,9,0);
  FUN_1c87_0110(param_2);
  FUN_1c87_00b8(param_3);
  FUN_1c87_01a2(0,2);
  FUN_1c87_003a(param_1);
  thunk_EXT_FUN_0000_0000(0x1c87,0x880,0,0xbf,0x140,9,0x86e,0,0xbf);
  return;
}
