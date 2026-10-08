/* GS.GS2 2163:0af8 undefined FUN_2163_0af8(void) */
void __cdecl16far FUN_2163_0af8(int param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_66 [42];
  undefined1 local_3c [38];
  undefined2 uStack_16;
  undefined2 uStack_14;
  int iStack_12;
  undefined1 *puStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_8;
  
  FUN_10bf_02c0();
  puStack_8 = (undefined1 *)0xffff;
  puStack_e = (undefined1 *)param_3;
  puStack_10 = (undefined1 *)param_2;
  iStack_12 = 0x880;
  uStack_14 = 0x10bf;
  uStack_16 = 0x2149;
  FUN_1c87_0050();
  puStack_8 = (undefined1 *)0x3;
  FUN_1c87_0110();
  puStack_8 = (undefined1 *)0xa;
  FUN_1c87_00b8();
  puStack_8 = (undefined1 *)0x2;
  puStack_e = (undefined1 *)0x1c87;
  puStack_10 = (undefined1 *)0x216b;
  FUN_1c87_0136();
  puStack_8 = (undefined1 *)(param_1 * 0x29 + -0x45e2);
  puStack_e = (undefined1 *)0x2182;
  FUN_1c87_01f6();
  if (*(char *)(param_1 * 0x29 + -0x45e4) == '\0') {
    puStack_8 = (undefined1 *)0x1129;
  }
  else {
    puStack_8 = (undefined1 *)0x1122;
  }
  puStack_e = local_3c;
  puStack_10 = (undefined1 *)0x1c87;
  iStack_12 = 0x21b6;
  FUN_10bf_26e0();
  puStack_8 = local_3c;
  FUN_1c87_01e0();
  puStack_8 = (undefined1 *)0x6;
  FUN_1c87_0158();
  puStack_8 = (undefined1 *)(int)*(char *)(param_1 * 0x24 + -0x4518);
  iVar4 = FUN_2581_039c();
  if (iVar4 < 0) {
    puStack_8 = (undefined1 *)(int)*(char *)(param_1 * 0x24 + -0x4518);
    puStack_e = (undefined1 *)0x2581;
    puStack_10 = (undefined1 *)0x221e;
    FUN_10bf_26e0();
  }
  else {
    puStack_8 = (undefined1 *)*(undefined2 *)0xb83c;
    puStack_e = local_3c;
    puStack_10 = (undefined1 *)0x2581;
    iStack_12 = 0x2203;
    FUN_10bf_319c();
  }
  puStack_8 = local_3c;
  puStack_e = (undefined1 *)0x222d;
  FUN_1c87_01f6();
  iVar4 = param_1 * 0x24;
  puStack_8 = (undefined1 *)*(undefined2 *)(iVar4 + -0x44fd);
  puStack_e = (undefined1 *)0x2243;
  puStack_8 = (undefined1 *)FUN_212a_0050();
  puStack_e = (undefined1 *)0x212a;
  puStack_10 = (undefined1 *)0x2253;
  FUN_10bf_26e0();
  puStack_8 = (undefined1 *)0x28;
  puStack_e = (undefined1 *)0x10bf;
  puStack_10 = (undefined1 *)0x2263;
  FUN_1c87_00ca();
  puStack_8 = (undefined1 *)0x1161;
  FUN_1c87_01f6();
  puStack_8 = (undefined1 *)*(undefined2 *)(iVar4 + -0x4501);
  puStack_e = (undefined1 *)0x227e;
  puStack_10 = (undefined1 *)FUN_212a_0050();
  if ((int)puStack_10 < 0x65) {
    puStack_8 = (undefined1 *)0xa;
  }
  else {
    puStack_8 = (undefined1 *)0xc;
  }
  FUN_1c87_00b8();
  puStack_8 = puStack_10;
  puStack_e = (undefined1 *)0x1c87;
  puStack_10 = (undefined1 *)0x22ad;
  FUN_10bf_26e0();
  puStack_8 = (undefined1 *)0x5a;
  puStack_e = (undefined1 *)0x10bf;
  puStack_10 = (undefined1 *)0x22bd;
  FUN_1c87_00ca();
  puStack_8 = (undefined1 *)0x1172;
  FUN_1c87_01f6();
  puStack_8 = (undefined1 *)(int)*(char *)(iVar4 + -0x4516);
  FUN_2634_0204();
  puStack_8 = (undefined1 *)0xa;
  FUN_1c87_00b8();
  puStack_8 = (undefined1 *)*(undefined2 *)0xbc3a;
  puStack_e = local_3c;
  puStack_10 = (undefined1 *)0x1c87;
  iStack_12 = 0x230b;
  FUN_10bf_319c();
  puStack_8 = (undefined1 *)*(undefined2 *)(iVar4 + -0x4503);
  puStack_e = (undefined1 *)0x10bf;
  puStack_10 = (undefined1 *)0x2321;
  FUN_1c87_01f6();
  for (puStack_10 = (undefined1 *)0x0; (int)puStack_10 < 3;
      puStack_10 = (undefined1 *)((int)puStack_10 + 1)) {
    (&puStack_8)[(int)puStack_10] =
         (undefined1 *)*(undefined2 *)((param_1 * 0x12 + (int)puStack_10) * 2 + -0x450c);
  }
  for (puStack_10 = (undefined1 *)0x0; (int)puStack_10 < 3;
      puStack_10 = (undefined1 *)((int)puStack_10 + 1)) {
    cVar1 = *(char *)((int)puStack_10 + param_1 * 0x24 + -0x4515);
    puVar3 = puStack_10;
    if (-1 < cVar1) {
      while (iStack_12 = (int)puVar3 + 1, iStack_12 < 3) {
        cVar2 = *(char *)(iStack_12 + param_1 * 0x24 + -0x4515);
        puVar3 = (undefined1 *)iStack_12;
        if ((-1 < cVar2) && (cVar2 == cVar1)) {
          (&puStack_8)[(int)puStack_10] =
               (&puStack_8)[(int)puStack_10] + (int)(&puStack_8)[iStack_12];
          (&puStack_8)[iStack_12] = (undefined1 *)0x0;
        }
      }
    }
  }
  for (puStack_10 = (undefined1 *)0x0; (int)puStack_10 < 3;
      puStack_10 = (undefined1 *)((int)puStack_10 + 1)) {
    if ((&puStack_8)[(int)puStack_10] != (undefined1 *)0x0) {
      puStack_8 = (&puStack_8)[(int)puStack_10];
      puStack_e = (undefined1 *)0x1c87;
      puStack_10 = (undefined1 *)0x23e3;
      FUN_10bf_26e0();
      puStack_8 = (undefined1 *)0xe;
      puStack_e = (undefined1 *)0x10bf;
      puStack_10 = (undefined1 *)0x23f3;
      FUN_1c87_00ca();
      puStack_8 = (undefined1 *)(int)*(char *)((int)puStack_10 + param_1 * 0x24 + -0x4515);
      iVar4 = FUN_2634_0204();
      if (iVar4 < 0) {
        puStack_8 = (undefined1 *)(int)*(char *)((int)puStack_10 + param_1 * 0x24 + -0x4515);
        puStack_e = (undefined1 *)0x2634;
        puStack_10 = (undefined1 *)0x244b;
        FUN_10bf_26e0();
      }
      else {
        puStack_8 = (undefined1 *)*(undefined2 *)0xbc3a;
        puStack_e = local_66;
        puStack_10 = (undefined1 *)0x2634;
        iStack_12 = 0x242d;
        FUN_10bf_319c();
      }
      puStack_8 = local_66;
      puStack_e = (undefined1 *)0x10bf;
      puStack_10 = (undefined1 *)0x245e;
      FUN_10bf_26e0();
      puStack_8 = local_3c;
      FUN_1c87_01e0();
    }
  }
  return;
}
