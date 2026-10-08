/* GS2.GS2 137f:01bd undefined FUN_137f_01bd(void) */
void __cdecl16near FUN_137f_01bd(void)

{
  int in_AX;
  int in_CX;
  int in_DX;
  int in_BX;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xfa = 0xff;
  if (in_AX < *(int *)0xea) {
    *(byte *)0xfa = *(byte *)0xfa ^ 0x80;
  }
  if (in_CX < *(int *)0xea) {
    *(byte *)0xfa = *(byte *)0xfa ^ 0x40;
  }
  if (in_BX < *(int *)0xee) {
    *(byte *)0xfa = *(byte *)0xfa ^ 0x20;
  }
  if (in_DX < *(int *)0xee) {
    *(byte *)0xfa = *(byte *)0xfa ^ 0x10;
  }
  if (*(int *)0xec < in_AX) {
    *(byte *)0xfa = *(byte *)0xfa ^ 8;
  }
  if (*(int *)0xec < in_CX) {
    *(byte *)0xfa = *(byte *)0xfa ^ 4;
  }
  if (*(int *)0xf0 < in_BX) {
    *(byte *)0xfa = *(byte *)0xfa ^ 2;
  }
  if (*(int *)0xf0 < in_DX) {
    *(byte *)0xfa = *(byte *)0xfa ^ 1;
  }
  return;
}
