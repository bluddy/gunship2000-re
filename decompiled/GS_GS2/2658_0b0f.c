/* GS.GS2 2658:0b0f undefined FUN_2658_0b0f(void) */
void __cdecl16near FUN_2658_0b0f(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  if (*(int *)0x9c3e == 0 && *(int *)0x9c40 == 0) {
    return;
  }
  *(undefined1 *)0x9c48 = 0;
  *(undefined1 *)0x9c49 = 0;
  *(undefined2 *)0x9c44 = 0x9e57;
  puVar5 = (undefined2 *)*(undefined2 *)0xc86c;
  if ((undefined2 *)*(undefined2 *)0x64c8 <= puVar5) {
    (*(code *)*(undefined2 *)0xc528)(0x2658);
    puVar5 = (undefined2 *)*(undefined2 *)0xc86c;
  }
  uVar2 = *puVar5;
  *(int *)0xc86c = (int)(puVar5 + 1);
  if (0xb < (byte)uVar2) {
    uVar2 = CONCAT11((char)((uint)uVar2 >> 8),0xb);
  }
  *(undefined1 *)0x9c4b = (char)uVar2;
  *(undefined2 *)0x9c50 = uVar2;
  *(undefined1 *)0x9c52 = 8;
  *(undefined1 *)0x9c4a = 9;
  *(undefined2 *)0x9c4c = 0x1ff;
  *(undefined2 *)0x9c4e = 0x100;
  iVar4 = 0;
  iVar3 = 0x800;
  do {
    *(undefined2 *)(iVar4 + -0x3792) = 0xffff;
    iVar4 = iVar4 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  cVar1 = '\0';
  iVar4 = 0;
  iVar3 = 0x100;
  do {
    *(char *)(iVar4 + -0x3790) = cVar1;
    cVar1 = cVar1 + '\x01';
    iVar4 = iVar4 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
