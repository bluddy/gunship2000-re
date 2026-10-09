/* GS.GS2 3000:7f1a undefined FUN_3000_7f1a(void) */
void __cdecl16far FUN_3000_7f1a(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  
  uVar6 = 0xbf;
  func_0x00000eb0();
  local_1a = 1;
  uStack_18 = *(undefined2 *)0xc364;
  uStack_16 = *(undefined2 *)0xc366;
  iStack_14 = *(int *)0xc378 + -1;
  iStack_12 = *(int *)0xc37a + -1;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  iStack_8 = 0xbf;
  uStack_a = 0x7f58;
  iVar1 = FUN_3000_0f44();
  iStack_8 = 0xbf;
  uStack_a = 0x7f5f;
  iVar2 = FUN_3000_0f6a();
  for (iStack_8 = 0; iStack_8 < *(int *)(param_1 + 4) + -2; iStack_8 = iStack_8 + 1) {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 8) >> 0x10);
    iVar4 = (int)*(undefined4 *)(param_1 + 8) + iStack_8 * 9;
    if ((*(byte *)(iVar4 + 0x1a) & 0x40) == 0) {
      iStack_8 = 0xb;
      uStack_a = 0xffff;
      uStack_c = 0xfe39;
      uStack_e = *(undefined2 *)(iVar4 + 0x21);
      uStack_10 = *(undefined2 *)(iVar4 + 0x1f);
      iStack_14 = 0x7fab;
      iStack_12 = uVar6;
      iVar3 = func_0x00003aec();
      iStack_12 = (iVar3 - iVar2) + 0x47f;
      iStack_14 = 0;
      uStack_16 = 0x155;
      uStack_18 = *(undefined2 *)(iVar4 + 0x1d);
      local_1a = *(undefined2 *)(iVar4 + 0x1b);
      iVar3 = func_0x00003aec(0xbf);
      iVar3 = func_0x00003aec(0xbf,*(undefined2 *)(iVar4 + 0x16),*(undefined2 *)(iVar4 + 0x18),
                              0xfe39,0xffff,(iVar3 - iVar1) + -1);
      iVar4 = func_0x00003aec(0xbf,*(undefined2 *)(iVar4 + 0x12),*(undefined2 *)(iVar4 + 0x14),0x155
                              ,0,(iVar3 - iVar2) + 0x47f);
      uVar6 = 0x1658;
      func_0x00016e72(0xbf,&local_1a,(iVar4 - iVar1) + -1);
    }
  }
  return;
}
