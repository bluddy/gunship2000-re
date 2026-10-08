/* GS.GS2 2634:000c undefined FUN_2634_000c(void) */
void __cdecl16far FUN_2634_000c(void)

{
  char *pcVar1;
  undefined2 *puVar2;
  int iVar3;
  int in_DX;
  undefined2 *puVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 ***pppuVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_160;
  int iStack_15e;
  int iStack_15a;
  char local_158 [214];
  undefined2 *local_82 [2];
  char cStack_7d;
  char cStack_7c;
  char acStack_74 [100];
  undefined2 *local_10;
  undefined2 uStack_e;
  undefined2 ***local_c;
  char *pcStack_a;
  int *piStack_8;
  
  pppuVar7 = (undefined2 ***)0x10bf;
  FUN_10bf_02c0();
  if (*(int *)0xbc3c != 0) {
    *(undefined2 *)0xbc3c = 0;
    *(undefined2 *)0xbc3e = 0xffff;
    piStack_8 = (int *)*(undefined2 *)0xbc3a;
    pcStack_a = (char *)*(undefined2 *)0xbc38;
    local_c = (undefined2 ***)0x10bf;
    pppuVar7 = (undefined2 ***)0x1dea;
    uStack_e = 0x6379;
    FUN_1dea_1086();
  }
  for (iStack_15a = 0; iStack_15a < 100; iStack_15a = iStack_15a + 1) {
    acStack_74[iStack_15a] = -1;
  }
  piStack_8 = (int *)local_82;
  pcStack_a = (char *)0x1e2e;
  uStack_e = 0x63a6;
  local_c = pppuVar7;
  FUN_1f61_06ac();
  do {
    local_160 = -1;
    piStack_8 = &local_160;
    pcStack_a = (char *)0x1e39;
    local_c = (undefined2 ***)local_82;
    uStack_e = 0x1f61;
    local_10 = (undefined2 **)0x63c0;
    FUN_10bf_273a();
    piStack_8 = (int *)0x7;
    pcStack_a = (char *)local_82;
    local_c = &local_c;
    uStack_e = 0x10bf;
    local_10 = (undefined2 **)0x63d2;
    FUN_10bf_2250();
    local_160 = cStack_7d * 10 + (int)cStack_7c + -0x210;
    piStack_8 = (int *)&local_10;
    pcStack_a = (char *)local_82;
    local_c = (undefined2 ***)0x10bf;
    uVar8 = 0x1f61;
    uStack_e = 0x6403;
    iVar3 = FUN_1f61_029a();
    if (iVar3 == 0) {
      piStack_8 = (int *)0x4;
      pcStack_a = (char *)0x1e41;
      local_c = (undefined2 ***)&local_10;
      uStack_e = 0x1f61;
      uVar8 = 0x10bf;
      local_10 = (undefined2 **)0x641b;
      iVar3 = FUN_10bf_2278();
      if (iVar3 == 0) {
        while( true ) {
          piStack_8 = (int *)0x1e46;
          local_c = (undefined2 ***)0x642d;
          pcStack_a = (char *)uVar8;
          iStack_15e = FUN_1f61_04ca();
          if ((in_DX < 0) || ((in_DX < 1 && (iStack_15e == 0)))) break;
          pcStack_a = local_158;
          local_c = (undefined2 ***)0x1f61;
          uVar8 = 0x1f61;
          uStack_e = 0x6453;
          piStack_8 = (int *)iStack_15e;
          FUN_1f61_053c();
          if (*(int *)0xbc3e < (int)local_158[0]) {
            *(int *)0xbc3e = (int)local_158[0];
          }
          if (acStack_74[local_158[0]] < local_160) {
            if (-1 < acStack_74[local_158[0]]) {
              iStack_15a = 0;
LAB_2634_014a:
              if (iStack_15a < *(int *)0xbc3c) {
                uVar6 = (undefined2)((ulong)*(undefined4 *)0xbc38 >> 0x10);
                iVar3 = (int)*(undefined4 *)0xbc38;
                if (*(char *)(iStack_15a * 0xd6 + iVar3) != local_158[0]) goto LAB_2634_0146;
                puVar4 = (undefined2 *)(iVar3 + iStack_15a * 0xd6);
                pcVar5 = local_158;
                for (iVar3 = 0x6b; iVar3 != 0; iVar3 = iVar3 + -1) {
                  puVar2 = puVar4;
                  puVar4 = puVar4 + 1;
                  pcVar1 = pcVar5;
                  pcVar5 = pcVar5 + 2;
                  *puVar2 = *(undefined2 *)pcVar1;
                }
              }
              goto LAB_2634_01d7;
            }
            if (*(int *)0xbc3c == 0) {
              piStack_8 = (int *)0xd6;
              pcStack_a = (char *)0x1f61;
              local_c = (undefined2 ***)0x64c7;
              uVar8 = FUN_1dea_1048();
              *(undefined2 *)0xbc38 = uVar8;
              *(int *)0xbc3a = in_DX;
            }
            else {
              piStack_8 = (int *)((*(int *)0xbc3c + 1) * 0xd6);
              pcStack_a = (char *)*(undefined2 *)0xbc3a;
              local_c = (undefined2 ***)*(undefined2 *)0xbc38;
              uStack_e = 0x1f61;
              local_10 = (undefined2 **)0x64ea;
              uVar8 = FUN_1dea_1012();
              *(undefined2 *)0xbc38 = uVar8;
              *(int *)0xbc3a = in_DX;
            }
            uVar8 = 0x1dea;
            puVar4 = (undefined2 *)(*(int *)0xbc3c * 0xd6 + *(int *)0xbc38);
            *(int *)0xbc3c = *(int *)0xbc3c + 1;
            pcVar5 = local_158;
            for (iVar3 = 0x6b; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar2 = puVar4;
              puVar4 = puVar4 + 1;
              pcVar1 = pcVar5;
              pcVar5 = pcVar5 + 2;
              *puVar2 = *(undefined2 *)pcVar1;
            }
LAB_2634_01d7:
            acStack_74[local_158[0]] = (char)local_160;
          }
        }
        piStack_8 = (int *)0x1f61;
        uVar8 = 0x1f61;
        pcStack_a = (char *)0x652d;
        FUN_1f61_040a();
      }
    }
    piStack_8 = (int *)local_82;
    local_c = (undefined2 ***)0x6536;
    pcStack_a = (char *)uVar8;
    iVar3 = FUN_1f61_077e();
    if (iVar3 == 0) {
      return;
    }
  } while( true );
LAB_2634_0146:
  iStack_15a = iStack_15a + 1;
  goto LAB_2634_014a;
}
