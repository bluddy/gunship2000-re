/* GS.GS2 1b63:0570 undefined FUN_1b63_0570(void) */
void __cdecl16far FUN_1b63_0570(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  FUN_10bf_02c0();
  iVar4 = 0;
  while( true ) {
    if (*(int *)0x8206 <= iVar4) {
      return;
    }
    uVar2 = (undefined2)((ulong)*(undefined4 *)0x8208 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x8208;
    uVar3 = 0x10bf;
    if (*(char *)(iVar4 * 0xe + iVar1) == param_1) break;
    iVar4 = iVar4 + 1;
  }
  do {
    iVar1 = iVar4 * 0xe + iVar1;
    thunk_EXT_FUN_0000_0000
              (uVar3,0x880,*(undefined2 *)(iVar1 + 9),*(undefined2 *)(iVar1 + 0xb),
               *(undefined2 *)(iVar1 + 5),*(undefined2 *)(iVar1 + 7),param_2,
               *(undefined2 *)(iVar1 + 9),*(undefined2 *)(iVar1 + 0xb));
    iVar4 = iVar4 + 1;
    if (*(int *)0x8206 <= iVar4) {
      return;
    }
    uVar2 = (undefined2)((ulong)*(undefined4 *)0x8208 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x8208;
    uVar3 = 0x2658;
  } while (*(char *)(iVar4 * 0xe + iVar1) == -1);
  return;
}
