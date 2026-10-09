/* GS.GS2 2000:dc16 undefined FUN_2000_dc16(void) */
void __cdecl16far FUN_2000_dc16(void)

{
  int iVar1;
  undefined2 unaff_SI;
  undefined2 unaff_DS;
  int iStackY_e;
  char cVar2;
  undefined1 uVar4;
  undefined2 uVar3;
  
  uVar4 = (undefined1)((uint)unaff_SI >> 8);
  func_0x00000eb0();
  iVar1 = *(int *)0xb60f;
  FUN_2000_f058();
  if ((0 < iVar1) && (iVar1 = *(int *)(iVar1 * 0x11 + -0x6711), iVar1 != 0)) {
    if (iVar1 < 1) {
      iVar1 = func_0x00015c98(0xbf,(int)*(char *)(-0x659b - iVar1));
      cVar2 = (char)((uint)*(undefined2 *)(iVar1 + 2) >> 8);
      uVar3 = CONCAT11(uVar4,*(undefined1 *)(iVar1 + 4));
    }
    else {
      iVar1 = func_0x00015c98(0xbf,iVar1 + -1);
      cVar2 = (char)((uint)*(undefined2 *)(iVar1 + 2) >> 8);
      uVar3 = CONCAT11(uVar4,*(undefined1 *)(iVar1 + 4));
    }
    iStackY_e = (int)cVar2;
    iVar1 = iStackY_e * 8;
    if (*(int *)(iVar1 + -0x6550) != 0) {
      iStackY_e = 0x1581;
      FUN_2000_f0d2(0,*(int *)(iVar1 + -0x6550) + -4,*(int *)(iVar1 + -0x654e) + -4,uVar3);
    }
    iStackY_e = iStackY_e * 8;
    if (*(int *)(iStackY_e + -0x654c) != 0) {
      FUN_2000_f0d2(1,*(int *)(iStackY_e + -0x654c) + -4,*(int *)(iStackY_e + -0x654a) + -4,uVar3);
    }
  }
  FUN_2000_dbd6();
  return;
}
