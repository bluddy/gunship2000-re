/* GS.GS2 2000:ceb0 undefined FUN_2000_ceb0(void) */
undefined2 __cdecl16far FUN_2000_ceb0(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar2 = func_0x0000edda(0xbf,0x43);
  if (iVar2 == 0) {
    func_0x0000edda(0xdea,*(undefined2 *)0x9f04);
  }
  if (*(char *)0x9be7 < 'x') {
    *(char *)0x9be7 = *(char *)0x9be7 + '\x01';
  }
  else if ((*(char *)0x9be5 < '\x05') &&
          (cVar1 = *(char *)0x9be6, *(char *)0x9be6 = *(char *)0x9be6 + '\x01', '\x14' < cVar1)) {
    *(undefined1 *)0x9be6 = 0;
    FUN_2000_cd28(*(char *)0x9be5 + 1,0,'\x01' < *(char *)0x9be5);
    if (*(char *)0x9bdb != '\0') {
      func_0x00015fca(0xdea,2,0xb2,0x3d);
    }
    *(char *)0x9be5 = *(char *)0x9be5 + '\x01';
    *(undefined1 *)0xb613 = 1;
  }
  return 0;
}
