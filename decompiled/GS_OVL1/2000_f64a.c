/* GS.GS2 2000:f64a undefined FUN_2000_f64a(void) */
void __cdecl16far FUN_2000_f64a(byte param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  func_0x00016a62(0xbf,0x880,param_2,param_3,0x5a,7,param_4);
  func_0x0000c9f6(0x1658,param_2 + 1,param_3 + 1);
  iVar1 = (uint)param_1 * 8;
  func_0x0000ca66(0xc87,0x296b,*(undefined2 *)(iVar1 + -0x3c72),*(undefined2 *)(iVar1 + -0x3c70));
  iVar2 = *(int *)(iVar1 + -0x3c6c) * 0x27;
  uVar3 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
  iVar1 = (int)*(undefined4 *)0xb860;
  if ((*(int *)(iVar1 + iVar2 + 0x23) == 0) && (*(int *)(iVar1 + iVar2 + 0x25) == 0x1000)) {
    func_0x0000ca66(0xc87,0x296e,*(undefined2 *)0x9bc,*(undefined2 *)0x9be);
  }
  return;
}
