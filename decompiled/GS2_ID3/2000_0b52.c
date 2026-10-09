/* GS2.GS2 2000:0b52 undefined FUN_2000_0b52(void) */
void __cdecl16far FUN_2000_0b52(void)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  pbVar5 = (byte *)*(uint *)0x2d12;
  iVar1 = *(int *)0xf0;
  uVar2 = *(undefined2 *)0x18cc;
  uVar4 = (uint)pbVar5 & 0x1fff | 0x100;
  do {
    uVar3 = (uint)pbVar5 & 1;
    pbVar5 = (byte *)((uint)pbVar5 >> 1);
    if (uVar3 != 0) {
      pbVar5 = (byte *)((uint)pbVar5 ^ 0xb400);
    }
    if (pbVar5 < (byte *)(iVar1 * 0x140)) {
      *pbVar5 = *(byte *)(ulong)(*pbVar5 + 0x2d62);
    }
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  *(undefined2 *)0x2d12 = pbVar5;
  return;
}
