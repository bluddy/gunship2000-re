/* GS.GS2 2000:c7c0 undefined FUN_2000_c7c0(void) */
void __cdecl16far FUN_2000_c7c0(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar1 = *(int *)0xb60f;
  if ((iVar1 != *(char *)0x98e5) && (iVar1 == 3)) {
    iVar1 = func_0x00013166(0xbf);
    if (iVar1 == 0) {
      iVar1 = 0x1163;
      iVar2 = FUN_2000_c816();
      if (iVar2 != 0) {
        iVar1 = 0xc;
        func_0x000156ea(0x1163,0x3c8a,3);
      }
    }
    else {
      iVar1 = 0xc;
      func_0x000156ea(0x1163,0x3c52,3);
    }
  }
  *(undefined1 *)0x98e5 = (char)iVar1;
  return;
}
