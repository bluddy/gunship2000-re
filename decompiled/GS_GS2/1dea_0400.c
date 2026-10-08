/* GS.GS2 1dea:0400 undefined FUN_1dea_0400(void) */
void __cdecl16far FUN_1dea_0400(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  int iVar9;
  
  uVar7 = 0x10bf;
  FUN_10bf_02c0();
  bVar3 = false;
  iVar9 = 0;
  do {
    if ((((*(char *)0x860f == '\0') && (iVar9 == 0)) || (iVar9 == 2)) ||
       ((*(char *)0xad1b != '\x04' || (uVar8 = uVar7, *(char *)0xad0c != '\x01')))) {
      bVar3 = true;
      uVar8 = 0x27d1;
      iVar4 = FUN_27d1_0e9c(uVar7);
      if (iVar4 == 1) {
        return;
      }
    }
    FUN_1dea_0f8a();
    if (*(char *)0xad1b == '\x02') {
      iVar4 = FUN_27d1_0e92(uVar8);
      if (iVar4 != 0) goto LAB_1dea_04bf;
    }
    else {
      if ((*(char *)0xad1b == '\x04') && (*(char *)0xad05 == '\0')) {
        FUN_1b1d_012c();
        FUN_165c_000e((int)*(char *)0x8616,0);
      }
      else if ((*(char *)0xad1b == '\x04') && (*(char *)0xad05 == '\x02')) {
        FUN_1b1d_01be();
        FUN_165c_000e((int)*(char *)0x8616,1);
      }
      else {
        FUN_165c_000e((int)*(char *)0x8616,0);
      }
LAB_1dea_04bf:
      if (bVar3) {
        bVar3 = false;
        FUN_1d02_0d2a(1);
      }
      FUN_1dea_0334();
      FUN_1d02_0d2a(1);
      iVar9 = FUN_27d1_0e88(0x1d02);
      if (iVar9 == 0) {
        return;
      }
      if (iVar9 == 2) {
        FUN_1b1d_0190();
        FUN_1c6b_0116();
      }
      else if (iVar9 == 3) {
        *(undefined1 *)0xad1b = 3;
        if (*(int *)0xad0f < 3000) {
          *(int *)0xad0f = *(int *)0xad0f + 500;
        }
        *(undefined1 *)0xad05 = 0;
      }
      else if (*(char *)0xad1b != '\0') {
        if (*(int *)0xad0f < 3000) {
          *(int *)0xad0f = *(int *)0xad0f + 300;
        }
        if (*(char *)0xad1b == '\x04') {
          *(char *)0xad06 = *(char *)0xad06 + '\x01';
          *(char *)0xad08 = *(char *)0xad08 + '\x01';
        }
      }
      puVar6 = (undefined2 *)(*(char *)0xe281 * 0x122 + -0x5222);
      puVar5 = (undefined2 *)0xacb6;
      for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
    }
    uVar7 = 0x1c6b;
    FUN_1c6b_0116();
  } while( true );
}
