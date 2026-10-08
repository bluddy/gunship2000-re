/* GS.GS2 165c:1888 undefined FUN_165c_1888(void) */
undefined2 __cdecl16far FUN_165c_1888(undefined2 param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined2 uVar7;
  int iVar8;
  
  FUN_10bf_02c0();
  iVar8 = 0;
  do {
    if (99 < iVar8) {
      return 1;
    }
    FUN_165c_1152((param_2 & 0x20) != 0);
    iVar8 = 0x7e9c;
    iVar1 = FUN_165c_2658(*(undefined2 *)0xaca8);
    if (3 < iVar1) {
      uVar2 = FUN_10bf_2efc(*(undefined2 *)0xaca0,*(undefined2 *)0xaca2,0x8000,0);
      uVar3 = FUN_10bf_2efc(*(undefined2 *)0xa27c,*(undefined2 *)0xa27e,0x8000,0);
      iVar8 = 0x10bf;
      iVar1 = FUN_165c_2616(uVar3,uVar2);
      if (5 < iVar1) {
        iVar8 = 0x10bf;
        iVar1 = FUN_165c_2616(*(undefined2 *)0xaddc,*(undefined2 *)0xb5cc);
        if (*(int *)0xb5ce <= iVar1) {
          uVar3 = FUN_10bf_2efc(*(undefined2 *)0xaca0,*(undefined2 *)0xaca2,0x2000,0);
          uVar4 = FUN_10bf_2efc(*(undefined2 *)0xacb2,*(undefined2 *)0xacb4,0x2000,0);
          uVar5 = FUN_10bf_2efc(*(undefined2 *)0xadd8,*(undefined2 *)0xadda,0x2000,0);
          uVar2 = *(undefined2 *)0xb8e2;
          uVar6 = FUN_10bf_2efc(*(undefined2 *)0xa27c,*(undefined2 *)0xa27e,0x2000,0);
          uVar7 = 0x10bf;
          iVar8 = FUN_165c_1590(uVar6,uVar3,uVar4,uVar5,param_1,uVar6);
          if (iVar8 != 0) {
            *(undefined2 *)0xb8e2 = uVar2;
            *(undefined2 *)0xb8dc = uVar7;
            return 1;
          }
          return 0;
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}
