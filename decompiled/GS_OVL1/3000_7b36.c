/* GS.GS2 3000:7b36 undefined FUN_3000_7b36(void) */
undefined2 __cdecl16far FUN_3000_7b36(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  func_0x00000eb0();
  iVar4 = *(int *)0xc018;
  do {
    if (iVar4 == 0) {
      return 0;
    }
    iVar2 = *(int *)((iVar4 + -1) * 0xb + -0x4362) * 0x27;
    uVar3 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar1 = (int)*(undefined4 *)0xb860;
    iVar4 = iVar4 + -1;
  } while ((*(uint *)(iVar1 + iVar2 + 0x25) & 0x820) == 0 &&
           (*(uint *)(iVar1 + iVar2 + 0x23) & 0x380) == 0);
  return 0xffff;
}
