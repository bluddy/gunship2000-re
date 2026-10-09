/* GS.GS2 2000:ca06 undefined FUN_2000_ca06(void) */
void __cdecl16far FUN_2000_ca06(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_6;
  
  local_6 = -0x35ef;
  func_0x00000eb0();
  local_6 = 0x3cf6;
  iVar1 = func_0x000012cc(0xbf);
  if (iVar1 == 0) {
    return;
  }
  local_6 = 1;
  func_0x0000131a(0xbf,0xbb9c,0x46);
  if (*(char *)0xbb9d != '\0') {
    local_6 = 0;
    func_0x000030da(0xbf,0,1);
    local_6 = 1;
    func_0x00001418(0xbf,&local_6,1);
  }
  local_6 = 0xbf;
  func_0x000011e6();
  for (local_6 = 0; local_6 < 4; local_6 = local_6 + 1) {
    *(undefined1 *)(local_6 + -0x4452) =
         (char)((ulong)((uint)*(byte *)(local_6 + -0x4452) * 100) / 0xff);
    *(undefined1 *)(local_6 + -0x444e) =
         (char)((ulong)((uint)*(byte *)(local_6 + -0x444e) * 100) / 0xff);
    *(undefined1 *)(local_6 + -0x444a) =
         (char)((ulong)((uint)*(byte *)(local_6 + -0x444a) * 100) / 0xff);
  }
  return;
}
