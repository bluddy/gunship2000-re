/* GS.GS2 2000:b6c6 undefined FUN_2000_b6c6(void) */
void __cdecl16far FUN_2000_b6c6(int param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  bVar1 = *(byte *)0x9882;
  *(char *)0x9882 = *(char *)0x9882 + '\x01';
  if ((bVar1 & 1) != 0) {
    func_0x00016658(0xbf,0x8b6,0,0xb6,*(undefined2 *)(param_1 + 5),*(undefined2 *)(param_1 + 7),
                    0x880,*(undefined2 *)(param_1 + 0xb),*(undefined2 *)(param_1 + 0xd));
    return;
  }
  func_0x00016658(0xbf,0x8b6,0,0xbf,*(undefined2 *)(param_1 + 5),*(undefined2 *)(param_1 + 7),0x880,
                  *(undefined2 *)(param_1 + 0xb),*(undefined2 *)(param_1 + 0xd));
  return;
}
