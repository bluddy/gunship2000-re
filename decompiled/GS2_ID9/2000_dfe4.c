/* GS2.GS2 2000:dfe4 undefined FUN_2000_dfe4(void) */
void __cdecl16far FUN_2000_dfe4(void)

{
  int iVar1;
  code *pcVar2;
  uint in_stack_0000000a;
  
  pcVar2 = (code *)0xc2e;
  if ((in_stack_0000000a & 0x100) == 0) {
    pcVar2 = (code *)0xc0c;
  }
  iVar1 = -(in_stack_0000000a & 7);
  if (iVar1 + 3 < 0) {
    (*pcVar2)();
  }
  if (iVar1 + 2 < 0) {
    (*pcVar2)();
  }
  if (iVar1 + 1 < 0) {
    (*pcVar2)();
  }
  (*pcVar2)();
  return;
}
