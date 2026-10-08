/* SETUP.GS2 1386:03b4 undefined FUN_1386_03b4(void) */
void __cdecl16far FUN_1386_03b4(int param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  if (0x50 < (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 5)) {
    *(char *)(param_1 + 5) = -(*(byte *)(param_1 + 3) + 0xb0);
  }
  if (0x19 < (uint)*(byte *)(param_1 + 4) + (uint)*(byte *)(param_1 + 6)) {
    *(char *)(param_1 + 6) = -(*(byte *)(param_1 + 4) - 0x19);
  }
  *(char *)(param_1 + 7) = *(char *)(param_1 + 3) + *(char *)(param_1 + 5) + -1;
  *(char *)(param_1 + 8) = *(char *)(param_1 + 4) + *(char *)(param_1 + 6) + -1;
  bVar1 = *(char *)(param_1 + 7) + 2;
  *(byte *)(param_1 + 9) = bVar1;
  if (0x4f < bVar1) {
    *(undefined1 *)(param_1 + 9) = 0x4f;
  }
  bVar1 = *(char *)(param_1 + 8) + 1;
  *(byte *)(param_1 + 10) = bVar1;
  if (0x18 < bVar1) {
    *(undefined1 *)(param_1 + 10) = 0x18;
  }
  return;
}
