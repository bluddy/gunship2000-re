/* GS.GS2 1b63:024c undefined FUN_1b63_024c(void) */
void __cdecl16far FUN_1b63_024c(int param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  
  FUN_10bf_02c0();
  thunk_EXT_FUN_0000_0000(0x10bf);
  thunk_EXT_FUN_0000_0000
            (0x2658,3,*(undefined2 *)(param_1 + 1),*(undefined2 *)(param_1 + 3),
             *(undefined2 *)(param_1 + 5),*(undefined2 *)(param_1 + 7));
  uVar1 = 0x2658;
  thunk_EXT_FUN_0000_0000(0x2658);
  FUN_2658_0131(0x2658,0x880,*(int *)(param_1 + 9) + param_2,*(int *)(param_1 + 0xb) + param_3,uVar1
               );
  FUN_212a_003c(uVar1);
  return;
}
