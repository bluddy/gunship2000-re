/* GS.GS2 2000:f938 undefined FUN_2000_f938(void) */
void __cdecl16far FUN_2000_f938(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  uStack_a = 0xbf;
  uVar6 = 0x6f;
  uStack_c = 0xf94c;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  if (param_2 != 0) {
    uVar6 = 0x1351;
    uStack_a = 0xf966;
    func_0x000135e2();
  }
  uStack_a = uStack_1e;
  uStack_c = uStack_20;
  uStack_e = uStack_22;
  uStack_10 = uStack_24;
  uStack_12 = 0x880;
  uStack_16 = 0xf97c;
  uStack_14 = uVar6;
  func_0x0000c8c0();
  if (*(int *)0x9bb2 != 0) {
    *(undefined2 *)0x9bba = 1;
  }
  if ((-1 < param_1) && (param_1 < 9)) {
    uStack_a = 0xc87;
    uStack_c = 0xf9a5;
    func_0x0000c980();
    uStack_a = 0xc87;
    uStack_c = 0xf9af;
    func_0x0000c928();
    uStack_a = 0xc87;
    uStack_c = 0xf9c0;
    func_0x0000c8aa();
    uStack_a = 0xf9c8;
    func_0x0000cd22();
    uStack_a = 0xc87;
    uStack_c = 0xf9cf;
    func_0x0000c928();
    if (param_1 != 7) {
      if ((*(int *)0x9bba == 0) || (param_1 == 8)) {
        uStack_a = 0xc87;
        uStack_c = 0xf9f7;
        func_0x0000ca50();
        uStack_a = 63999;
        func_0x0000cd22();
        uStack_a = 0xc87;
        uStack_c = 0xfa06;
        func_0x0000c928();
        uStack_a = 0xc87;
        uStack_c = 0xfa11;
        func_0x00000672();
        uStack_a = 0;
        uStack_c = 0xfa29;
        func_0x0000ca50();
      }
      else {
        uStack_a = 0xc87;
        uStack_c = 0xfa35;
        func_0x0000c928();
        uStack_a = 0xc87;
        uStack_c = 0xfa40;
        func_0x00000672();
        uStack_a = 0;
        uStack_c = 0xfa58;
        func_0x0000ca50();
      }
    }
  }
  if (*(int *)0x9bba != 0) {
    *(undefined2 *)0x9bb4 = 0;
    *(undefined2 *)0x9bb2 = 0;
  }
  if (param_2 != 0) {
    uStack_a = 0xfa75;
    func_0x000135fc();
    uStack_a = uStack_24;
    uStack_c = 0x86e;
    uStack_e = uStack_1e;
    uStack_10 = uStack_20;
    uStack_12 = uStack_22;
    uStack_14 = uStack_24;
    uStack_16 = 0x880;
    uStack_18 = 0x1351;
    uStack_1a = 0xfa92;
    func_0x00016658();
  }
  return;
}
