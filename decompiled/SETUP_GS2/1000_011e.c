/* SETUP.GS2 1000:011e undefined FUN_1000_011e(void) */
void __cdecl16far FUN_1000_011e(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 local_58 [66];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 *puStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x1000;
  uStack_6 = 0x129;
  FUN_111d_02c6();
  puStack_4 = (undefined1 *)0x111d;
  uVar3 = 0x1113;
  uStack_6 = 0x12e;
  iVar1 = FUN_1113_0068();
  if (iVar1 != 0) {
    puStack_4 = (undefined1 *)0x26;
    uStack_6 = 0;
    uStack_8 = 0x1d32;
    uStack_a = 0x1113;
    uVar3 = 0x111d;
    uStack_c = 0x142;
    FUN_111d_1c8e();
    *(byte *)0x1d34 = *(byte *)0x1d34 | 0xf;
    *(byte *)0x1d34 = *(byte *)0x1d34 & 0xdf | 0x40;
    *(byte *)0x1d34 = *(byte *)0x1d34 | 0x90;
    *(undefined1 *)0x1d33 = 0x80;
    *(undefined1 *)0x1d32 = 0;
  }
  *(undefined2 *)0x1d62 = 0;
  puStack_4 = (undefined1 *)0x0;
  do {
    if (4 < (int)puStack_4) {
LAB_1000_0190:
      if (*(char *)0x1d35 == '\0') {
        *(undefined2 *)0x1d68 = 0;
      }
      else if (*(char *)0x1d35 < ' ') {
        *(undefined2 *)0x1d68 = 1;
      }
      else {
        if (*(int *)0x1d62 == 2) {
          *(undefined2 *)0x1d62 = 4;
        }
        *(undefined2 *)0x1d68 = 2;
      }
      *(uint *)0x1f6e = (*(byte *)0x1d34 & 0xff08) >> 3;
      *(int *)0x1d60 = -(((*(byte *)0x1d34 & 0xff60) >> 5) - 2);
      *(uint *)0x1f72 = (*(byte *)0x1d34 & 0xff04) >> 2;
      *(uint *)0x1f7e = (*(byte *)0x1d34 & 0xff02) >> 1;
      *(uint *)0x1f76 = (uint)(*(byte *)0x1d34 >> 7);
      *(uint *)0x1f82 = *(byte *)0x1d34 & 1;
      *(uint *)0x1f84 = (uint)((*(byte *)0x1d34 & 0x10) >> 4);
      uVar2 = (int)(*(int *)0x1d50 - 0x210U) >> 0xf;
      *(int *)0x1f80 = ((int)((*(int *)0x1d50 - 0x210U ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2;
      *(int *)0x1f74 = *(int *)0x1d54 + -2;
      *(int *)0x1f70 = *(int *)0x1d56 + -1;
      if (*(char *)0x1d64 != '\0') {
        uStack_6 = 0x24b;
        puStack_4 = (undefined1 *)uVar3;
        FUN_1000_00b0();
      }
      uStack_6 = 0x24f;
      puStack_4 = (undefined1 *)uVar3;
      FUN_1000_0d3e();
      *(undefined1 *)0xd4e = *(undefined1 *)0x1d5e;
      uStack_6 = 0x259;
      puStack_4 = (undefined1 *)uVar3;
      FUN_1000_04aa();
      puStack_4 = (undefined1 *)*(undefined2 *)0x1d68;
      uStack_8 = 0x261;
      uStack_6 = uVar3;
      FUN_1000_077e();
      *(uint *)0x1d5a = (uint)((*(byte *)0x1d35 & 0x10) != 0);
      uStack_6 = 0x275;
      puStack_4 = (undefined1 *)uVar3;
      FUN_1000_0d08();
      puStack_4 = (undefined1 *)0x87;
      uStack_8 = 0x281;
      uStack_6 = uVar3;
      FUN_1386_000e();
      puStack_4 = (undefined1 *)0x18;
      uStack_6 = 0xe;
      uStack_8 = 0x1386;
      uStack_a = 0x291;
      FUN_130f_037e();
      puStack_4 = (undefined1 *)0x87;
      uStack_6 = 0x78;
      uStack_8 = 0x87;
      uStack_a = 0x78;
      uStack_c = 0x87;
      uStack_e = 0x78;
      uStack_10 = 0x66d;
      puStack_12 = local_58;
      uStack_14 = 0x130f;
      uStack_16 = 0x2ad;
      FUN_111d_1a3e();
      puStack_4 = local_58;
      uStack_6 = 0x24;
      uStack_8 = 0x111d;
      uStack_a = 0x2bd;
      FUN_130f_04c0();
      puStack_4 = (undefined1 *)0x7;
      uStack_6 = 0x48;
      uStack_8 = 1;
      uStack_a = 4;
      uStack_c = 2;
      uStack_e = 0x1f;
      uStack_10 = 0x130f;
      puStack_12 = (undefined1 *)0x2dd;
      FUN_1386_00b2();
      puStack_4 = (undefined1 *)0x6b5;
      uStack_6 = 0x1386;
      uStack_8 = 0x2e9;
      FUN_130f_048a();
      *(undefined1 *)0x594 = *(undefined1 *)0x1d62;
      return;
    }
    if (*(byte *)((int)puStack_4 + 0x2dc) == (*(byte *)0x1d35 & 0xf)) {
      *(int *)0x1d62 = (int)puStack_4;
      goto LAB_1000_0190;
    }
    puStack_4 = (undefined1 *)((int)puStack_4 + 1);
  } while( true );
}
