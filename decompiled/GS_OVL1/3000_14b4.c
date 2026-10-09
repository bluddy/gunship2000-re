/* GS.GS2 3000:14b4 undefined FUN_3000_14b4(void) */
void __cdecl16far FUN_3000_14b4(void)

{
  int iVar1;
  int iVar2;
  int local_c;
  undefined2 *local_a;
  int local_8;
  undefined2 ***local_6;
  
  local_6 = (undefined2 ***)0x14bf;
  func_0x00000eb0();
  local_6 = (undefined2 ***)&local_a;
  local_8 = 0xbf;
  iVar2 = 0xef4;
  local_a = (undefined2 *)0x14cc;
  func_0x0000ef98();
  do {
    local_6 = &local_6;
    local_a = (undefined2 *)0x14dc;
    local_8 = iVar2;
    func_0x0000ef98();
    iVar2 = 0xf32;
    local_6 = (undefined2 ***)0x14e7;
    iVar1 = func_0x0000f3c6();
  } while ((undefined2 ***)((iVar1 - local_8) + 0xef4 + local_c + (int)local_a) == local_6);
  return;
}
