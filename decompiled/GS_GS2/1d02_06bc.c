/* GS.GS2 1d02:06bc undefined FUN_1d02_06bc(void) */
void __cdecl16far FUN_1d02_06bc(int param_1,undefined2 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iStack_18;
  int iStack_16;
  undefined1 local_14 [8];
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x1d02;
  iStack_6 = 0xd6e7;
  FUN_10bf_02c0();
  iStack_18 = -1;
  iStack_16 = 0;
  do {
    if (3 < iStack_16) {
LAB_1d02_070e:
      if (-1 < iStack_18) {
        puStack_4 = (undefined1 *)param_1;
        iStack_6 = iStack_18;
        iStack_8 = 0x10bf;
        uStack_a = 0xd73e;
        FUN_1d02_07c4();
        *(undefined1 *)(param_1 * 10 + -0x43f8) = 4;
        return;
      }
      cVar2 = '\x05';
      iStack_18 = -1;
      for (iStack_16 = 0; iStack_16 < 4; iStack_16 = iStack_16 + 1) {
        cVar1 = *(char *)(iStack_16 * 10 + -0x43f8);
        if (cVar1 <= cVar2) {
          iStack_18 = iStack_16;
          cVar2 = cVar1;
        }
      }
      if (-1 < iStack_18) {
        puStack_4 = (undefined1 *)param_1;
        iStack_6 = iStack_18;
        iStack_8 = 0x10bf;
        uStack_a = 0xd7a0;
        FUN_1d02_07c4();
      }
      *(undefined1 *)(param_1 * 10 + -0x43f8) = 4;
      puStack_4 = (undefined1 *)0x8;
      iStack_6 = param_2;
      iStack_8 = param_1 * 10 + -0x43f7;
      uStack_a = 0x10bf;
      uStack_c = 0xd7c3;
      FUN_10bf_2250();
      puStack_4 = local_14;
      iStack_6 = param_2;
      iStack_8 = 0x10bf;
      uStack_a = 0xd7d1;
      FUN_1d02_08a6();
      puStack_4 = local_14;
      iStack_6 = param_1 + 1;
      iStack_8 = 0x10bf;
      uStack_a = 0xd7e2;
      FUN_2741_0256();
      return;
    }
    if (*(char *)(iStack_16 * 10 + -0x43f8) != '\0') {
      puStack_4 = (undefined1 *)(iStack_16 * 10 + -0x43f7);
      iStack_6 = param_2;
      iStack_8 = 0x10bf;
      uStack_a = 0xd71d;
      iVar3 = FUN_10bf_2aae();
      if (iVar3 == 0) {
        iStack_18 = iStack_16;
        goto LAB_1d02_070e;
      }
    }
    iStack_16 = iStack_16 + 1;
  } while( true );
}
