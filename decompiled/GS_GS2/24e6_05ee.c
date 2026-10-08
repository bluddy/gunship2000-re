/* GS.GS2 24e6:05ee undefined FUN_24e6_05ee(void) */
void __cdecl16far FUN_24e6_05ee(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  int iVar7;
  
  FUN_10bf_02c0();
  iVar7 = 0;
  do {
    if (iVar7 != 0) {
      *(undefined2 *)0xb60f = *(undefined2 *)0x954c;
      return;
    }
    FUN_212a_0000(1);
    uVar3 = FUN_1f32_01e8();
    *(undefined2 *)0xb611 = uVar3;
    if (*(int *)0x8c8 != 0) {
      FUN_1ef4_0306(*(undefined2 *)0xb60b,*(undefined2 *)0xb60d,0);
      iVar4 = FUN_1ef4_0058(0xb60b,0xb60d);
      if (iVar4 != *(int *)0x9580) {
        *(int *)0x9580 = iVar4;
        if (iVar4 == 1) {
          *(undefined2 *)0xb611 = 0xd;
        }
        if (iVar4 == 2) {
          *(undefined2 *)0xb611 = 8;
        }
      }
    }
    iVar4 = *(int *)0xb611;
    if (iVar4 < 0x149) {
      if (((0x146 < iVar4) || (iVar4 == 9)) || (iVar4 == 0x10f)) {
LAB_24e6_066e:
        FUN_24e6_08fe(*(undefined2 *)0xb611);
      }
    }
    else if (((iVar4 == 0x14b) || (iVar4 == 0x14d)) ||
            ((0 < iVar4 + -0x14e && (iVar4 + -0x14f < 2)))) goto LAB_24e6_066e;
    FUN_2351_01a4(*(undefined2 *)0xb60b,*(undefined2 *)0xb60d);
    FUN_2351_00d2();
    if (*(int *)0x9576 != 0 || *(int *)0x9574 != 0) {
      iVar7 = (*(code *)*(undefined2 *)0x9574)(0x2351);
    }
    FUN_1000_0052();
    FUN_202b_0282();
    FUN_2351_00ec();
    if ((*(char *)0xb613 != '\0') && (*(int *)0x954a != 0 || *(int *)0x9548 != 0)) {
      *(undefined1 *)0xb613 = 0;
      (*(code *)*(undefined2 *)0x9548)(0x2351);
    }
    FUN_1000_012e();
    FUN_202b_033e();
    uVar3 = FUN_106f_011c(*(undefined2 *)0xb60b,*(undefined2 *)0xb60d);
    puVar5 = (undefined2 *)FUN_106f_0430(uVar3);
    puVar6 = (undefined2 *)0x954c;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    if ((*(int *)0x957a != *(int *)0x954c) || (*(int *)0xb611 != 0)) {
      FUN_24e6_088a(0x9558,5,7);
      iVar7 = 1;
    }
    *(undefined2 *)0x957a = *(undefined2 *)0x954c;
    if (*(int *)0x9572 != *(int *)0x9556) {
      if (*(int *)0x9556 == 0) {
        FUN_2351_0008(*(int *)0x9570 * 2 + -0x60e4,4);
      }
      else {
        FUN_2351_0008(*(int *)0x9578 * 2 + -0x60e4,4);
        FUN_2351_0240(*(undefined2 *)0x957c,*(undefined2 *)0x957e);
      }
      *(undefined2 *)0x9572 = *(undefined2 *)0x9556;
    }
  } while( true );
}
