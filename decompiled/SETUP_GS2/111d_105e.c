/* SETUP.GS2 111d:105e undefined FUN_111d_105e(void) */
undefined2 * __cdecl16far FUN_111d_105e(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0x9ce;
  while( true ) {
    if ((undefined2 *)*(undefined2 *)0xb0e < puVar1) {
      return (undefined2 *)0x0;
    }
    if ((*(byte *)(puVar1 + 3) & 0x83) == 0) break;
    puVar1 = puVar1 + 4;
  }
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)((int)puVar1 + 7) = 0xff;
  return puVar1;
}
