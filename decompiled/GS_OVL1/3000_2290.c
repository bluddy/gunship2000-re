/* GS.GS2 3000:2290 undefined FUN_3000_2290(void) */
void __cdecl16far FUN_3000_2290(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  func_0x00000eb0();
  iVar3 = 0x10;
  func_0x00016a62(0xbf,0x892,0,0x1a,0x1e,0x10,0x1a,0);
  iVar3 = iVar3 * 0xc;
  FUN_3000_20d6(0,2,2,*(undefined2 *)(iVar3 + 0x2ad8),*(undefined2 *)(iVar3 + 0x2ada),
                *(undefined2 *)(iVar3 + 0x2adc),*(undefined2 *)(iVar3 + 0x2ade),
                7 - *(int *)(iVar3 + 0x2ae0),0x1f - *(int *)(iVar3 + 0x2ae2),0);
  FUN_3000_20d6(0,2,2,*(undefined2 *)(iVar3 + 0x2ad8),*(undefined2 *)(iVar3 + 0x2ada),
                *(undefined2 *)(iVar3 + 0x2adc),*(undefined2 *)(iVar3 + 0x2ade),
                0x14 - *(int *)(iVar3 + 0x2ae0),0x22,0);
  FUN_3000_20d6(0xffff,2,2,0x27,0xb,6,0xb,6,0x20,0);
  FUN_3000_20d6(0xffff,2,2,0x22,0x16,0xc,9,0xe,0x1a,0);
  *(undefined1 *)0xe28e = 0xff;
  iVar3 = 0x1658;
  FUN_3000_0fbc(5);
  if (param_1 == 0) {
    if (iVar3 == 0xb) {
      FUN_3000_12b0(*(undefined2 *)0xa78,*(undefined2 *)0xa7a);
    }
  }
  else {
    uVar2 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
    if (*(char *)((int)*(undefined4 *)0xb85c + *(int *)(param_1 * 0xb + -0x4360) * 8 + 2) == '\x01')
    {
      FUN_3000_12b0(*(int *)((int)*(undefined4 *)0xb860 + *(int *)(param_1 * 0xb + -0x4362) * 0x27 +
                            0x19) * 0x1a + *(int *)0xa25c + 1,*(undefined2 *)0xa25e);
    }
    else {
      FUN_3000_12b0((uint)*(byte *)(*(int *)0xb85c + *(int *)(param_1 * 0xb + -0x4360) * 8 + 1) *
                    0x1b + *(int *)0xa278 + 2,*(undefined2 *)0xa27a);
      iVar1 = *(int *)(param_1 * 0xb + -0x4362) * 0x27;
      uVar2 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
      iVar3 = (int)*(undefined4 *)0xb860;
      if ((*(int *)(iVar3 + iVar1 + 0x23) == 0) && (*(int *)(iVar3 + iVar1 + 0x25) == 0x1000)) {
        func_0x0000ca66(0x1658,0x2d4c,*(undefined2 *)0x9bc,*(undefined2 *)0x9be);
      }
    }
  }
  FUN_3000_7742();
  return;
}
