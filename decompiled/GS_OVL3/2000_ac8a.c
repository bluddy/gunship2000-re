/* GS.GS2 2000:ac8a undefined FUN_2000_ac8a(void) */
void __cdecl16far FUN_2000_ac8a(void)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  int iVar4;
  
  uVar2 = 0xbf;
  func_0x00000eb0();
  do {
    while( true ) {
      func_0x0001544e(uVar2);
      iVar4 = *(int *)0xb60f;
      if (*(int *)0xb611 != 0xd) break;
      if ((iVar4 < 1) || (*(char *)0x9bc6 < iVar4)) {
        if (*(char *)0x9bc6 < iVar4) {
          FUN_2000_bad2(1,1);
          for (iVar4 = 0; iVar4 < *(char *)0x9bc6; iVar4 = iVar4 + 1) {
            if (*(char *)(iVar4 + -0x6438) == '\0') {
              pcVar1 = (char *)(*(char *)(iVar4 + -0x643e) * 0x29 + -0x52aa);
              *pcVar1 = *pcVar1 + '\x01';
            }
            else {
              pcVar1 = (char *)((int)*(char *)(iVar4 + -0x6438) + *(char *)(iVar4 + -0x643e) * 0x29
                               + -0x52b2);
              *pcVar1 = *pcVar1 + '\x01';
            }
          }
          for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
            if ((*(byte *)(iVar4 + -0x4456) & 0x14) != 0) {
              pcVar1 = (char *)(iVar4 * 0x29 + -0x52ac);
              *pcVar1 = *pcVar1 + '\x01';
            }
          }
          return;
        }
      }
      else if (*(char *)(iVar4 + -0x6439) == '\0') {
        do {
          *(char *)(iVar4 + -0x643f) = *(char *)(iVar4 + -0x643f) + '\x01';
          *(char *)(iVar4 + -0x643f) = *(char *)(iVar4 + -0x643f) % '\x04';
        } while (*(char *)0xad0a + -1 <= (int)*(char *)(*(char *)(iVar4 + -0x643f) * 0x29 + -0x52aa)
                );
      }
      else {
        *(char *)(iVar4 + -0x643f) = *(char *)(iVar4 + -0x643f) + '\x01';
        *(char *)(iVar4 + -0x643f) = *(char *)(iVar4 + -0x643f) % '\x04';
        for (iVar3 = 0; iVar3 < *(char *)0x9bc6; iVar3 = iVar3 + 1) {
          if (((*(char *)(iVar3 + -0x6438) != '\0') && (iVar3 - iVar4 != -1)) &&
             (*(char *)(iVar3 + -0x643e) == *(char *)(iVar4 + -0x643f))) {
            *(char *)(iVar4 + -0x643f) = *(char *)(iVar4 + -0x643f) + '\x01';
            *(char *)(iVar4 + -0x643f) = *(char *)(iVar4 + -0x643f) % '\x04';
          }
        }
      }
LAB_2000_ade0:
      if (*(int *)0xb611 == 0xd) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      func_0x000135e2(0x14e6,uVar2);
      for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
        FUN_2000_ae4a(iVar4,uVar2);
      }
      FUN_2000_b4f2(0);
      func_0x000135fc(0x1351);
      uVar2 = 0xd02;
      func_0x0000d5aa(0x1351,0x880,0x86e);
    }
    if (*(int *)0xb611 != 0x110) goto LAB_2000_ade0;
    uVar2 = 0xdea;
    func_0x0000ed38(0x14e6);
  } while( true );
}
