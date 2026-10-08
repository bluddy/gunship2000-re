/* GS.GS2 2163:0116 undefined FUN_2163_0116(void) */
void __cdecl16far FUN_2163_0116(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined1 uStackY_c;
  uint uStackY_a;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_10bf_02c0();
  *(undefined1 *)0x93d4 = 0;
  do {
    iVar5 = 0x24e6;
    FUN_24e6_05ee();
    iVar3 = *(int *)0xb60f + -1;
    iVar7 = 0x24e6;
    iVar6 = 0x1779;
    iVar8 = iVar3;
    uVar4 = FUN_2163_180e();
    if (*(int *)0xb60f != iVar8) {
      if ((-1 < iVar3) && (iVar3 < 5)) {
        uStackY_c = (undefined1)iVar3;
        *(undefined1 *)0x93d6 = uStackY_c;
      }
      if (((*(char *)0x93d4 != '\0') && (0 < iVar8)) && (iVar8 < 6)) {
        FUN_2163_0900(0);
      }
      iVar7 = 0x24e6;
      iVar6 = 0x17c1;
      FUN_2163_05a2(1);
    }
    uVar1 = *(uint *)0xb611;
    if (uVar1 == 0x50) {
LAB_2163_0238:
      if ((*(int *)0xb60f < 2) || (5 < *(int *)0xb60f)) {
        iVar7 = 0x24e6;
        iVar5 = 0x1dea;
        iVar6 = 0x187d;
        FUN_1dea_0f3a(0x21);
      }
      else {
        iVar7 = 0x24e6;
        iVar5 = 0x1dea;
        iVar6 = 0x188b;
        FUN_1dea_0f3a(0x22);
        if (*(char *)0x93d4 == '\x01') {
          iVar7 = FUN_2163_07d8();
        }
        else {
          *(undefined1 *)0x93d7 = *(undefined1 *)0x93d6;
          if (*(char *)0x93d4 != '\0') {
            iVar7 = 1;
          }
          *(undefined1 *)0x93d4 = 1;
          *(undefined1 *)0x93d9 = 0;
        }
      }
    }
    else if ((int)uVar1 < 0x51) {
      if (uVar1 == 0x4c) {
LAB_2163_033c:
        if (((iVar3 == 0) || (iVar3 == 2)) || (iVar3 == 3)) {
          FUN_1dea_0f3a(0x22);
          FUN_2351_00d2();
          for (uStackY_a = 0; (int)uStackY_a < 5; uStackY_a = uStackY_a + 1) {
            if ((uStackY_a == 0) || ((int)*(char *)0x93d6 == uStackY_a)) {
              *(undefined1 *)(uStackY_a * 0x29 + -0x45e4) = 1;
            }
            else {
              *(undefined1 *)(uStackY_a * 0x29 + -0x45e4) = 0;
            }
            *(bool *)(uStackY_a * 0x29 + -0x45e5) =
                 (int)uStackY_a < (int)*(char *)0x93d6 != (*(char *)0x93d6 == '\x03');
          }
          FUN_2163_1546();
          uStackY_a = 0;
          while (uStackY_a < 5) {
            FUN_2163_0900(uStackY_a,0);
            uStackY_a = 0x1a13;
          }
          FUN_2351_00ec();
          iVar7 = 0x880;
          iVar6 = 0x2351;
          iVar5 = 0x1d02;
          FUN_1d02_058a(0x880,0x86e);
        }
        else {
          iVar7 = 0x24e6;
          iVar5 = 0x1dea;
          iVar6 = 0x1a35;
          FUN_1dea_0f3a(0x21);
        }
      }
      else if (uVar1 < 0x4d) {
        cVar2 = (char)uVar1;
        if (cVar2 == '\r') {
          if (*(int *)0xb60f == 6) {
            FUN_1dea_0f3a(0x22);
            FUN_2163_1a10(1,1);
            return;
          }
          if (*(char *)0x93d4 == '\x01') {
            iVar7 = 2;
          }
          else {
            iVar7 = 1;
          }
          if ((*(int *)0xb60f < iVar7) || (5 < *(int *)0xb60f)) {
            iVar7 = 0x24e6;
            iVar5 = 0x1dea;
            iVar6 = 0x182b;
            FUN_1dea_0f3a(0x21);
          }
          else {
            iVar5 = 0x1dea;
            iVar6 = 0x1839;
            FUN_1dea_0f3a(0x22);
            if (*(char *)0x93d4 == '\0') {
              FUN_2163_0104();
              iVar6 = 0x1dea;
              iVar5 = 0x27d1;
              FUN_27d1_0f50(0x1dea,iVar3,uVar4);
              iVar7 = 0x1864;
              FUN_2163_0052();
            }
            else {
              iVar7 = FUN_2163_07d8();
            }
          }
        }
        else if (cVar2 == '\x1b') {
          iVar5 = 0x1dea;
          iVar6 = 0x17d9;
          FUN_1dea_0f3a(0x22);
          iVar7 = 1;
          *(undefined1 *)0x93d4 = 0;
        }
        else {
          if (cVar2 == 'D') goto LAB_2163_0290;
          if (cVar2 == 'H') goto LAB_2163_02d0;
        }
      }
    }
    else if (uVar1 == 100) {
LAB_2163_0290:
      if (((*(char *)0x93d4 == '\x02') && (*(char *)0x93d9 != '\0')) ||
         (iVar7 = FUN_2163_04ba((int)*(char *)0x93d6), iVar7 == 0)) {
LAB_2163_02d0:
        if ((*(int *)0xb60f < 1) || (5 < *(int *)0xb60f)) {
          iVar7 = 0x24e6;
          iVar5 = 0x1dea;
          iVar6 = 0x1915;
          FUN_1dea_0f3a(0x21);
        }
        else {
          iVar7 = 0x24e6;
          iVar5 = 0x1dea;
          iVar6 = 0x1923;
          FUN_1dea_0f3a(0x22);
          if (*(char *)0x93d4 == '\x02') {
            iVar7 = FUN_2163_07d8();
          }
          else {
            *(undefined1 *)0x93d7 = *(undefined1 *)0x93d6;
            if (*(char *)0x93d4 != '\0') {
              iVar7 = 1;
            }
            *(undefined1 *)0x93d4 = 2;
            if ((*(int *)0xb611 == 0x44) || (*(int *)0xb611 == 100)) {
              *(undefined1 *)0x93d9 = 1;
            }
            else {
              *(undefined1 *)0x93d9 = 0;
            }
          }
        }
      }
      else {
        FUN_24e6_088a(0x1021,3,0xc);
        *(undefined1 *)0x93d5 = 1;
        iVar7 = 0x24e6;
        iVar5 = 0x1dea;
        iVar6 = 0x18f9;
        FUN_1dea_0f3a(0x21);
      }
    }
    else {
      if (uVar1 == 0x68) goto LAB_2163_02d0;
      if (uVar1 == 0x6c) goto LAB_2163_033c;
      if (uVar1 == 0x70) goto LAB_2163_0238;
      if (uVar1 == 0x110) {
        iVar5 = 0x1dea;
        iVar7 = 0x17cf;
        FUN_1dea_0e98();
      }
    }
    if (*(char *)0x93d4 != iVar6) {
      FUN_2163_1a8c(0);
      iVar7 = iVar5;
    }
    if (iVar7 != 0) {
      FUN_2351_00d2();
      uStackY_a = 0;
      while (uStackY_a < 5) {
        FUN_2163_0900(uStackY_a,0);
        uStackY_a = 0x1acf;
      }
      FUN_2351_00ec();
      FUN_1d02_058a(0x880,0x86e);
    }
  } while( true );
}
