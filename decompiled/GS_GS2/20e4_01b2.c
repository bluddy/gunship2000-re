/* GS.GS2 20e4:01b2 undefined FUN_20e4_01b2(void) */
void __cdecl16far
FUN_20e4_01b2(undefined2 param_1,undefined2 param_2,uint param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_10bf_02c0();
  iVar1 = FUN_20e4_002a(param_1);
  uVar3 = (int)param_3 >> 0xf;
  iVar2 = (0x50 - param_4) / 2;
  thunk_EXT_FUN_0000_0000
            (0x10bf,0x892,(((int)((param_3 ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3) * 0x50 + iVar2,
             (iVar1 % 8) * 0x19,param_4,param_5,0x880,iVar2);
  return;
}
