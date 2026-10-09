/* GS.GS2 3000:7580 undefined FUN_3000_7580(void) */
void __cdecl16far FUN_3000_7580(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  int iVar8;
  int iVar9;
  
  func_0x00000eb0();
  iVar8 = 0;
  while (uVar7 = (undefined2)((ulong)*(undefined4 *)0xb858 >> 0x10),
        *(char *)((int)*(undefined4 *)0xb858 + iVar8 * 9 + 8) != '\b') {
    iVar8 = iVar8 + 1;
  }
  iVar8 = iVar8 * 9;
  iVar9 = *(int *)(iVar8 + *(int *)0xb858);
  iVar1 = func_0x00003aec(0xbf,iVar9,*(undefined2 *)(iVar8 + *(int *)0xb858 + 2),0x155,0);
  iVar1 = iVar1 + -1;
  iVar8 = func_0x00003aec(0xbf,*(undefined2 *)(iVar8 + *(int *)0xb858 + 4),
                          *(undefined2 *)(iVar8 + *(int *)0xb858 + 6),0xfe39,0xffff);
  iVar8 = iVar8 + 0x481;
  do {
    iVar9 = iVar9 + 1;
    uVar7 = (undefined2)((ulong)*(undefined4 *)0xb858 >> 0x10);
  } while (*(char *)((int)*(undefined4 *)0xb858 + iVar9 * 9 + 8) != '\b');
  iVar9 = iVar9 * 9;
  iVar2 = func_0x00003aec(0xbf,*(undefined2 *)(iVar9 + *(int *)0xb858),
                          *(undefined2 *)(iVar9 + *(int *)0xb858 + 2),0x155,0);
  iVar2 = iVar2 + -1;
  iVar9 = func_0x00003aec(0xbf,*(undefined2 *)(iVar9 + *(int *)0xb858 + 4),
                          *(undefined2 *)(iVar9 + *(int *)0xb858 + 6),0xfe39,0xffff);
  iVar9 = iVar9 + 0x481;
  iVar3 = func_0x000038b8(0xbf,*param_1 - iVar1);
  iVar4 = func_0x000038b8(0xbf,*param_2 - iVar8);
  iVar5 = func_0x000038b8(0xbf,*param_1 - iVar2);
  iVar6 = func_0x000038b8(0xbf,*param_2 - iVar9);
  if (iVar5 + iVar6 <= iVar3 + iVar4) {
    *(int *)(*(int *)0xc018 * 0xb + -0x435c) = iVar2;
    *param_1 = iVar2;
    *(int *)(*(int *)0xc018 * 0xb + -0x435a) = iVar9;
    *param_2 = iVar9;
    return;
  }
  *(int *)(*(int *)0xc018 * 0xb + -0x435c) = iVar1;
  *param_1 = iVar1;
  *(int *)(*(int *)0xc018 * 0xb + -0x435a) = iVar8;
  *param_2 = iVar8;
  return;
}
