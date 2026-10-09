/* GS.GS2 2000:f37c undefined FUN_2000_f37c(void) */
void __cdecl16far FUN_2000_f37c(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  uStack_a = 0xbf;
  uStack_c = 0xf390;
  puVar4 = (undefined2 *)func_0x00000b20();
  puVar6 = &local_26;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_a = uStack_1e;
  uStack_c = uStack_20;
  uStack_e = uStack_22;
  uStack_10 = uStack_24;
  uStack_12 = 0x86e;
  uStack_14 = 0x6f;
  uStack_16 = 0xf3b5;
  func_0x00016a62();
  uStack_a = 0xf3bd;
  func_0x000135e2();
  uStack_a = 0x1351;
  uStack_c = 0xf3c4;
  uVar3 = func_0x00000672();
  *(undefined1 *)0xad13 = uVar3;
  uStack_a = 0;
  uStack_c = 0xf3d1;
  uVar3 = func_0x00000672();
  *(undefined1 *)0xad14 = uVar3;
  uStack_a = 0;
  uStack_c = 0xf3de;
  uVar3 = func_0x00000672();
  *(undefined1 *)0xad15 = uVar3;
  uStack_a = 0;
  uStack_c = 0xf3eb;
  uVar3 = func_0x00000672();
  *(undefined1 *)0xad16 = uVar3;
  uStack_a = 0;
  uStack_c = 0xf3f8;
  uVar3 = func_0x00000672();
  *(undefined1 *)0xad17 = uVar3;
  uStack_a = 0;
  uStack_c = 0xf405;
  uVar3 = func_0x00000672();
  *(undefined1 *)0xad18 = uVar3;
  uStack_a = 0;
  uStack_c = 0xf412;
  uVar3 = func_0x00000672();
  *(undefined1 *)0xad19 = uVar3;
  uStack_a = 0;
  uStack_c = 0xf41f;
  uVar3 = func_0x00000672();
  *(undefined1 *)0xe283 = uVar3;
  puVar6 = (undefined2 *)(*(char *)0xe281 * 0x122 + -0x5222);
  puVar4 = (undefined2 *)0xacb6;
  for (iVar5 = 0x91; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
