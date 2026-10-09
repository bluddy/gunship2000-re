/* GS.GS2 3000:4080 undefined FUN_3000_4080(void) */
void __cdecl16far FUN_3000_4080(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_a8;
  int aiStack_a6 [77];
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iVar5;
  int iVar6;
  
  func_0x00000eb0();
  iVar5 = 0;
  if ((*(int *)0xc4d8 != 9999) && (*(char *)0xe28c != '\x02')) {
    aiStack_a6[0] = *(int *)0xc4d4;
    iVar5 = 1;
  }
  if (*(int *)0xc4e6 != 9999) {
    aiStack_a6[iVar5] = *(int *)0xc4e2;
    iVar5 = iVar5 + 1;
  }
  if (*(int *)0xc4f6 != 9999) {
    aiStack_a6[iVar5] = *(int *)0xc4f2;
    iVar5 = iVar5 + 1;
  }
  if (*(int *)0xc50a != 9999) {
    aiStack_a6[iVar5] = *(int *)0xc506;
    iVar5 = iVar5 + 1;
  }
  if (*(int *)0xc516 != 9999) {
    aiStack_a6[iVar5] = *(int *)0xc512;
    iVar5 = iVar5 + 1;
  }
  for (iStack_a8 = 0; iStack_a8 < *(int *)0xc018; iStack_a8 = iStack_a8 + 1) {
    aiStack_a6[iVar5 + iStack_a8] = *(int *)(iStack_a8 * 0xb + -0x4360);
  }
  iVar5 = iVar5 + iStack_a8;
  for (iVar6 = 0; iVar6 < 0xe6; iVar6 = iVar6 + 1) {
    *(undefined2 *)(iVar6 * 2 + param_1) = 0;
  }
  *(undefined2 *)(param_1 + 0x114) = *(undefined2 *)0xeb4;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)0xdb2;
  *(undefined2 *)(param_1 + 0x116) = *(undefined2 *)0xeb6;
  *(undefined2 *)(param_1 + 0x13c) = *(undefined2 *)0xedc;
  *(undefined2 *)(param_1 + 0x12e) = *(undefined2 *)0xece;
  *(undefined2 *)(param_1 + 0x9e) = *(undefined2 *)0xe3e;
  iVar6 = 0;
  while ((iVar6 < *(int *)0xb8c8 &&
         (uVar4 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10),
         iVar2 = (int)*(undefined4 *)0xb860,
         *(int *)(iVar2 + iVar6 * 0x27 + 0x25) != 0 || *(int *)(iVar2 + iVar6 * 0x27 + 0x23) != 0)))
  {
    iVar6 = iVar6 + 1;
  }
  iStack_a8 = 0;
  while (*(uint *)((int)*(undefined4 *)0xb860 + iVar6 * 0x27 + 0x19) !=
         (uint)*(byte *)(iStack_a8 * 8 + (int)*(undefined4 *)0xb85c)) {
    iStack_a8 = iStack_a8 + 1;
  }
  iVar6 = (uint)*(byte *)((int)*(undefined4 *)0xb85c + iStack_a8 * 8 + 1) * 2;
  *(undefined2 *)(iVar6 + param_1) = *(undefined2 *)(iVar6 + 0xda0);
  for (iVar6 = 0; iVar6 < iVar5; iVar6 = iVar6 + 1) {
    iStack_8 = aiStack_a6[iVar6];
    uStack_a = 0xbf;
    uStack_c = 0x4224;
    iVar2 = FUN_3000_3aee();
    for (iStack_a8 = 0; iStack_a8 < iVar2; iStack_a8 = iStack_a8 + 1) {
      iStack_8 = iStack_a8 + aiStack_a6[iVar6];
      uStack_a = 0xbf;
      uStack_c = 0x424d;
      iVar1 = FUN_3000_3a48();
      iVar3 = (uint)*(byte *)((int)*(undefined4 *)0xb868 + iVar1 * 0x20 + 0xc) * 2;
      *(undefined2 *)(iVar3 + param_1) = *(undefined2 *)(iVar3 + 0xda0);
      iVar1 = (uint)*(byte *)((int)*(undefined4 *)0xb868 + iVar1 * 0x20 + 0xe) * 2;
      *(undefined2 *)(iVar1 + param_1) = *(undefined2 *)(iVar1 + 0xda0);
    }
  }
  return;
}
