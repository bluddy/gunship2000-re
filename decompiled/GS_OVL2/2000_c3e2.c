/* GS.GS2 2000:c3e2 undefined FUN_2000_c3e2(void) */
undefined2 __cdecl16far FUN_2000_c3e2(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 uStack_6;
  
  func_0x00000eb0();
  if (*(int *)0x98ea == 0) {
    uStack_6 = uRam0000046c + 8;
    uVar2 = uRam0000046e + (0xfff7 < uRam0000046c);
    uVar1 = 0xbf;
    while( true ) {
      if ((uVar2 < uRam0000046e) || ((uVar2 <= uRam0000046e && (uStack_6 <= uRam0000046c)))) break;
      uVar2 = 0x86e;
      uStack_6 = 0x86e;
      func_0x0000d5aa(uVar1);
      *(int *)0x98ea = *(int *)0x98ea + 1;
      uVar1 = 0xd02;
    }
  }
  if (*(int *)0x98ea == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined2 *)0x98ea;
  }
  return uVar1;
}
