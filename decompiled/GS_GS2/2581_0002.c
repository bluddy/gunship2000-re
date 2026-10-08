/* GS.GS2 2581:0002 undefined FUN_2581_0002(void) */
void __cdecl16far FUN_2581_0002(void)

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
  int local_186;
  int iStack_184;
  int iStack_180;
  char acStack_17e [100];
  char local_11a [252];
  undefined2 *local_1e [2];
  char cStack_19;
  char cStack_18;
  undefined2 *local_10;
  undefined2 uStack_e;
  undefined2 ***local_c;
  char *pcStack_a;
  int *piStack_8;
  
  pppuVar7 = (undefined2 ***)0x10bf;
  FUN_10bf_02c0();
  if (*(int *)0xb836 != 0) {
    *(undefined2 *)0xb836 = 0;
    *(undefined2 *)0xb838 = 0xffff;
    piStack_8 = (int *)*(undefined2 *)0xb83c;
    pcStack_a = (char *)*(undefined2 *)0xb83a;
    local_c = (undefined2 ***)0x10bf;
    pppuVar7 = (undefined2 ***)0x1dea;
    uStack_e = 0x583f;
    FUN_1dea_1086();
  }
  for (iStack_180 = 0; iStack_180 < 100; iStack_180 = iStack_180 + 1) {
    acStack_17e[iStack_180] = -1;
  }
  piStack_8 = (int *)local_1e;
  pcStack_a = (char *)0x1de8;
  uStack_e = 0x586c;
  local_c = pppuVar7;
  FUN_1f61_06ac();
  do {
    local_186 = -1;
    piStack_8 = &local_186;
    pcStack_a = (char *)0x1df3;
    local_c = (undefined2 ***)local_1e;
    uStack_e = 0x1f61;
    local_10 = (undefined2 **)0x5886;
    FUN_10bf_273a();
    piStack_8 = (int *)0x7;
    pcStack_a = (char *)local_1e;
    local_c = &local_c;
    uStack_e = 0x10bf;
    local_10 = (undefined2 **)0x5898;
    FUN_10bf_2250();
    local_186 = cStack_19 * 10 + (int)cStack_18 + -0x210;
    piStack_8 = (int *)&local_10;
    pcStack_a = (char *)local_1e;
    local_c = (undefined2 ***)0x10bf;
    uVar8 = 0x1f61;
    uStack_e = 0x58c9;
    iVar3 = FUN_1f61_029a();
    if (iVar3 == 0) {
      piStack_8 = (int *)0x4;
      pcStack_a = (char *)0x1dfb;
      local_c = (undefined2 ***)&local_10;
      uStack_e = 0x1f61;
      uVar8 = 0x10bf;
      local_10 = (undefined2 **)0x58e1;
      iVar3 = FUN_10bf_2278();
      if (iVar3 == 0) {
        while( true ) {
          piStack_8 = (int *)0x1e00;
          local_c = (undefined2 ***)0x58f3;
          pcStack_a = (char *)uVar8;
          iStack_184 = FUN_1f61_04ca();
          if ((in_DX < 0) || ((in_DX < 1 && (iStack_184 == 0)))) break;
          pcStack_a = local_11a;
          local_c = (undefined2 ***)0x1f61;
          uVar8 = 0x1f61;
          uStack_e = 0x5919;
          piStack_8 = (int *)iStack_184;
          FUN_1f61_053c();
          if (*(int *)0xb838 < (int)local_11a[0]) {
            *(int *)0xb838 = (int)local_11a[0];
          }
          if (acStack_17e[local_11a[0]] < local_186) {
            if (-1 < acStack_17e[local_11a[0]]) {
              iStack_180 = 0;
LAB_2581_0142:
              if (iStack_180 < *(int *)0xb836) {
                uVar6 = (undefined2)((ulong)*(undefined4 *)0xb83a >> 0x10);
                iVar3 = (int)*(undefined4 *)0xb83a;
                if (*(char *)(iStack_180 * 0xfc + iVar3) != local_11a[0]) goto LAB_2581_013e;
                puVar4 = (undefined2 *)(iVar3 + iStack_180 * 0xfc);
                pcVar5 = local_11a;
                for (iVar3 = 0x7e; iVar3 != 0; iVar3 = iVar3 + -1) {
                  puVar2 = puVar4;
                  puVar4 = puVar4 + 1;
                  pcVar1 = pcVar5;
                  pcVar5 = pcVar5 + 2;
                  *puVar2 = *(undefined2 *)pcVar1;
                }
              }
              goto LAB_2581_01d1;
            }
            if (*(int *)0xb836 == 0) {
              piStack_8 = (int *)0xfc;
              pcStack_a = (char *)0x1f61;
              local_c = (undefined2 ***)0x5991;
              uVar8 = FUN_1dea_1048();
              *(undefined2 *)0xb83a = uVar8;
              *(int *)0xb83c = in_DX;
            }
            else {
              piStack_8 = (int *)((*(int *)0xb836 + 1) * 0xfc);
              pcStack_a = (char *)*(undefined2 *)0xb83c;
              local_c = (undefined2 ***)*(undefined2 *)0xb83a;
              uStack_e = 0x1f61;
              local_10 = (undefined2 **)0x59b4;
              uVar8 = FUN_1dea_1012();
              *(undefined2 *)0xb83a = uVar8;
              *(int *)0xb83c = in_DX;
            }
            uVar8 = 0x1dea;
            puVar4 = (undefined2 *)(*(int *)0xb836 * 0xfc + *(int *)0xb83a);
            *(int *)0xb836 = *(int *)0xb836 + 1;
            pcVar5 = local_11a;
            for (iVar3 = 0x7e; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar2 = puVar4;
              puVar4 = puVar4 + 1;
              pcVar1 = pcVar5;
              pcVar5 = pcVar5 + 2;
              *puVar2 = *(undefined2 *)pcVar1;
            }
LAB_2581_01d1:
            acStack_17e[local_11a[0]] = (char)local_186;
          }
        }
        piStack_8 = (int *)0x1f61;
        uVar8 = 0x1f61;
        pcStack_a = (char *)0x59f9;
        FUN_1f61_040a();
      }
    }
    piStack_8 = (int *)local_1e;
    local_c = (undefined2 ***)0x5a02;
    pcStack_a = (char *)uVar8;
    iVar3 = FUN_1f61_077e();
    if (iVar3 == 0) {
      return;
    }
  } while( true );
LAB_2581_013e:
  iStack_180 = iStack_180 + 1;
  goto LAB_2581_0142;
}
