/* GS2.GS2 137f:0850 undefined FUN_137f_0850(void) */
void __cdecl16near FUN_137f_0850(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_DI;
  undefined2 unaff_DS;
  
  cVar1 = *(char *)(unaff_DI + 4);
  *(undefined2 *)0x106 = *(undefined2 *)(unaff_DI + 1);
  iVar5 = (uint)(byte)(cVar1 * '\x03') * 4 + *(int *)0x10a;
  iVar2 = *(int *)(iVar5 + 10);
  if (0x10 < iVar2) {
    uVar3 = *(int *)0x100 -
            (int)(CONCAT22((int)(char)((uint)*(undefined2 *)(iVar5 + 6) >> 8),
                           CONCAT11((char)*(undefined2 *)(iVar5 + 6),*(undefined1 *)(iVar5 + 5))) /
                 (long)iVar2);
    if (uVar3 < 0x96) {
      uVar4 = (int)(CONCAT22((int)(char)((uint)*(undefined2 *)(iVar5 + 2) >> 8),
                             CONCAT11((char)*(undefined2 *)(iVar5 + 2),*(undefined1 *)(iVar5 + 1)))
                   / (long)iVar2) + *(int *)0xfe;
      if (uVar4 < 300) {
        FUN_137f_204e((int)((long)((ulong)*(byte *)(unaff_DI + 3) << 8) / (long)iVar2),uVar4,uVar3);
        FUN_137f_2275();
        thunk_EXT_FUN_0000_0000(0x137f);
      }
    }
  }
  return;
}
