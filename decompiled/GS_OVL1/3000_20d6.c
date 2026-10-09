/* GS.GS2 3000:20d6 undefined FUN_3000_20d6(void) */
void __cdecl16far
FUN_3000_20d6(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
             int param_8,int param_9,int param_10)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  int iStack_1a;
  int iStack_14;
  int iStack_10;
  uint uStack_e;
  int iStack_a;
  int iStack_8;
  
  func_0x00000eb0();
  uVar2 = *(undefined2 *)(param_2 * 2 + -0x43d0);
  uVar3 = *(undefined2 *)(param_3 * 2 + -0x43d0);
  if (param_10 == 0) {
    iVar4 = 0;
    iStack_a = 0;
    iStack_10 = 0x140;
    iStack_14 = 200;
  }
  else {
    iStack_a = *(int *)0xc366;
    iVar4 = *(int *)0xc364;
    iStack_10 = iVar4 + *(int *)0xc378;
    iStack_14 = iStack_a + *(int *)0xc37a;
  }
  if (param_8 < iVar4) {
    param_4 = param_4 + (iVar4 - param_8);
    param_6 = param_6 + (param_8 - iVar4);
    param_8 = iVar4;
  }
  else {
    iVar4 = iStack_10 - param_8;
    if (param_6 < iStack_10 - param_8) {
      iVar4 = param_6;
    }
    param_6 = iVar4;
    if (iVar4 < 0) {
      param_6 = 0;
    }
  }
  if (param_9 < iStack_a) {
    param_5 = param_5 + (iStack_a - param_9);
    iVar4 = param_9 - iStack_a;
    param_9 = iStack_a;
    param_7 = param_7 + iVar4;
  }
  else {
    iVar4 = iStack_14 - param_9;
    if (param_7 < iStack_14 - param_9) {
      iVar4 = param_7;
    }
    param_7 = iVar4;
    if (iVar4 < 0) {
      param_7 = 0;
    }
  }
  if (param_1 == 0) {
    iStack_8 = param_9 * 0x140;
    for (uStack_e = param_5 * 0x140; uStack_e < (uint)((param_7 + param_5) * 0x140);
        uStack_e = uStack_e + 0x140) {
      for (iStack_1a = 0; iStack_1a < param_6; iStack_1a = iStack_1a + 1) {
        *(undefined1 *)(iStack_8 + iStack_1a + param_8) =
             *(undefined1 *)(uStack_e + iStack_1a + param_4);
      }
      iStack_8 = iStack_8 + 0x140;
    }
    return;
  }
  iStack_8 = param_9 * 0x140;
  for (uStack_e = param_5 * 0x140; uStack_e < (uint)((param_7 + param_5) * 0x140);
      uStack_e = uStack_e + 0x140) {
    for (iStack_1a = 0; iStack_1a < param_6; iStack_1a = iStack_1a + 1) {
      cVar1 = *(char *)(uStack_e + iStack_1a + param_4);
      if (cVar1 != '\0') {
        *(char *)(iStack_8 + iStack_1a + param_8) = cVar1;
      }
    }
    iStack_8 = iStack_8 + 0x140;
  }
  return;
}
