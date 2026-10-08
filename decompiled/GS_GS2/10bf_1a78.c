/* GS.GS2 10bf:1a78 undefined FUN_10bf_1a78(void) */
undefined2 * __cdecl16far FUN_10bf_1a78(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0x68c2;
  while( true ) {
    if ((undefined2 *)*(undefined2 *)0x6a02 < puVar1) {
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
