/* GS.GS2 2000:c322 undefined FUN_2000_c322(void) */
void __cdecl16far FUN_2000_c322(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  
  func_0x00000eb0();
  iVar1 = FUN_2000_c3e2();
  uVar3 = 0xd02;
  func_0x0000d6ac(0xbf,4);
  iVar2 = (int)(0xab / (long)iVar1);
  for (iVar5 = iVar2; iVar2 * iVar1 - iVar5 != 0 && iVar5 <= iVar2 * iVar1; iVar5 = iVar5 + iVar2) {
    uVar4 = 0xc363;
    func_0x000112a0(uVar3,1);
    func_0x00016658(0x112a,0x86e,0,0,0x140,0xf809,0x8b6,0,uVar4);
    func_0x00016658(0x1658,0x880,0,0xab,0x140,0x8b6,0x8b6,0);
    iVar5 = 0;
    iVar2 = 0x86e;
    iVar1 = 0xbf;
    uVar3 = 0x1658;
    func_0x00016658(0x1658,0x8b6,0,0,0x140,0xbf,0x86e,0);
  }
  func_0x00016658(uVar3,0x880,0,0,0x140,0xbf,0x86e,0,0);
  return;
}
