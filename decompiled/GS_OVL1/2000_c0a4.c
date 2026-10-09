/* GS.GS2 2000:c0a4 undefined FUN_2000_c0a4(void) */
void __cdecl16far FUN_2000_c0a4(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int iVar5;
  
  func_0x00000eb0();
  iVar5 = 0;
  while( true ) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar2 = (int)*(undefined4 *)0xb860;
    if ((*(int *)(iVar2 + iVar5 * 0x27 + 0x23) == 0x1000) &&
       (*(int *)(iVar2 + iVar5 * 0x27 + 0x25) == 0x1001)) break;
    iVar5 = iVar5 + 1;
  }
  while( true ) {
    iVar2 = iVar5 * 0x27 + *(int *)0xb860;
    uVar3 = *(undefined2 *)0xb862;
    if (((*(int *)(iVar2 + 0x23) != 0x1000) || (*(int *)(iVar2 + 0x25) != 0x1001)) ||
       ((iVar1 = func_0x00003aec(0xbf,*(undefined2 *)(iVar2 + 0x1b),*(undefined2 *)(iVar2 + 0x1d),
                                 0x155,0), iVar1 - *(int *)(param_1 + 6) == 1 &&
        (iVar2 = func_0x00003aec(0xbf,*(undefined2 *)(iVar2 + 0x1f),*(undefined2 *)(iVar2 + 0x21),
                                 0xfe39,0xffff), iVar2 - *(int *)(param_1 + 8) == -0x47f)))) break;
    iVar5 = iVar5 + 1;
  }
  iVar5 = iVar5 * 0x27;
  uVar4 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
  iVar2 = (int)*(undefined4 *)0xb860;
  uVar3 = *(undefined2 *)(iVar2 + iVar5 + 0x1d);
  *param_2 = *(undefined2 *)(iVar2 + iVar5 + 0x1b);
  param_2[1] = uVar3;
  uVar4 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
  iVar2 = (int)*(undefined4 *)0xb860;
  uVar3 = *(undefined2 *)(iVar2 + iVar5 + 0x21);
  *param_3 = *(undefined2 *)(iVar2 + iVar5 + 0x1f);
  param_3[1] = uVar3;
  return;
}
