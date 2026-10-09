/* GS.GS2 2000:be98 undefined FUN_2000_be98(void) */
void __cdecl16far FUN_2000_be98(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  func_0x00000eb0();
  uVar2 = 0xd02;
  func_0x0000d6ac(0xbf,4);
  iVar1 = (int)(0xbf / (long)(int)*(char *)0x98e0);
  for (iVar3 = iVar1; *(char *)0x98e0 * iVar1 - iVar3 != 0 && iVar3 <= *(char *)0x98e0 * iVar1;
      iVar3 = iVar3 + iVar1) {
    func_0x000112a0(uVar2,1);
    func_0x00016658(0x112a,0x86e,0,0,0x140,0xbf,0x8b6,0);
    func_0x00016658(0x1658,0x880,0,iVar3 + -0xab,0x140,0xbf,0x8b6,0);
    iVar1 = 0;
    uVar2 = 0x1658;
    func_0x00016658(0x1658,0x8b6,0,0,0x140,0xbf,0x86e,0);
  }
  func_0x00016658(uVar2,0x880,0,0,0x140,0xbf,0x86e,0,0);
  return;
}
