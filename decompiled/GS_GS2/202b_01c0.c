/* GS.GS2 202b:01c0 undefined FUN_202b_01c0(void) */
void __cdecl16far FUN_202b_01c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  FUN_10bf_02c0();
  for (iVar4 = 0; iVar4 < *(int *)0x8fc4; iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 0x38;
    if (*(char *)(iVar3 + -0x78fc) == param_1) {
      FUN_1c87_0050(0x880,*(undefined2 *)(iVar3 + -0x78f8),*(undefined2 *)(iVar3 + -0x78f6),
                    *(undefined1 *)(iVar3 + -0x78c7),*(undefined1 *)(iVar3 + -0x78c6),0xffff);
      FUN_1c87_0110((int)*(char *)(iVar3 + -0x78fb));
      iVar2 = thunk_EXT_FUN_0000_0000(0x1c87,(int)*(char *)(iVar3 + -0x78fb));
      FUN_1c87_0158(iVar2 + -1);
      if (*(char *)(iVar3 + -0x78c5) == '\0') {
        cVar1 = *(char *)(iVar4 * 0x38 + -0x78fa);
      }
      else {
        cVar1 = *(char *)(iVar3 + -0x78f9);
      }
      FUN_1c87_00b8((int)cVar1);
      FUN_1c87_01e0(iVar4 * 0x38 + -0x78f0);
      *(undefined1 *)(iVar4 * 0x38 + -0x78c8) = 1;
    }
  }
  return;
}
