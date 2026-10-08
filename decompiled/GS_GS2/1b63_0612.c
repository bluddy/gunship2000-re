/* GS.GS2 1b63:0612 undefined FUN_1b63_0612(void) */
void __cdecl16far FUN_1b63_0612(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_10bf_02c0();
  thunk_EXT_FUN_0000_0000(0x10bf);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  thunk_EXT_FUN_0000_0000
            (0x2658,*(char *)(iVar1 + 0xd) + 2,*(undefined2 *)(iVar1 + 1),*(undefined2 *)(iVar1 + 3)
             ,*(undefined2 *)(iVar1 + 5),*(undefined2 *)(iVar1 + 7));
  uVar3 = 0x2658;
  thunk_EXT_FUN_0000_0000(0x2658);
  FUN_2658_0131(0x2658,0x880,*(int *)(iVar1 + 9) + param_2,*(int *)(iVar1 + 0xb) + param_3,uVar3);
  FUN_212a_003c(uVar3);
  return;
}
