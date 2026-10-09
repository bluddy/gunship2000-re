/* GS.GS2 2000:d46e undefined FUN_2000_d46e(void) */
undefined2 __cdecl16far FUN_2000_d46e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int unaff_DI;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int iVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  
  func_0x00000eb0();
  *(undefined1 *)0xe293 = 1;
  iVar6 = 0;
  do {
    if (3 < iVar6) {
LAB_2000_d4a8:
      for (puVar7 = (undefined2 *)0x0; (int)puVar7 < 4; puVar7 = (undefined2 *)((int)puVar7 + 1)) {
        if ((*(char *)((int)puVar7 * 0x29 + -0x52aa) == '\0') ||
           ((*(byte *)(puVar7 + -0x222b) & 0x18) != 0)) {
          uVar8 = 0xbf;
          for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
            uVar5 = uVar8;
            if (iVar6 == 0) {
              uVar5 = 0x139c;
              iVar6 = -0x2b0a;
              unaff_DI = func_0x000139c8(uVar8,0x21);
            }
            if (*(char *)(iVar6 * 0x29 + -0x52a8) == unaff_DI) {
              iVar6 = -1;
            }
            uVar8 = uVar5;
          }
          do {
            iVar6 = func_0x00013a46(uVar8,0x4a);
            uVar5 = *(undefined2 *)(iVar6 * 2 + 0x5aee);
            iVar6 = FUN_2000_d5be(uVar5,uVar5);
            uVar8 = 0x139c;
          } while (iVar6 == 0);
          func_0x0000382a(0x139c,0xad4e,0,8);
          *(undefined1 *)0xad55 = 1;
          *(undefined1 *)0xad56 = 1;
          *(undefined1 *)0xad57 = 1;
          *(undefined1 *)0xad58 = (char)unaff_DI;
          puVar3 = (undefined2 *)0xad34;
          puVar7 = puVar3;
          func_0x00002dc6(0xbf,0xad34,uVar5);
          puVar4 = (undefined2 *)(*(char *)0xe281 * 0x122 + -0x51a4);
          for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar4;
            puVar4 = puVar4 + 1;
            puVar1 = puVar3;
            puVar3 = puVar3 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        }
      }
      iVar6 = func_0x0000e57c(0xbf);
      if (iVar6 == 0) {
        uVar8 = 0xdea;
        iVar6 = func_0x0000e594();
        if ((iVar6 == 0) && (*(char *)0xad0a != '\v')) {
          return uVar8;
        }
      }
      return 0;
    }
    if (*(char *)(iVar6 * 0x29 + -0x52aa) != '\0') {
      *(undefined1 *)0xe293 = 0;
      goto LAB_2000_d4a8;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
