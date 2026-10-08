/* GS.GS2 1ef4:03ba undefined FUN_1ef4_03ba(void) */
void __cdecl16far FUN_1ef4_03ba(void)

{
  undefined2 in_BX;
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  FUN_10bf_02c0();
  if (*(int *)0x9f02 == 0x49) {
    uVar1 = thunk_EXT_FUN_0000_0000(0x10bf);
    *(undefined2 *)0xbc4c = in_BX;
    if ((int)uVar1 != -1) {
      *(int *)0xbc50 = (int)uVar1;
      *(undefined2 *)0xbc4e = (int)((ulong)uVar1 >> 0x10);
    }
    return;
  }
  FUN_1ffa_000e();
  return;
}
