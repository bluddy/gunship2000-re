/* GS.GS2 1b1d:012c undefined FUN_1b1d_012c(void) */
void __cdecl16far FUN_1b1d_012c(void)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  int iStack_16;
  undefined1 local_12 [6];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  int iStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x1b1d;
  iStack_6 = 0xb307;
  FUN_10bf_02c0();
  *(undefined1 *)0xad0d = *(undefined1 *)0xad1a;
  for (iStack_16 = 0; iStack_16 < 10; iStack_16 = iStack_16 + 1) {
    puStack_4 = (undefined1 *)iStack_16;
    iStack_6 = (int)*(char *)0xad04;
    puStack_8 = local_12;
    uStack_a = 0x10bf;
    uStack_c = 0xb32d;
    FUN_1b1d_0314();
    puStack_4 = local_12;
    iStack_6 = 0x10bf;
    puStack_8 = (undefined1 *)0xb339;
    FUN_10bf_2d88();
  }
  puStack_4 = (undefined1 *)0x8;
  iStack_6 = 5;
  puStack_8 = (undefined1 *)0x10bf;
  uStack_a = 0xb347;
  uVar1 = FUN_239c_005c();
  *(undefined1 *)0xad06 = uVar1;
  *(undefined1 *)0xad08 = 0;
  *(undefined1 *)0xad07 = 0;
  *(undefined1 *)0xad05 = 1;
  *(undefined2 *)0xad5b = 0;
  return;
}
