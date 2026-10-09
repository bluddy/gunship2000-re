/* GS.GS2 3000:3aee undefined FUN_3000_3aee(void) */
int __cdecl16far FUN_3000_3aee(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar1 = param_1 + 1;
  while( true ) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
    iVar2 = (int)*(undefined4 *)0xb85c;
    if ((*(char *)(iVar1 * 8 + iVar2) != -1) || (*(char *)(iVar1 * 8 + iVar2 + 2) != '\x01')) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1 - param_1;
}
