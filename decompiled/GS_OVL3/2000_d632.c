/* GS.GS2 2000:d632 undefined FUN_2000_d632(void) */
bool __cdecl16far FUN_2000_d632(undefined2 param_1)

{
  int iVar1;
  undefined1 local_4a [36];
  undefined1 local_26 [28];
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0xd63d;
  func_0x00000eb0();
  puStack_6 = local_26;
  uStack_8 = 0xbf;
  uStack_a = 0xd649;
  func_0x00002dc6();
  puStack_6 = local_4a;
  uStack_8 = 0xbf;
  uStack_a = 0xd658;
  func_0x00002dc6();
  puStack_6 = (undefined1 *)0xbf;
  uStack_8 = 0xd664;
  func_0x00003738();
  puStack_6 = (undefined1 *)0xbf;
  uStack_8 = 0xd670;
  func_0x00003738();
  puStack_6 = (undefined1 *)param_1;
  uStack_8 = 0xbf;
  uStack_a = 0xd67e;
  iVar1 = func_0x00003756();
  return iVar1 != 0;
}
