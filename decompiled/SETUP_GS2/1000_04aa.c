/* SETUP.GS2 1000:04aa undefined FUN_1000_04aa(void) */
void __cdecl16far FUN_1000_04aa(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  if (*(char *)((uint)*(byte *)0x5a0 * 9 + 0xc9c) == '\0') {
    *(undefined1 *)(*(int *)0x659 + 0x37) = 0;
    *(undefined2 *)(*(int *)0x659 + 0x38) = 0;
  }
  else {
    *(undefined1 *)(*(int *)0x659 + 0x37) = 1;
    *(undefined2 *)(*(int *)0x659 + 0x38) = *(undefined2 *)0x1d66;
  }
  if (*(char *)((uint)*(byte *)0x5a0 * 9 + 0xc9d) == '\0') {
    *(undefined1 *)(*(int *)0x659 + 0x48) = 0;
  }
  else {
    *(undefined1 *)(*(int *)0x659 + 0x48) = 1;
  }
  if (*(char *)((uint)*(byte *)0x5a0 * 9 + 0xc9e) == '\0') {
    *(undefined1 *)(*(int *)0x5c5 + 0x15) = 0;
  }
  else {
    *(undefined1 *)(*(int *)0x5c5 + 0x15) = 1;
  }
  if (*(char *)((uint)*(byte *)0x5a0 * 9 + 0xc9f) == '\0') {
    *(undefined1 *)(*(int *)0x5c5 + 0x26) = 0;
    *(undefined1 *)(*(int *)0x5c5 + 0x37) = 0;
  }
  else {
    *(undefined1 *)(*(int *)0x5c5 + 0x37) = 1;
    *(undefined1 *)(*(int *)0x5c5 + 0x26) = 1;
  }
  bVar1 = *(byte *)0x5a0;
  if ((int)*(char *)0xd4e != (uint)bVar1) {
    *(undefined2 *)0x1f80 = 1;
    *(undefined2 *)0x1f74 = 5;
    *(undefined2 *)0x1f70 = 0;
    *(byte *)0xd4e = bVar1;
  }
  return;
}
