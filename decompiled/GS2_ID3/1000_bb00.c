/* GS2.GS2 1000:bb00 undefined FUN_1000_bb00(void) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1000_bb00(void)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined2 unaff_CS;
  undefined2 uVar8;
  undefined2 unaff_DS;
  undefined4 uStack_10;
  int iStack_c;
  
  if (DAT_3000_ec06 == 0) {
    return;
  }
  if ((DAT_3000_ec06 & 0x10) == 0) {
    if ((DAT_3000_ec06 & 4) == 0) goto LAB_1000_bc7c;
    if (*(char *)0xde != '\0') {
      func_0x0000844b();
      unaff_CS = 0x844;
      func_0x0000844b(0x844,0x11);
    }
    if (*(int *)0xad1 != 0) goto LAB_1000_bc6e;
    uVar5 = 1;
    uStack_10 = (byte *)CONCAT22(*(undefined2 *)0x32de,(byte *)0x2d0c);
    if (1 < (uint)(0x2000 / (long)*(int *)0x2d0c)) {
      do {
        uVar3 = func_0x00005828(unaff_CS);
        if (*(char *)0x3bbe == '\0') {
          uVar7 = (uVar5 & 1) + 0x42;
        }
        else {
          uVar7 = uVar5 & 0xc;
        }
        unaff_CS = 0x37f;
        func_0x00005710(0x37f,uVar3 % 0x148,uVar3 / 0x148,uVar7);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(0x2000 / (long)*(int *)uStack_10));
    }
    if ((*uStack_10 & 1) != 0) goto LAB_1000_bbb6;
    uVar8 = 2;
  }
  else {
    if (*(char *)0xde != '\0') {
      func_0x0000844b();
      unaff_CS = 0x844;
      func_0x0000844b(0x844,0x28);
    }
    if (*(int *)0xad1 != 0) {
LAB_1000_bc6e:
      func_0x0000656f(unaff_CS,0x3b98,0x60);
      unaff_CS = 0x37f;
      goto LAB_1000_bc7c;
    }
    uVar5 = 0;
    uStack_10 = (byte *)CONCAT22(*(undefined2 *)0x32de,(byte *)0x2d0c);
    if ((int)(0x7fff / (long)*(int *)0x2d0c) != 0) {
      do {
        uVar3 = func_0x00005828(unaff_CS);
        if (*(char *)0x3bbe == '\0') {
          uVar7 = (uVar5 & 1) + 0x42;
        }
        else {
          uVar7 = uVar5 & 0xc;
        }
        unaff_CS = 0x37f;
        func_0x00005710(0x37f,uVar3 % 0x148,uVar3 / 0x148,uVar7);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(0x7fff / (long)*(int *)uStack_10));
    }
    if ((*uStack_10 & 1) == 0) {
      uVar8 = 4;
    }
    else {
LAB_1000_bbb6:
      uVar8 = 0;
    }
  }
  func_0x00005182(unaff_CS,uVar8);
  unaff_CS = 0x37f;
LAB_1000_bc7c:
  piVar1 = (int *)0x2d0c;
  *piVar1 = *piVar1 + -1;
  uVar8 = unaff_CS;
  if (*piVar1 == 0) {
    *(undefined2 *)0x3104 = 0;
    uVar8 = 0x2a2;
    func_0x000035b9(unaff_CS,0x3bac,0xffff);
  }
  if ((((*(byte *)0x593e & 0x10) != 0) && (*(int *)0xad1 != 0xb)) && (*(char *)0x3bbe == '\0')) {
    pbVar6 = (byte *)*(undefined2 *)0x19b4;
    uVar2 = *(undefined2 *)0x19b6;
    pbVar4 = pbVar6 + 1;
    iStack_c = 0x100;
    do {
      *pbVar6 = *pbVar6 - (*pbVar6 >> 2);
      *pbVar4 = *pbVar4 - (*pbVar4 >> 2);
      pbVar6[2] = pbVar6[2] - (pbVar6[2] >> 2);
      pbVar6 = pbVar6 + 3;
      pbVar4 = pbVar4 + 3;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
    unaff_DS = 0x406a;
    func_0x0000512d(uVar8,0,0x100,*(undefined2 *)0x19b4,*(undefined2 *)0x19b6);
  }
  if ((*(byte *)0xde & 0x80) != 0) {
    *(byte *)0xde = *(byte *)0xde ^ 0x80;
  }
  *(undefined2 *)0xaf3 = 0;
  return;
}
