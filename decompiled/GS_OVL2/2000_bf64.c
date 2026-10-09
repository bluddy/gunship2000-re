/* GS.GS2 2000:bf64 undefined FUN_2000_bf64(void) */
int __cdecl16far FUN_2000_bf64(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar1 = func_0x00013a46(0xbf,0x14);
  *(undefined1 *)0x98b0 = *(undefined1 *)(iVar1 + 0x3bf3);
  iVar1 = func_0x00013a46(0x139c,0x14,0x3bf3);
  *(undefined1 *)0x98b1 = *(undefined1 *)(iVar1 + 0x3bf3);
  iVar1 = func_0x00013a46(0x139c,0x14);
  *(undefined1 *)0x98b2 = *(undefined1 *)(iVar1 + 0x3bf3);
  uVar2 = func_0x00013a46(0x139c,1000);
  func_0x000032d0(0x139c,0x98b3,0x3c08,uVar2);
  if ((*(byte *)0xa249 & 2) != 0) {
    iVar1 = func_0x00013a1c(0xbf,0x15,0x1b);
    *(undefined1 *)0x98af = (char)(iVar1 % 0x18);
    return iVar1 / 0x18;
  }
  iVar1 = func_0x00013a1c(0xbf,9,0xf);
  *(undefined1 *)0x98af = (char)iVar1;
  return iVar1;
}
