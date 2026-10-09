/* GS2.GS2 1000:a9e6 undefined FUN_1000_a9e6(void) */
undefined2 __cdecl16far FUN_1000_a9e6(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 local_16 [16];
  undefined1 local_6 [2];
  undefined2 local_4;
  
  func_0x0000377e();
  func_0x000037b4(0x2a2,local_16);
  iVar2 = func_0x00003630(0x2a2,local_16,0,&local_4);
  if (iVar2 != 0) {
    return 0xffff;
  }
  iVar2 = func_0x000035e0(0x2a2,0x6c1,param_1);
  if (iVar2 != 0) {
    *param_1 = 0;
    return 0xfffd;
  }
  uVar1 = *param_1;
  *(undefined2 *)0x45f4 = 0;
  *(undefined2 *)0x45f6 = uVar1;
  func_0x00003648(0x2a2,local_4,0,uVar1,0x6c00,local_6);
  func_0x000035f8(0x2a2,local_4);
  return 0;
}
