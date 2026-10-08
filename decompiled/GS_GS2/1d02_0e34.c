/* GS.GS2 1d02:0e34 undefined FUN_1d02_0e34(void) */
void __cdecl16far FUN_1d02_0e34(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = uRam0000046e + (0xfffb < uRam0000046c);
  uVar1 = 0x10bf;
  uStack_6 = uRam0000046c + 4;
  while( true ) {
    uVar2 = uVar1;
    if ((uStack_4 < uRam0000046e) || ((uStack_4 <= uRam0000046e && (uStack_6 <= uRam0000046c))))
    break;
    uStack_4 = param_1;
    thunk_EXT_FUN_0000_0000();
    *(int *)0x859e = *(int *)0x859e + 1;
    uVar1 = 0x2658;
    uStack_6 = uVar2;
  }
  return;
}
