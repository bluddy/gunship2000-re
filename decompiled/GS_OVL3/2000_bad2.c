/* GS.GS2 2000:bad2 undefined FUN_2000_bad2(void) */
void __cdecl16far FUN_2000_bad2(undefined2 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  int iStack_24;
  int iStack_22;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  undefined2 uStack_c;
  int iStack_a;
  
  func_0x00000eb0();
  iStack_a = 0xbf;
  uStack_c = 0xbaea;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = 0x5139;
  uStack_c = 0x4f;
  iVar4 = iStack_24 + 8;
  iStack_12 = 0x6f;
  iStack_14 = 0xbb16;
  iStack_10 = iVar4;
  iStack_e = iStack_22 + 1;
  func_0x0000dcaa();
  if (param_2 != 0) {
    uStack_c = 0x86e;
    iStack_e = 0xb;
    iStack_10 = 0x4f;
    uStack_16 = 0x880;
    uStack_18 = 0xd02;
    uStack_1a = 0xbb32;
    iStack_14 = iVar4;
    iStack_12 = iStack_22 + 1;
    iStack_a = iVar4;
    func_0x00016658();
  }
  return;
}
