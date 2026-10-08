/* GS.GS2 2163:0ee2 undefined FUN_2163_0ee2(void) */
void __cdecl16far FUN_2163_0ee2(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int iStackY_1a;
  int iStackY_18;
  int iStackY_16;
  int iStackY_14;
  int iVar7;
  
  FUN_10bf_02c0();
  iVar3 = FUN_2163_1506(2);
  iVar4 = FUN_2163_1506(3);
  do {
    do {
      iVar5 = FUN_239c_0008(100);
      iStackY_1a = 0;
      iVar7 = 0;
      while ((*(char *)(iStackY_1a * 0x2f + 0x11a0) != iVar3 ||
             (iVar7 = iVar7 + *(char *)(iStackY_1a * 0x2f + 0x11a1), iVar7 < iVar5))) {
        iStackY_1a = iStackY_1a + 1;
      }
      iStackY_14 = 0;
      while ((iStackY_14 < *(char *)0xe282 &&
             (iVar7 = FUN_2581_039c((int)*(char *)(iStackY_14 * 9 + iStackY_1a * 0x2f + 0x11a2)),
             *(char *)((int)*(undefined4 *)0xb83a + iVar7 * 0xfc + 5) <= *(char *)0xad0a))) {
        iStackY_14 = iStackY_14 + 1;
      }
    } while (iStackY_14 < *(char *)0xe282);
    if (iVar4 == 0) break;
    iStackY_14 = 0;
    while ((iStackY_14 < *(char *)0xe282 &&
           (((cVar1 = *(char *)(iStackY_14 * 9 + iStackY_1a * 0x2f + 0x11a2), iVar4 != 2 ||
             (((cVar1 != '\x06' && (cVar1 != '\x03')) && (cVar1 != '\x04')))) &&
            ((iVar4 != 1 || (cVar1 != '\x05'))))))) {
      iStackY_14 = iStackY_14 + 1;
    }
  } while (*(char *)0xe282 <= iStackY_14);
  iStackY_18 = 0;
  for (iStackY_14 = 0; iStackY_14 < *(char *)0xe282; iStackY_14 = iStackY_14 + 1) {
    *(undefined1 *)(iStackY_14 * 0x29 + -0x45e6) = (undefined1)iStackY_14;
    *(bool *)(iStackY_14 * 0x29 + -0x45e5) = 2 < iStackY_14;
    if ((iStackY_14 == 0) || (iStackY_14 == 3)) {
      *(undefined1 *)(iStackY_14 * 0x29 + -0x45e4) = 1;
    }
    else {
      *(undefined1 *)(iStackY_14 * 0x29 + -0x45e4) = 0;
    }
    FUN_2163_0e44(iStackY_14);
    iVar3 = iStackY_1a * 0x2f + iStackY_14 * 9;
    iVar4 = iStackY_14 * 0x24;
    *(undefined1 *)(iVar4 + -0x4518) = *(undefined1 *)(iVar3 + 0x11a2);
    FUN_2163_15a4(iVar4 + -0x4518);
    *(undefined2 *)(iVar4 + -0x4503) = *(undefined2 *)(iVar3 + 0x11a3);
    for (iStackY_16 = 0; iStackY_16 < 3; iStackY_16 = iStackY_16 + 1) {
      iVar3 = iStackY_1a * 0x2f + iStackY_16 * 2 + iStackY_14 * 9;
      *(undefined1 *)(iStackY_16 + iStackY_14 * 0x24 + -0x4515) = *(undefined1 *)(iVar3 + 0x11a6);
      *(int *)((iStackY_16 + iStackY_14 * 0x12) * 2 + -0x450c) = (int)*(char *)(iVar3 + 0x11a5);
    }
    iVar3 = iStackY_14 * 0x24;
    if (((*(char *)(iVar3 + -0x4517) == '\x02') && (iStackY_18 = iStackY_18 + 1, iStackY_18 == 1))
       && (*(char *)0xe278 != '\0')) {
      *(undefined2 *)(iVar3 + -0x4508) = 1;
      if (*(char *)0xe278 == '\x02') {
        uVar2 = 0x15;
      }
      else {
        uVar2 = 0x14;
      }
      *(undefined1 *)(iVar3 + -0x4513) = uVar2;
      if (*(char *)0xe278 == '\x02') {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      *(undefined1 *)(iVar3 + -0x44f5) = uVar2;
    }
    FUN_2163_173a(iStackY_14 * 0x24 + -0x4518);
  }
  iVar3 = 0x5a;
  while ((0x45 < iVar3 && (iVar4 = FUN_2163_1b36(), iVar4 != 0))) {
    for (iStackY_14 = 0; iStackY_14 < *(char *)0xe282; iStackY_14 = iStackY_14 + 1) {
      iVar4 = iStackY_14 * 0x24;
      uVar6 = FUN_10bf_2efc((long)*(int *)(iVar4 + -0x44fd) * (long)iVar3,100,0);
      *(undefined2 *)(iVar4 + -0x44fb) = uVar6;
      FUN_2163_173a(iVar4 + -0x4518);
    }
    iVar3 = iVar3 + -10;
  }
  FUN_2163_1546();
  FUN_10bf_2c3a(0x93cc,0xff,4);
  FUN_10bf_2c3a(0x93d0,0xff,4);
  FUN_10bf_2c3a(0x93da,0,5);
  for (iStackY_14 = 0; iStackY_14 < *(char *)0xe282; iStackY_14 = iStackY_14 + 1) {
    *(undefined1 *)(iStackY_14 + -0x6c26) = *(undefined1 *)(iStackY_14 * 0x24 + -0x4518);
  }
  if (*(char *)0xad1b == '\x04') {
    uVar2 = FUN_239c_005c(0,0xd);
    *(undefined1 *)0x93cc = uVar2;
    do {
      uVar2 = FUN_239c_005c(0,0xd);
      *(undefined1 *)0x93cd = uVar2;
    } while (*(char *)0x93cd == *(char *)0x93cc);
    do {
      do {
        uVar2 = FUN_239c_005c(0,0xd);
        *(undefined1 *)0x93ce = uVar2;
      } while (*(char *)0x93ce == *(char *)0x93cc);
    } while (*(char *)0x93ce == *(char *)0x93cd);
    if (1 < *(int *)0xad5b) {
      do {
        do {
          uVar2 = FUN_239c_005c(0,0xd);
          *(undefined1 *)0x93cf = uVar2;
        } while (*(char *)0x93cf == *(char *)0x93cc);
      } while ((*(char *)0x93cf == *(char *)0x93cd) || (*(char *)0x93ce == *(char *)0x93cf));
    }
    uVar2 = FUN_239c_005c(0,7);
    *(undefined1 *)0x93d0 = uVar2;
    uVar2 = FUN_239c_005c(0,6);
    *(undefined1 *)0x93d1 = uVar2;
    *(char *)0x93d1 = *(char *)0x93d1 + (*(char *)0x93d0 <= *(char *)0x93d1);
    if (*(int *)0xad5b != 0) {
      do {
        do {
          uVar2 = FUN_239c_005c(0,7);
          *(undefined1 *)0x93d2 = uVar2;
        } while (*(char *)0x93d2 == *(char *)0x93d0);
      } while (*(char *)0x93d2 == *(char *)0x93d1);
    }
  }
  return;
}
