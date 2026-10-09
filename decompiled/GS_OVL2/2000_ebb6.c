/* GS.GS2 2000:ebb6 undefined FUN_2000_ebb6(void) */
void __cdecl16far FUN_2000_ebb6(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  if ((((100 < *(int *)0x98fa) || (*(int *)0x9a71 == 0)) ||
      ((*(int *)0x98fc == 0 && (iVar1 = FUN_2000_eb6c(), iVar1 != 0)))) && (*(int *)0x98f8 < 2)) {
    func_0x0000edda(0xbf,0x21);
    return;
  }
  func_0x0000dcaa(0xbf,*(int *)0x9bae + 7,0xb2,0x4e,
                  *(undefined2 *)((uint)(*(int *)0x98f8 != 1) * 2 + 0x3dce),*(int *)0x9bae + 7);
  func_0x00016658(0xd02,0x880,0xb2,0xb2,0x4e,10,0x86e,0xb2);
  *(undefined2 *)0x9b9e = 1;
  return;
}
