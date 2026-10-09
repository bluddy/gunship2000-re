/* GS.GS2 2000:ef78 undefined FUN_2000_ef78(void) */
int __cdecl16far
FUN_2000_ef78(int *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  func_0x00000eb0();
  uVar3 = *(undefined2 *)0x71aa;
  uVar1 = *(undefined2 *)0x8f6;
  *(undefined2 *)0xc38e = *(undefined2 *)0x8f4;
  *(undefined2 *)0xc390 = uVar1;
  uVar1 = *(undefined2 *)0x8fe;
  *(undefined2 *)0xc39e = *(undefined2 *)0x8fc;
  *(undefined2 *)0xc3a0 = uVar1;
  uVar1 = *(undefined2 *)0x906;
  *(undefined2 *)0xc3ae = *(undefined2 *)0x904;
  *(undefined2 *)0xc3b0 = uVar1;
  uVar1 = *(undefined2 *)0x90e;
  *(undefined2 *)0xc3be = *(undefined2 *)0x90c;
  *(undefined2 *)0xc3c0 = uVar1;
  uVar1 = *(undefined2 *)0x8fa;
  *(undefined2 *)0xc396 = *(undefined2 *)0x8f8;
  *(undefined2 *)0xc398 = uVar1;
  uVar1 = *(undefined2 *)0x902;
  *(undefined2 *)0xc3a6 = *(undefined2 *)0x900;
  *(undefined2 *)0xc3a8 = uVar1;
  uVar1 = *(undefined2 *)0x90a;
  *(undefined2 *)0xc3b6 = *(undefined2 *)0x908;
  *(undefined2 *)0xc3b8 = uVar1;
  uVar1 = *(undefined2 *)0x912;
  *(undefined2 *)0xc3c6 = *(undefined2 *)0x910;
  *(undefined2 *)0xc3c8 = uVar1;
  *(undefined2 *)0xc024 = 8;
  for (iVar4 = 0; iVar4 < *(int *)0xc024; iVar4 = iVar4 + 1) {
    *(undefined2 *)(iVar4 * 8 + -0x3c6c) = 0;
  }
  iVar4 = 0;
  while( true ) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar2 = (int)*(undefined4 *)0xb860;
    if ((*(byte *)(iVar2 + iVar4 * 0x27 + 0x23) & 0x10) != 0) break;
    iVar4 = iVar4 + 1;
  }
  do {
    iVar4 = iVar4 + 1;
  } while ((*(byte *)(iVar2 + iVar4 * 0x27 + 0x23) & 0x10) == 0);
  *(int *)0xc39c = iVar4;
  iVar4 = 0;
  while ((*(byte *)(iVar2 + iVar4 * 0x27 + 0x23) & 8) == 0) {
    iVar4 = iVar4 + 1;
  }
  *(int *)0xc3ac = iVar4;
  do {
    iVar4 = iVar4 + 1;
  } while ((*(byte *)(iVar2 + iVar4 * 0x27 + 0x23) & 8) == 0);
  *(int *)0xc3bc = iVar4;
  iVar4 = 0;
  while ((*(byte *)(iVar2 + iVar4 * 0x27 + 0x23) & 4) == 0) {
    iVar4 = iVar4 + 1;
  }
  *(int *)0xc3cc = iVar4;
  for (iVar4 = 1; iVar4 < *(int *)0xc024; iVar4 = iVar4 + 2) {
    iVar2 = 0;
    while (*(uint *)((int)*(undefined4 *)0xb860 + *(int *)(iVar4 * 8 + -0x3c6c) * 0x27 + 0x19) !=
           (uint)*(byte *)(iVar2 * 8 + (int)*(undefined4 *)0xb85c)) {
      *(int *)(iVar4 * 8 + -0x3c6e) = iVar2 + 1;
      iVar2 = iVar2 + 1;
    }
  }
  func_0x00024370(0xbf,&param_2,&param_3);
  func_0x000212b0(0x20f4,*(undefined2 *)0x9ec,*(undefined2 *)0x9ee);
  func_0x0000c8c0(0x20f4,0x880,0,0,0x140,200,0xffff);
  func_0x0000c928(0xc87,10);
  iVar4 = func_0x00025248(0xc87,param_1,&param_2,&param_3,0);
  if (iVar4 != 0) {
    if ((*param_1 % 2 != 0) &&
       ((iVar4 = func_0x00027b8c(0x20f4,*(undefined2 *)(*param_1 * 8 + -0x3c6e)), iVar4 == 0 ||
        (iVar4 = func_0x000224c4(0x20f4,*(undefined2 *)(*param_1 * 8 + -0x3c6e),0xffff), iVar4 == 0)
        ))) {
      return 0;
    }
    iVar4 = *(int *)0xc018;
    *(undefined2 *)(iVar4 * 0xb + -0x4362) = *(undefined2 *)(*param_1 * 8 + -0x3c6c);
    *(undefined2 *)(iVar4 * 0xb + -0x4360) = *(undefined2 *)(*param_1 * 8 + -0x3c6e);
    if ((*param_1 == 2) && (iVar4 = func_0x00027b36(0x20f4), iVar4 == 0)) {
      func_0x000212b0(0x20f4,*(undefined2 *)0xa00,*(undefined2 *)0xa02);
      return 0;
    }
    if (*param_1 % 2 == 0) {
      if (*(int *)0xc018 == 0) {
        func_0x000212b0(0x20f4,*(undefined2 *)0x9fc,*(undefined2 *)0x9fe);
        return 0;
      }
      func_0x000212b0(0x20f4,*(undefined2 *)0x9f8,*(undefined2 *)0x9fa);
    }
    else {
      func_0x000212b0(0x20f4,*(undefined2 *)0x9f4,*(undefined2 *)0x9f6);
    }
    func_0x0000c8c0(0x20f4,0x8a4,0xb2,param_5 + 8,0x82,6,0xca);
    func_0x0000c8c0(0xc87,0x8a4,param_4,param_5,0x50,6,0xca);
    func_0x0000c928(0xc87,0xf);
    func_0x0000ca66(0xc87,0x2954,*(undefined2 *)(*param_1 * 8 + -0x3c72),
                    *(undefined2 *)(*param_1 * 8 + -0x3c70));
    return -1;
  }
  return iVar4;
}
