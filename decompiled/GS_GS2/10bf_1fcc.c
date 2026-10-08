/* GS.GS2 10bf:1fcc undefined thunk_FUN_10bf_1fd2(void) */
void __cdecl16far thunk_FUN_10bf_1fd2(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x6836 < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x6838) {
      *(undefined2 *)0x6838 = pbVar1;
    }
  }
  return;
}
