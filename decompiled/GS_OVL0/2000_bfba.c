/* GS.GS2 2000:bfba undefined FUN_2000_bfba(void) */
void __cdecl16far FUN_2000_bfba(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  int iVar8;
  
  func_0x00000eb0();
  uVar7 = 0xbf;
  while( true ) {
    func_0x0001560a(uVar7);
    iVar8 = *(int *)0xb611;
    if (iVar8 == 0xd) {
      func_0x0000edda(0x14e6,0x22);
      iVar8 = 0;
      while( true ) {
        if (5 < iVar8) {
          return;
        }
        iVar4 = iVar8 * 0x122;
        if (*(char *)(iVar4 + -0x51d4) == *(char *)0xb4f8) break;
        iVar8 = iVar8 + 1;
      }
      puVar6 = (undefined2 *)(iVar4 + -0x5222);
      puVar5 = (undefined2 *)0xb4aa;
      for (iVar8 = 0x91; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar3 = *puVar2;
      }
      piVar1 = (int *)(iVar4 + -0x5156);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(iVar4 + -0x5154) = *(int *)(iVar4 + -0x5154) - (uint)(iVar8 == 0);
      puVar5 = (undefined2 *)0xacb6;
      puVar6 = (undefined2 *)(*(char *)0xe281 * 0x122 + -0x5222);
      for (iVar8 = 0x91; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar3 = *puVar2;
      }
      *(undefined1 *)0xb4aa = 0;
      func_0x0000d2f0(0xdea);
      func_0x0000c7c6(0xd02);
      return;
    }
    if (iVar8 == 0x1b) break;
    uVar7 = 0x14e6;
    if (iVar8 == 0x110) {
      func_0x0000ed5e(0x14e6);
      uVar7 = 0xdea;
    }
  }
  func_0x0000edda(0x14e6,0x22);
  return;
}
