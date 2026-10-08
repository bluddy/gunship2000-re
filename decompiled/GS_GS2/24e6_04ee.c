/* GS.GS2 24e6:04ee undefined FUN_24e6_04ee(void) */
void __cdecl16far FUN_24e6_04ee(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_24e6_0926(*(undefined2 *)0xb60f);
  if (*(int *)0x8c8 != 0) {
    FUN_1ef4_0306(*(undefined2 *)0xb60b,*(undefined2 *)0xb60d,0);
  }
  FUN_2351_0130(*(undefined2 *)0xb60b,*(undefined2 *)0xb60d,0);
  FUN_2351_0008(*(int *)0x9570 * 2 + -0x60e4,4);
  FUN_1000_028c();
  FUN_202b_00ba();
  uVar3 = FUN_106f_011c(*(undefined2 *)0xb60b,*(undefined2 *)0xb60d);
  puVar4 = (undefined2 *)FUN_106f_0430(uVar3);
  puVar6 = (undefined2 *)0x954c;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined2 *)0xb60f = *(undefined2 *)0x954c;
  FUN_24e6_088a(0x9558,5,7);
  if (*(int *)0x9576 != 0 || *(int *)0x9574 != 0) {
    (*(code *)*(undefined2 *)0x9574)(0x106f);
  }
  FUN_2351_00ec();
  FUN_1d02_058a(0x880,0x86e);
  FUN_1f32_00a6();
  return;
}
