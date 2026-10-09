/* GS.GS2 2000:af18 undefined FUN_2000_af18(void) */
void __cdecl16far FUN_2000_af18(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 **local_a;
  undefined1 *local_8;
  undefined2 **local_6;
  
  local_6 = (undefined2 **)0xaf23;
  func_0x00000eb0();
  local_6 = &local_6;
  local_8 = &stack0xfffc;
  local_a = &local_a;
  iVar1 = FUN_2000_d114();
  if (iVar1 != 0) {
    local_6 = (undefined2 **)0xbf;
    local_8 = (undefined1 *)0xaf45;
    func_0x0001e098();
    local_6 = (undefined2 **)0xaf4c;
    FUN_2000_c16a();
    *(undefined1 *)0xe28a = 0xff;
  }
  local_6 = (undefined2 **)0xaf56;
  func_0x000219cc();
  return;
}
