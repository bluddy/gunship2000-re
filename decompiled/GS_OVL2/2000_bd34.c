/* GS.GS2 2000:bd34 undefined FUN_2000_bd34(void) */
void __cdecl16far FUN_2000_bd34(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  bool bVar11;
  
  func_0x00000eb0();
  puVar3 = (undefined2 *)func_0x00000b20(0xbf,3);
  puVar5 = (undefined2 *)0x98b8;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  func_0x000135e2(0x6f);
  iVar4 = 0x1351;
  iVar6 = 0x17d1;
  func_0x00018c74(0x1351,3);
  bVar11 = false;
  while (-1 < iVar4) {
    uVar7 = 0x15f0;
    uVar9 = 0xbdae;
    func_0x000160fe(iVar6,bVar11);
    bVar11 = 0x3c < iVar6;
    if (iVar6 == 0) {
      uVar9 = 0;
    }
    if (iVar6 != 0) {
      uVar10 = 0;
      func_0x00016658(0x15f0,0x880,0x880,0);
      uVar9 = 0x880;
      uVar7 = 0x1658;
      func_0x00016658(0x1658,0x8a4,uVar10,0,0xe3 - iVar6,0x880,0x880,uVar10,0);
    }
    func_0x00016658(uVar7,0x8a4,0,0x880,0xe3,uVar9,0x880,0);
    func_0x00016052(0x1658,bVar11,199,0x86);
    func_0x000112a0(0x15f0,1);
    iVar4 = 0x880;
    iVar6 = 0xd02;
    iVar8 = -0x419c;
    func_0x0000d5aa(0x112a,0x880,0x86e);
    if (iVar4 == 0) break;
    if (iVar4 < iVar8) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 - iVar8;
    }
  }
  func_0x0001367c(iVar6);
  return;
}
