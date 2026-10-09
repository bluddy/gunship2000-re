/* GS.GS2 3000:4288 undefined FUN_3000_4288(void) */
int __cdecl16far FUN_3000_4288(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint uStack_1d2;
  int iStack_1d0;
  int aiStack_1ce [226];
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  
  iStack_6 = 0x4293;
  func_0x00000eb0();
  iStack_6 = param_2;
  uStack_8 = 0xbf;
  uStack_a = 0x429b;
  uVar2 = FUN_3000_3aee();
  for (uStack_1d2 = 0; (int)uStack_1d2 < 0xe6; uStack_1d2 = uStack_1d2 + 1) {
    aiStack_1ce[uStack_1d2] = *(int *)(uStack_1d2 * 2 + param_1);
  }
  for (uStack_1d2 = 0; uStack_1d2 < uVar2; uStack_1d2 = uStack_1d2 + 1) {
    iStack_6 = uStack_1d2 + param_2;
    uStack_8 = 0xbf;
    uStack_a = 0x42ec;
    iVar3 = FUN_3000_3a48();
    iVar3 = iVar3 * 0x20 + *(int *)0xb868;
    uVar1 = *(undefined2 *)0xb86a;
    uVar4 = (uint)*(byte *)(iVar3 + 0xc);
    aiStack_1ce[uVar4] = *(int *)(uVar4 * 2 + 0xda0);
    uVar4 = (uint)*(byte *)(iVar3 + 0xe);
    aiStack_1ce[uVar4] = *(int *)(uVar4 * 2 + 0xda0);
  }
  iStack_1d0 = *(int *)(((int)*(char *)(*(int *)0xb8ce + 0x2c28) + *(int *)0xb8d0) * 0x13 + 0x2c3d);
  for (uStack_1d2 = 0; (int)uStack_1d2 < 0xe6; uStack_1d2 = uStack_1d2 + 1) {
    iStack_1d0 = iStack_1d0 + aiStack_1ce[uStack_1d2];
  }
  return iStack_1d0;
}
