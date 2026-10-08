/* GS.GS2 24e6:07aa undefined FUN_24e6_07aa(void) */
void __cdecl16far FUN_24e6_07aa(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  FUN_10bf_02c0();
  iVar3 = 0;
  while (iVar3 == 0) {
    FUN_212a_0000(1);
    uVar2 = 0x1f32;
    uVar1 = FUN_1f32_01e8();
    *(undefined2 *)0xb611 = uVar1;
    if (*(int *)0x8c8 != 0) {
      uVar2 = 0x1ef4;
      iVar3 = FUN_1ef4_0058(0,0);
      if (iVar3 != *(int *)0x9582) {
        *(int *)0x9582 = iVar3;
        if (iVar3 == 1) {
          *(undefined2 *)0xb611 = 0xd;
        }
        if (iVar3 == 2) {
          *(undefined2 *)0xb611 = 8;
        }
      }
    }
    if (*(int *)0x9576 != 0 || *(int *)0x9574 != 0) {
      (*(code *)*(undefined2 *)0x9574)(uVar2);
    }
    FUN_1000_0052();
    FUN_202b_0282();
    FUN_2351_00ec();
    if ((*(char *)0xb613 != '\0') && (*(int *)0x954a != 0 || *(int *)0x9548 != 0)) {
      *(undefined1 *)0xb613 = 0;
      (*(code *)*(undefined2 *)0x9548)(0x2351);
    }
    FUN_1000_012e();
    iVar3 = 0x56b0;
    FUN_202b_033e();
    if (*(int *)0xb611 != 0) {
      iVar3 = 1;
    }
  }
  return;
}
