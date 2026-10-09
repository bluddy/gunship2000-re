/* GS.GS2 2000:fa9a undefined FUN_2000_fa9a(void) */
void __cdecl16far FUN_2000_fa9a(void)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  func_0x00003d8c(0xbf,*(int *)0x9f18 + 4,*(undefined2 *)0x9f1a,0x4d3e);
  uVar2 = func_0x00013a46(0xbf,0x12);
  *(undefined1 *)*(undefined4 *)0x9f18 = uVar2;
  cVar3 = func_0x00013a46(0x139c,7);
  pcVar1 = (char *)*(undefined4 *)0x9f18;
  ((char *)pcVar1)[1] = -(cVar3 - *(char *)(*pcVar1 + 0x4c7a));
  uVar5 = (undefined2)((ulong)*(undefined4 *)0x9f18 >> 0x10);
  iVar4 = (int)*(undefined4 *)0x9f18;
  pcVar1 = (char *)(iVar4 + 1);
  *pcVar1 = *pcVar1 - *(char *)(iVar4 + 1) % '\x05';
  iVar4 = func_0x00013a46(0x139c,5);
  pcVar1 = (char *)*(undefined4 *)0x9f18;
  *(undefined2 *)(*(int *)0x9f18 + 2) =
       *(undefined2 *)
        (((int)(((int)*pcVar1 + (uint)('\r' < *pcVar1) + 5) * iVar4 + (int)*pcVar1) % 0x13) * 2 +
        0x4b82);
  return;
}
