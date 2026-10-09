/* GS.GS2 3000:5e14 undefined FUN_3000_5e14(void) */
int __cdecl16far FUN_3000_5e14(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  *(undefined1 *)0xe28f = 0;
  iVar2 = (int)*(char *)0xad1a;
  *(int *)0xb8ce = iVar2;
  *(undefined2 *)0xb8d2 = 0;
  *(undefined2 *)0xb8d0 = 0;
  if (iVar2 < 2) {
    uVar3 = 4;
  }
  else {
    uVar3 = 3;
  }
  iVar2 = FUN_3000_5c06(uVar3,iVar2);
  if (iVar2 == 0) {
    *(undefined1 *)0xe28f = 1;
    return iVar2;
  }
  *(byte *)0xa249 = *(byte *)0xa249 | 2;
  *(byte *)0xa249 = *(byte *)0xa249 & 0xfe;
  cVar1 = *(char *)(*(int *)0xb8ce * 0x36 + ((*(uint *)0xa248 & 0x200) >> 9) + -0x49d3);
  *(int *)0xc026 = (int)cVar1;
  *(char *)0xa26a = cVar1;
  *(undefined1 *)0xe28f = 1;
  return -1;
}
