/* GS2.GS2 12a2:0890 undefined FUN_12a2_0890(void) */
void __cdecl16near FUN_12a2_0890(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar3;
  
  bVar3 = false;
  do {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar3) {
      return;
    }
    bVar3 = uVar2 < *(uint *)0x31c2;
  } while (uVar2 <= *(uint *)0x31c2);
  if (*(uint *)0x31c0 < uVar2) {
    *(uint *)0x31c0 = uVar2;
  }
  *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
  FUN_12a2_06ac();
  FUN_12a2_06e0();
  return;
}
