/* GS.GS2 165c:19d8 undefined FUN_165c_19d8(void) */
int __cdecl16far
FUN_165c_19d8(uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
             uint param_7,int param_8)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int iVar13;
  
  FUN_10bf_02c0();
  uVar11 = 0;
  uVar8 = 0x8000;
  uVar1 = FUN_165c_0cb2(param_1,param_2,param_3,param_4,*(undefined2 *)0xb90e,*(undefined2 *)0xb910,
                        *(undefined2 *)0xb912,*(undefined2 *)0xb914,0x8000,0);
  FUN_10bf_2efc(uVar1,in_DX,uVar8,uVar11);
  uVar12 = 0;
  uVar11 = 0x8000;
  uVar1 = extraout_DX;
  uVar8 = FUN_165c_0cb2(param_5,param_6,param_7,param_8,*(undefined2 *)0xb90e,*(undefined2 *)0xb910,
                        *(undefined2 *)0xb912,*(undefined2 *)0xb914,0x8000,0);
  iVar2 = FUN_10bf_2efc(uVar8,uVar1,uVar11,uVar12);
  iVar13 = 0;
  uVar9 = 0x8000;
  uVar1 = *(undefined2 *)0xb914;
  uVar8 = *(undefined2 *)0xb912;
  uVar11 = *(undefined2 *)0xb910;
  uVar12 = *(undefined2 *)0xb90e;
  uVar6 = FUN_10bf_2efc(param_7 + param_3,param_8 + param_4 + (uint)CARRY2(param_7,param_3),2,0);
  uVar7 = FUN_10bf_2efc(param_5 + param_1,param_6 + param_2 + (uint)CARRY2(param_5,param_1),2,0);
  uVar5 = (undefined2)((ulong)uVar7 >> 0x10);
  uVar1 = FUN_165c_0cb2(uVar7,uVar6,uVar12,uVar11,uVar8,uVar1,uVar9);
  FUN_10bf_2efc(uVar1,uVar5,uVar9,iVar13);
  iVar13 = FUN_10bf_2cc8(iVar13 + -7);
  iVar4 = iVar2 + -7;
  iVar10 = 0x10bf;
  iVar3 = FUN_10bf_2cc8();
  return (((iVar3 + iVar13) - iVar10) * 2 - iVar2) - iVar4;
}
