/* GS.GS2 202b:00ba undefined FUN_202b_00ba(void) */
void __cdecl16far FUN_202b_00ba(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  char unaff_DI;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_2a;
  undefined2 local_28 [13];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  uVar9 = 0x10bf;
  FUN_10bf_02c0();
  for (iStack_2a = 0; iStack_2a < *(int *)0x8fc4; iStack_2a = iStack_2a + 1) {
    iVar5 = iStack_2a * 0x38;
    uStack_e = 0x3a6;
    uStack_c = uVar9;
    uVar3 = FUN_202b_039a();
    *(undefined1 *)(iVar5 + -0x78c7) = uVar3;
    uStack_c = 0x3b8;
    cVar4 = thunk_EXT_FUN_0000_0000();
    uStack_c = 0x2658;
    uVar9 = 0x10bf;
    uStack_e = 0x3c8;
    iVar6 = FUN_10bf_2a84();
    *(char *)(iVar5 + -0x78c6) = ('\x02' - (iVar6 == 0)) * cVar4;
    if (*(char *)(iVar5 + -0x78f4) == '\x01') {
      *(bool *)(iStack_2a * 0x38 + -0x78c5) =
           (int)*(char *)(iStack_2a * 0x38 + -0x78f3) == *(int *)0xb60f;
    }
    else if (*(char *)(iVar5 + -0x78f4) == '\x02') {
      uVar9 = 0x1000;
      uStack_c = 0x411;
      puVar7 = (undefined2 *)FUN_1000_05a2();
      puVar8 = local_28;
      for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
      *(bool *)(iStack_2a * 0x38 + -0x78c5) = *(char *)(iStack_2a * 0x38 + -0x78f2) == unaff_DI;
    }
    else {
      *(undefined1 *)(iStack_2a * 0x38 + -0x78c5) = 0;
    }
    uStack_c = 0x460;
    FUN_202b_01c0();
    *(undefined1 *)(iStack_2a * 0x38 + -0x78c8) = 0;
  }
  return;
}
