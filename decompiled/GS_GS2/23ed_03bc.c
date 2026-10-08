/* GS.GS2 23ed:03bc undefined FUN_23ed_03bc(void) */
void __cdecl16far FUN_23ed_03bc(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  while( true ) {
    while( true ) {
      while( true ) {
        iVar4 = *(int *)0xb60f + -2;
        FUN_24e6_05ee();
        cVar1 = *(char *)0xb60f;
        *(char *)0xe281 = cVar1 + -2;
        puVar7 = (undefined2 *)0xacb6;
        puVar6 = (undefined2 *)((char)(cVar1 + -2) * 0x122 + -0x5222);
        for (iVar5 = 0x91; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        iVar5 = *(int *)0xb611;
        if (iVar5 != 8) break;
        FUN_1dea_0f3a(0x22);
        FUN_2351_01fe();
        FUN_23ed_09b8();
        FUN_23ed_0c0a(0);
        FUN_23ed_052c((int)*(char *)0xe281,1);
        FUN_23ed_0cd0();
        FUN_23ed_0db4((int)*(char *)0xe281);
        FUN_24e6_04ee();
      }
      if (iVar5 == 0xd) break;
      if (iVar5 == 0x1b) {
        FUN_1dea_0f3a(0x22);
        FUN_10bf_30d2(0xadde);
        *(undefined1 *)0xe281 = 0;
        puVar7 = (undefined2 *)0xacb6;
        puVar6 = (undefined2 *)0xadde;
        for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar3 = *puVar2;
        }
        return;
      }
      if (iVar5 == 0x110) {
        FUN_1dea_0e98();
      }
      else if (*(char *)0xe281 != iVar4) {
        FUN_23ed_0c0a(0);
        FUN_2351_00d2();
        FUN_23ed_052c(iVar4,0);
        FUN_23ed_052c((int)*(char *)0xe281,1);
        FUN_2351_00ec();
        FUN_23ed_0cd0();
        FUN_23ed_0db4((int)*(char *)0xe281);
        FUN_23ed_0db4(iVar4);
      }
    }
    if (*(char *)(*(char *)0xe281 * 0x122 + -0x51cc) < '\x02') break;
    FUN_1dea_0f3a(0x21);
  }
  FUN_1dea_0f3a(0x22);
  FUN_1d02_02d0();
  FUN_1c6b_0116();
  return;
}
