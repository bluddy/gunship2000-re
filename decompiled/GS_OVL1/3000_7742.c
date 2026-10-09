/* GS.GS2 3000:7742 undefined FUN_3000_7742(void) */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00032ba6) overlaps instruction at (ram,0x00032ba5)
    */

uint __cdecl16far FUN_3000_7742(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  uint in_BX;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int unaff_SI;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  uVar6 = *(uint *)0xc01c;
  if (0x10 < uVar6) {
    iVar5 = *(int *)0xc018;
    iVar10 = iVar5 * 0xb;
    iVar9 = *(int *)(iVar10 + -0x4362) * 0x27 + *(int *)0xb860;
    uVar11 = *(undefined2 *)0xb862;
    if ((*(byte *)(iVar9 + 0x24) & 0x10) == 0) {
      iVar10 = *(int *)(iVar5 * 0xb + -0x4362) * 0x27;
      if ((*(int *)(*(int *)0xb860 + iVar10 + 0x23) == 0) &&
         (*(int *)(*(int *)0xb860 + iVar10 + 0x25) == 0x1000)) {
        *(undefined2 *)0xc00e = 0x5e9a;
        *(undefined2 *)0xc010 = 0x20f4;
      }
      else {
        *(undefined2 *)0xc00e = 0x5fbc;
        *(undefined2 *)0xc010 = 0x20f4;
      }
      iVar5 = *(int *)(iVar5 * 0xb + -0x4362) * 0x27;
      uVar6 = *(uint *)(*(int *)0xb860 + iVar5 + 0x23);
      uVar11 = *(undefined2 *)(*(int *)0xb860 + iVar5 + 0x25);
      *(uint *)0xc4fc = uVar6;
      *(undefined2 *)0xc4fe = uVar11;
    }
    else {
      *(undefined2 *)0xc00e = 0x67de;
      *(undefined2 *)0xc010 = 0x20f4;
      iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(iVar9 + 0x1b),*(undefined2 *)(iVar9 + 0x1d),0x155
                              ,0);
      iVar5 = iVar5 + -1;
      *(int *)0xc4fc = iVar5;
      *(int *)0xc4fe = iVar5 >> 0xf;
      *(int *)(iVar10 + -0x435c) = iVar5;
      iVar9 = *(int *)(iVar10 + -0x4362) * 0x27;
      uVar11 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
      iVar5 = (int)*(undefined4 *)0xb860;
      iVar5 = func_0x00003aec(0xbf,*(undefined2 *)(iVar5 + iVar9 + 0x1f),
                              *(undefined2 *)(iVar5 + iVar9 + 0x21),0xfe39,0xffff);
      uVar6 = iVar5 + 0x47f;
      *(uint *)0xc500 = uVar6;
      *(int *)0xc502 = (int)uVar6 >> 0xf;
      *(uint *)(iVar10 + -0x435a) = uVar6;
    }
    return uVar6;
  }
  uVar11 = 0x3000;
  switch(uVar6) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
    return in_BX;
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    return in_BX;
  case 7:
    iVar5 = *(int *)(unaff_BP + 0xe) * 0xc;
    FUN_3000_20d6(0xffff,2,1,*(undefined2 *)(iVar5 + 0x2ad8),
                  *(int *)(iVar5 + 0x2ada) + *(int *)(unaff_BP + -2) + *(int *)(unaff_BP + -10),
                  *(undefined2 *)(iVar5 + 0x2adc),*(undefined2 *)(iVar5 + 0x2ade),
                  *(undefined2 *)(unaff_BP + -4),*(undefined2 *)(unaff_BP + -8),0xffff);
    iVar5 = *(int *)(*(int *)0xc018 * 0xb + -0x4360);
    if ((*(char *)((int)*(undefined4 *)0xb85c + iVar5 * 8 + 2) == '\x01') && (*(int *)0xc01c < 0xb))
    {
      uVar11 = FUN_3000_3aee(iVar5);
      *(undefined2 *)(unaff_BP + -6) = uVar11;
      if (*(int *)(unaff_BP + 0xe) == 9) {
        while (iVar5 = *(int *)(unaff_BP + -6),
              *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + -1, iVar5 != 0) {
          if (*(char *)((int)*(undefined4 *)0xb85c +
                        (*(int *)(*(int *)0xc018 * 0xb + -0x4360) + *(int *)(unaff_BP + -6)) * 8 + 3
                       ) != '\0') {
            *(undefined2 *)(unaff_BP + -10) = 0;
          }
        }
      }
      iVar5 = *(int *)(unaff_BP + -8) + 5;
      iVar10 = *(int *)(unaff_BP + 0xe) * 0xc;
      FUN_3000_20d6(0xffff,2,1,*(undefined2 *)(iVar10 + 0x2ad8),
                    *(int *)(iVar10 + 0x2ada) + *(int *)(unaff_BP + -2) + *(int *)(unaff_BP + -10),
                    *(undefined2 *)(iVar10 + 0x2adc),*(undefined2 *)(iVar10 + 0x2ade),
                    *(int *)(unaff_BP + -4) + -4,iVar5,0xffff);
      FUN_3000_20d6(0xffff,2,1,*(undefined2 *)(iVar10 + 0x2ad8),
                    *(int *)(iVar10 + 0x2ada) + *(int *)(unaff_BP + -2) + *(int *)(unaff_BP + -10),
                    *(undefined2 *)(iVar10 + 0x2adc),*(undefined2 *)(iVar10 + 0x2ade),
                    *(int *)(unaff_BP + -4) + 4,iVar5,0xffff);
    }
    func_0x00016658(0x3000,0x892,0xe7,0,*(undefined2 *)0xc35a,*(undefined2 *)0xc35c,0x880,
                    *(undefined2 *)0xc354,*(undefined2 *)0xc356);
    iVar5 = FUN_3000_0f6a(0xf8);
    *(int *)(unaff_BP + -0x1e) = (iVar5 - *(int *)0xc366) + *(int *)(unaff_BP + 8);
    func_0x0000582f(0x1658);
    func_0x00005ba0(0xbf);
    iVar5 = func_0x000059f5(0xbf);
    iVar5 = FUN_3000_0f44(iVar5 + *(int *)0xc356);
    *(int *)(unaff_BP + -0x20) = (iVar5 - *(int *)0xc364) + *(int *)(unaff_BP + 6);
    func_0x0000582f(0xbf);
    func_0x00005ba0(0xbf);
    iVar5 = func_0x000059f5(0xbf);
    iVar5 = FUN_3000_0f6a(iVar5 + *(int *)0xc354);
    *(int *)(unaff_BP + -0x22) = (iVar5 - *(int *)0xc366) + *(int *)(unaff_BP + 0xc);
    func_0x0000582f(0xbf);
    func_0x00005ba0(0xbf);
    iVar5 = func_0x000059f5(0xbf);
    iVar5 = FUN_3000_0f44(iVar5 + *(int *)0xc356);
    *(int *)(unaff_BP + -0x24) = (iVar5 - *(int *)0xc364) + *(int *)(unaff_BP + 10);
    func_0x0000582f(0xbf);
    func_0x00005ba0(0xbf);
    iVar5 = func_0x000059f5(0xbf);
    func_0x00016e72(0xbf,0x880,iVar5 + *(int *)0xc354);
    FUN_3000_1da0(0x880);
    iVar5 = FUN_3000_0f6a(3,3,0);
    *(int *)(unaff_BP + -0x24) = (iVar5 - *(int *)0xc366) + *(int *)(unaff_BP + 8);
    func_0x0000582f(0x1658);
    func_0x00005ba0(0xbf);
    iVar5 = func_0x000059f5(0xbf);
    iVar5 = FUN_3000_0f44(iVar5 + *(int *)0xc356);
    *(int *)(unaff_BP + -0x22) = (iVar5 - *(int *)0xc364) + *(int *)(unaff_BP + 6);
    func_0x0000582f(0xbf);
    func_0x00005ba0(0xbf);
    iVar5 = func_0x000059f5(0xbf);
    func_0x0000d116(0xbf,0x880,iVar5 + *(int *)0xc354);
    FUN_3000_1008();
    uVar6 = FUN_3000_10f2();
    return uVar6;
  case 8:
    FUN_3000_24c4(*(undefined2 *)(uVar6 * 2 + 2),1);
    FUN_3000_1206();
    FUN_3000_12b0(*(undefined2 *)0xa84,*(undefined2 *)0xa86);
    func_0x0001bfce(0x3000,*(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 6),
                    *(undefined2 *)(unaff_BP + 8));
    if (2 < *(int *)(*(int *)(unaff_BP + 0xc) + 0xd)) {
      return 0xffff;
    }
    FUN_3000_6cfc();
    if ((*(int *)(*(int *)(unaff_BP + 0xc) + 0xd) == 2) &&
       ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)*(undefined2 *)(unaff_BP + 10) * 0x27 + 0x24
                  ) & 2) != 0)) {
      FUN_3000_73ae((int *)*(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 0xc),0);
      FUN_3000_12b0(*(undefined2 *)0xa5c,*(undefined2 *)0xa5e);
    }
    else {
      iVar5 = *(int *)(unaff_BP + 0xe) + 0xf;
      *(int *)0xc01c = iVar5;
      FUN_3000_2290(iVar5);
      if (*(int *)(*(int *)(unaff_BP + 0xc) + 0xd) == 2) {
        FUN_3000_12b0(*(undefined2 *)0xa60,*(undefined2 *)0xa62);
      }
      else {
        FUN_3000_12b0(*(undefined2 *)0xa58,*(undefined2 *)0xa5a);
      }
    }
    FUN_3000_19cc();
    return 0;
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    *(undefined1 *)(unaff_SI + 0x16) = 0;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
    FUN_3000_2464(uVar6 * 2 + 10);
    FUN_3000_24c4(*(undefined2 *)(*(int *)(unaff_BP + 6) + 2));
    puVar4 = (undefined2 *)*(undefined2 *)(unaff_BP + 6);
    puVar7 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
    puVar8 = puVar4;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
    puVar4[3] = 9999;
    *(int *)0xc01c = *(int *)(unaff_BP + 10) + 0xd;
    FUN_3000_2290();
    uVar6 = FUN_3000_19cc();
    return uVar6;
  case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((in_BX & 0xf00) != 0) && (*(int *)(unaff_BP + -6) == *(int *)0xc4f6)) &&
     (*(int *)(unaff_BP + -4) == *(int *)0xc4f8)) {
    FUN_3000_12b0(*(undefined2 *)0xa50,*(undefined2 *)0xa52);
    FUN_3000_2b4c(0xc4f0,0xc368,0);
    uVar11 = 0x1da4;
    func_0x0001fb9c(0x3000);
    FUN_3000_6cfc();
    FUN_3000_2808(*(undefined2 *)0xc018);
    puVar8 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
    puVar7 = (undefined2 *)(unaff_BP + -0xc);
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    FUN_3000_14fc(0x2a4f);
    uVar3 = *(undefined2 *)(unaff_BP + -0xe);
    *(undefined2 *)0xc01c = uVar3;
    FUN_3000_2290(uVar3);
  }
  if (((*(int *)0xc50a != 9999) && (*(int *)(unaff_BP + -6) == *(int *)0xc50a)) &&
     (*(int *)(unaff_BP + -4) == *(int *)0xc50c)) {
    FUN_3000_12b0(*(undefined2 *)0xa50,*(undefined2 *)0xa52);
    FUN_3000_2b4c(0xc504,0xbc70,1);
    func_0x0001fb9c(uVar11);
    FUN_3000_6cfc();
    FUN_3000_2808(*(undefined2 *)0xc018);
    puVar8 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
    puVar7 = (undefined2 *)(unaff_BP + -0xc);
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    FUN_3000_14fc(0x2a58);
    uVar11 = *(undefined2 *)(unaff_BP + -0xe);
    *(undefined2 *)0xc01c = uVar11;
    FUN_3000_2290(uVar11);
  }
  uVar6 = FUN_3000_24c4(*(undefined2 *)(unaff_BP + -10),1);
  if (uVar6 == 0) {
    return uVar6;
  }
  FUN_3000_2464(unaff_BP + -2,*(undefined2 *)(unaff_BP + -6),*(undefined2 *)(unaff_BP + -4),0xffff);
  uVar6 = *(int *)0xc018 * 0xb + 0xbc9e;
  *(uint *)(unaff_BP + -0x12) = uVar6;
  *(int *)0xc018 = *(int *)0xc018 + 1;
  puVar7 = (undefined2 *)(unaff_BP + -0xc);
  puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + -0x12);
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
  return uVar6;
}
