/* GS.GS2 2000:bc50 undefined FUN_2000_bc50(void) */
void __cdecl16far FUN_2000_bc50(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  func_0x00000eb0();
  func_0x00016a62(0xbf,0x8a4,0,0,0xe3,0xbf,0xf);
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    iVar2 = iVar2 * 0x4f + 0x21;
    func_0x00016658(0x1658,0x892,0,0x9a,0xe3,0x2e,0x8a4,0);
  }
  uVar1 = 0x1658;
  for (iVar2 = 5; iVar2 < 8; iVar2 = iVar2 + 1) {
    func_0x000007b0(uVar1);
    uVar1 = 0x6f;
  }
  if (param_1 == 0) {
    FUN_2000_aa16(0);
  }
  else if (param_1 == 1) {
    FUN_2000_aa16(1);
  }
  else if (param_1 == 2) {
    FUN_2000_bb34();
  }
  else if (param_1 == 3) {
    FUN_2000_b3b0();
  }
  *(undefined2 *)0x98e2 = 0;
  *(undefined2 *)0x98de = 0;
  return;
}
