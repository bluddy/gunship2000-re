/* GS.GS2 1b63:03ea undefined FUN_1b63_03ea(void) */
void __cdecl16far FUN_1b63_03ea(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  FUN_10bf_02c0();
  iVar3 = 0;
  while( true ) {
    if (*(int *)0x8206 <= iVar3) {
      return;
    }
    uVar2 = (undefined2)((ulong)*(undefined4 *)0x8208 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x8208;
    if (*(char *)(iVar3 * 0xe + iVar1) == param_1) break;
    iVar3 = iVar3 + 1;
  }
  FUN_1b63_0612(iVar1 + iVar3 * 0xe,uVar2,param_2,param_3);
  while( true ) {
    iVar3 = iVar3 + 1;
    if (*(int *)0x8206 <= iVar3) {
      return;
    }
    uVar2 = (undefined2)((ulong)*(undefined4 *)0x8208 >> 0x10);
    iVar1 = (int)*(undefined4 *)0x8208;
    if (*(char *)(iVar3 * 0xe + iVar1) != -1) break;
    FUN_1b63_0612(iVar1 + iVar3 * 0xe,uVar2,param_2,param_3);
  }
  return;
}
