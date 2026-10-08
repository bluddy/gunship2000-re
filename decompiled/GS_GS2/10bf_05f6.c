/* GS.GS2 10bf:05f6 undefined FUN_10bf_05f6(void) */
undefined2 __cdecl16far FUN_10bf_05f6(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  char local_10;
  undefined1 uStack_f;
  undefined1 local_e [8];
  int iStack_6;
  undefined1 *puStack_4;
  
  uVar2 = 0xffff;
  if (((*(byte *)(param_1 + 6) & 0x40) != 0) || ((*(byte *)(param_1 + 6) & 0x83) == 0))
  goto LAB_10bf_06a4;
  uVar2 = FUN_10bf_0cf0(param_1);
  iStack_6 = *(int *)(param_1 + 0xa4);
  FUN_10bf_0ae6(param_1);
  iVar1 = FUN_10bf_1b32(0x10bf,*(undefined1 *)(param_1 + 7));
  if (-1 < iVar1) {
    if (iStack_6 == 0) goto LAB_10bf_06a4;
    FUN_10bf_21d6(&local_10,0x68bc);
    puStack_4 = local_e;
    if (local_10 == '\\') {
      puStack_4 = &uStack_f;
    }
    else {
      FUN_10bf_2196(&local_10,0x68be);
    }
    FUN_10bf_2350(0x10bf,iStack_6,puStack_4,10);
    iVar1 = FUN_10bf_2d88(0x10bf,&local_10);
    if (iVar1 == 0) goto LAB_10bf_06a4;
  }
  uVar2 = 0xffff;
LAB_10bf_06a4:
  *(undefined1 *)(param_1 + 6) = 0;
  return uVar2;
}
