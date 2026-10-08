/* GS.GS2 1c87:073a undefined FUN_1c87_073a(void) */
undefined1 * __cdecl16far FUN_1c87_073a(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = FUN_1c87_04e8(param_1);
  if (param_2 < iVar1) {
    iVar1 = FUN_1c87_04e8(0x434);
    if (param_2 - iVar1 < 1) {
      *param_1 = 0;
    }
    else {
      iVar2 = FUN_10bf_2234(param_1);
      while (0 < iVar2) {
        iVar3 = FUN_1c87_04e8(param_1);
        if (iVar3 <= param_2 - iVar1) break;
        iVar2 = iVar2 + -1;
        param_1[iVar2] = 0;
      }
      FUN_10bf_2196(param_1,0x434);
    }
  }
  return param_1;
}
