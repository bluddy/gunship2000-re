/* SETUP.GS2 111d:152c undefined thunk_FUN_111d_1532(void) */
void __cdecl16far thunk_FUN_111d_1532(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x942 < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x944) {
      *(undefined2 *)0x944 = pbVar1;
    }
  }
  return;
}
