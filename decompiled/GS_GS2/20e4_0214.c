/* GS.GS2 20e4:0214 undefined FUN_20e4_0214(void) */
void __cdecl16far
FUN_20e4_0214(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  
  FUN_10bf_02c0();
  iVar1 = (0x30 - param_4) / 2;
  thunk_EXT_FUN_0000_0000
            (0x10bf,0x8a4,(param_1 / 5) * 0x30 + iVar1,(0x20 - param_5) / 2 + (param_1 % 5) * 0x20,
             param_4,param_5,0x880,iVar1,param_3);
  return;
}
