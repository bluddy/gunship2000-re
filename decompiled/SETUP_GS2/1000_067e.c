/* SETUP.GS2 1000:067e undefined FUN_1000_067e(void) */
void __cdecl16far FUN_1000_067e(void)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  if (*(char *)0x594 == '\x02') {
    bVar1 = 0;
    iVar2 = FUN_1000_07fe(0x77a,0x76d,*(undefined2 *)0x65c,*(undefined2 *)0x65e,0x20,0xc,0xc);
    if (iVar2 == 0) {
      bVar1 = 0xc;
      FUN_111d_1c62(0x1d42,0xd50);
    }
  }
  else if (*(char *)0x594 == '\x03') {
    bVar1 = 0;
    iVar2 = FUN_1000_07fe(0x79b,0x790,0x78c,0x785,0x20,8,0xf);
    if (iVar2 == 0) {
      bVar1 = *(byte *)0x594;
      *(undefined2 *)0x1d44 = *(undefined2 *)0xd52;
      *(undefined2 *)0x1d48 = *(undefined2 *)0xd56;
      *(undefined2 *)0x1d4c = *(undefined2 *)0xd5a;
    }
  }
  else {
    bVar1 = 0;
    iVar2 = FUN_1000_07fe(0x7c8,0x7c1,0x7b8,0x7ae,0x20,4,0xf);
    if (iVar2 == 0) {
      bVar1 = *(byte *)0x594;
      *(undefined2 *)0x1d42 = *(undefined2 *)0xd50;
      *(undefined2 *)0x1d46 = *(undefined2 *)0xd54;
      *(undefined2 *)0x1d4a = *(undefined2 *)0xd58;
    }
  }
  *(byte *)0x594 = bVar1;
  *(uint *)0x1d62 = (uint)bVar1;
  return;
}
