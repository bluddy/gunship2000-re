/* GS2.GS2 1000:9c32 undefined FUN_1000_9c32(void) */
int __cdecl16far FUN_1000_9c32(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iStack_18;
  undefined1 local_16 [20];
  
  func_0x0000377e();
  iVar2 = func_0x0000afe4(0x2a2,local_16);
  if (iVar2 == 0) {
    *(undefined2 *)0x3580 = 0x182;
    *(undefined2 *)0x3582 = uRam000004f0;
    iStack_18 = 0;
    uVar1 = *(undefined2 *)0x3582;
    do {
      *(byte *)(*(int *)0x3580 + iStack_18) = *(byte *)(*(int *)0x3580 + iStack_18) ^ 0x42;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < 0x14);
    iStack_18 = 0;
    do {
      *(int *)(iStack_18 * 0xc + 0x3a1c) = iStack_18 * 0x26 + 0x3684;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < 0x18);
    func_0x00001226(0xafe);
    iVar2 = 0;
  }
  return iVar2;
}
