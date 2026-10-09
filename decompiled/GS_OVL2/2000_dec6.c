/* GS.GS2 2000:dec6 undefined FUN_2000_dec6(void) */
void __cdecl16far FUN_2000_dec6(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_58 [66];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 *puStack_12;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0xbf;
  func_0x00000eb0();
  FUN_2000_f058();
  FUN_2000_d678();
  FUN_2000_d7a4();
  FUN_2000_dbb2();
  iVar3 = 0;
  bVar4 = false;
  do {
    if (2 < iVar3) {
LAB_2000_df10:
      if (bVar4) {
        FUN_2000_eda8();
        for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
          if (0 < *(int *)(iVar3 * 2 + -0x65a0)) {
            uVar2 = 0x1634;
            iVar1 = func_0x00016544();
            if (-1 < iVar1) {
              puStack_12 = (undefined1 *)0xdf85;
              func_0x00003d8c();
              puStack_12 = (undefined1 *)0xdf9d;
              func_0x000032d0();
              uVar2 = 0xbf;
              puStack_12 = (undefined1 *)0xdfb2;
              func_0x00003dc2();
              puStack_12 = local_58;
              uStack_14 = 0xbf;
              uStack_16 = 0xdfcc;
              FUN_2000_ec42();
            }
          }
        }
        FUN_2000_ee40();
        puStack_12 = (undefined1 *)0x3f55;
        uStack_16 = 0xdfed;
        uStack_14 = uVar2;
        FUN_2000_ec42();
        FUN_2000_ee40();
        FUN_2000_ef58();
        *(undefined2 *)0x9ba8 = 0x716;
        *(undefined2 *)0x9baa = 0x1d50;
        return;
      }
      *(undefined2 *)0x9b9e = 1;
      return;
    }
    if (0 < *(int *)(iVar3 * 2 + -0x65a0)) {
      bVar4 = true;
      goto LAB_2000_df10;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}
