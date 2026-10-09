/* GS2.GS2 1000:9d4e undefined FUN_1000_9d4e(void) */
undefined2 __cdecl16far FUN_1000_9d4e(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_16 [16];
  undefined1 local_6 [2];
  undefined2 local_4;
  
  func_0x0000377e();
  iVar1 = func_0x00003630(0x2a2,local_16,0,&local_4);
  if (iVar1 != 0) {
    return 0xffff;
  }
  func_0x00003648(0x2a2,local_4,0xb4a,0x272d,2,local_6);
  if (*(int *)0xb4a != -0x23) {
    func_0x000035f8(0x2a2,local_4);
    return 0xfffc;
  }
  func_0x00003648(0x2a2,local_4,0x593d);
  func_0x00003648(0x2a2,local_4,0x310a);
  func_0x00003648(0x2a2,local_4,0,0x2e9a,*(int *)0x310a << 3,local_6);
  func_0x000035f8(0x2a2,local_4);
  return 0;
}
