/* GS.GS2 3000:6dda undefined FUN_3000_6dda(void) */
void __cdecl16far FUN_3000_6dda(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int unaff_SI;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
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
    if ((*(int *)(iVar2 + 0x23) != 0x1000) || (*(int *)(iVar2 + 0x25) != 0x1001)) break;
    iVar5 = -1;
    iVar4 = -0x155;
    iVar1 = func_0x00003aec(0xbf,*(undefined2 *)(iVar2 + 0x1b),*(undefined2 *)(iVar2 + 0x1d));
    iVar1 = func_0x000038b8(0xbf,iVar1 + *param_1 + 1);
    iVar2 = func_0x00003aec(0xbf,*(undefined2 *)(iVar2 + 0x1f),*(undefined2 *)(iVar2 + 0x21),0x1c7,0
                           );
    iVar2 = func_0x000038b8(0xbf,iVar2 + *param_2 + -0x47f);
    if (iVar1 + iVar2 < iVar4) {
      unaff_SI = iVar5;
    }
    iVar5 = iVar5 + 1;
  }
  iVar2 = unaff_SI * 0x27;
  iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(*(int *)0xb860 + iVar2 + 0x1b),
                          *(undefined2 *)(*(int *)0xb860 + iVar2 + 0x1d),0x155,0);
  *(int *)(*(int *)0xc018 * 0xb + -0x435c) = iVar5 + -1;
  *param_1 = iVar5 + -1;
  uVar3 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
  iVar5 = (int)*(undefined4 *)0xb860;
  iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(iVar5 + iVar2 + 0x1f),
                          *(undefined2 *)(iVar5 + iVar2 + 0x21),0xfe39,0xffff);
  *(int *)(*(int *)0xc018 * 0xb + -0x435a) = iVar5 + 0x47f;
  *param_2 = iVar5 + 0x47f;
  return;
}
