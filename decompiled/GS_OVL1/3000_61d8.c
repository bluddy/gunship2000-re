/* GS.GS2 3000:61d8 undefined FUN_3000_61d8(void) */
void __cdecl16far FUN_3000_61d8(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  *(undefined2 *)0x98ac = uVar2;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}
