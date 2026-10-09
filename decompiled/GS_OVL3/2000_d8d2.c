/* GS.GS2 2000:d8d2 undefined FUN_2000_d8d2(void) */
undefined2 __cdecl16far FUN_2000_d8d2(void)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar3 = func_0x0000edda(0xbf,0x43);
  if (iVar3 == 0) {
    func_0x0000edda(0xdea,*(undefined2 *)0x9f04);
  }
  bVar1 = *(byte *)0x9c2c;
  *(char *)0x9c2c = *(char *)0x9c2c + '\x01';
  if (2 < bVar1) {
    *(undefined1 *)0x9c2c = 0;
    FUN_2000_d85a();
    if (*(uint *)0x9bf2 < 0x51) {
      uVar2 = *(undefined2 *)0x9bf2;
      *(undefined2 *)0x9c2a = uVar2;
      *(int *)0x9bf2 = *(int *)0x9bf2 + 1;
      func_0x0000ba1a(0xdea,uVar2,0,0);
      if (*(int *)0x9bf2 == 0x51) {
        if (*(char *)0x9bf0 == '\0') {
          FUN_2000_d96a();
        }
        *(int *)0x9bf2 = *(int *)0x9bf2 + -3;
      }
      *(undefined1 *)0xb613 = 1;
    }
  }
  return 0;
}
