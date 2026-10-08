/* GS.GS2 2658:0b58 undefined FUN_2658_0b58(void) */
void __cdecl16near FUN_2658_0b58(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x9c4a = 9;
  *(undefined2 *)0x9c4c = 0x1ff;
  *(undefined2 *)0x9c4e = 0x100;
  iVar3 = 0;
  iVar2 = 0x800;
  do {
    *(undefined2 *)(iVar3 + -0x3792) = 0xffff;
    iVar3 = iVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cVar1 = '\0';
  iVar3 = 0;
  iVar2 = 0x100;
  do {
    *(char *)(iVar3 + -0x3790) = cVar1;
    cVar1 = cVar1 + '\x01';
    iVar3 = iVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
