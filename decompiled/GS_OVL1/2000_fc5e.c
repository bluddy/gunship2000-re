/* GS.GS2 2000:fc5e undefined FUN_2000_fc5e(void) */
undefined2 __cdecl16far FUN_2000_fc5e(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  
  func_0x00000eb0();
  *(undefined1 *)0xe291 = 0;
  *(bool *)0x2a45 = *(int *)0xc4d8 == 9999;
  func_0x000214fc(0xbf,0x2a3d);
  *(bool *)0x2a4e = *(int *)0xc4e6 == 9999;
  func_0x000214fc(0x20f4,0x2a46);
  *(bool *)0x2a57 = *(int *)0xc4f6 == 9999;
  func_0x000214fc(0x20f4,0x2a4f);
  *(bool *)0x2a60 = *(int *)0xc50a == 9999;
  uVar2 = 0x58;
  func_0x000214fc(0x20f4);
  *(undefined1 *)0xe291 = uVar2;
  if ((10 < *(int *)0xc01c) && (*(int *)0xc01c < 0xf)) {
    iVar1 = *(int *)0xc01c;
    *(undefined1 *)(iVar1 * 9 + 0x29e2) = 0;
    func_0x000214fc(0x20f4,iVar1 * 9 + 0x29da);
  }
  iVar1 = *(int *)0xc01c;
  if (iVar1 == 0xb) {
    return *(undefined2 *)0xc4d8;
  }
  if (iVar1 == 0xc) {
    return *(undefined2 *)0xc4e6;
  }
  if (iVar1 != 0xd) {
    if (iVar1 != 0xe) {
      return 0;
    }
    return *(undefined2 *)0xc50a;
  }
  return *(undefined2 *)0xc4f6;
}
