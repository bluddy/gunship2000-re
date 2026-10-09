/* GS.GS2 3000:19dc undefined FUN_3000_19dc(void) */
void __cdecl16far FUN_3000_19dc(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  *(byte *)0xe289 = *(byte *)0xe289 & 3;
  cVar1 = *(char *)0xe289;
  if (cVar1 == '\0') {
    *(undefined2 *)0xc364 = 0;
    *(undefined2 *)0xc366 = 0;
    *(undefined2 *)0xc378 = 0x140;
    *(undefined2 *)0xc37a = 200;
    *(undefined2 *)0xc354 = 5;
    *(undefined2 *)0xc356 = 0x82;
  }
  else if (cVar1 == '\x01') {
    *(undefined2 *)0xc364 = 0xaa;
    *(undefined2 *)0xc366 = 0x41;
    *(undefined2 *)0xc378 = 0x93;
    *(undefined2 *)0xc37a = 0x7b;
    *(undefined2 *)0xc354 = 0xe7;
    *(undefined2 *)0xc356 = 0;
  }
  else if (cVar1 == '\x02') {
    *(undefined2 *)0xc364 = 0xaa;
    *(undefined2 *)0xc366 = 3;
    *(undefined2 *)0xc378 = 0x93;
    *(undefined2 *)0xc37a = 0xc2;
    *(undefined2 *)0xc354 = 0xe7;
    *(undefined2 *)0xc356 = 0;
  }
  else if (cVar1 == '\x03') {
    *(undefined2 *)0xc364 = 3;
    *(undefined2 *)0xc366 = 3;
    *(undefined2 *)0xc378 = 0xa0;
    *(undefined2 *)0xc37a = 0x80;
    *(undefined2 *)0xc354 = 0xab;
    *(undefined2 *)0xc356 = 0x41;
  }
  func_0x0001a91e(0xbf,*(undefined2 *)0xc364,*(undefined2 *)0xc366,*(int *)0xc364 + *(int *)0xc378,
                  *(int *)0xc37a + *(int *)0xc366);
  FUN_3000_19cc();
  return;
}
