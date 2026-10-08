/* GS.GS2 165c:2658 undefined FUN_165c_2658(void) */
void __cdecl16far FUN_165c_2658(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  param_1 = param_1 * 0x20;
  uVar1 = FUN_10bf_2efc(*(undefined2 *)(param_1 + -0x5d7a),*(undefined2 *)(param_1 + -0x5d78),0x8000
                        ,0);
  uVar2 = FUN_10bf_2efc(*(undefined2 *)(param_1 + -0x5d7e),*(undefined2 *)(param_1 + -0x5d7c),0x8000
                        ,0);
  uVar3 = FUN_10bf_2efc(*(undefined2 *)0xadd8,*(undefined2 *)0xadda,0x8000,0);
  uVar4 = FUN_10bf_2efc(*(undefined2 *)0xacb2,*(undefined2 *)0xacb4,0x8000,0);
  FUN_165c_0d2e(uVar4,uVar3,uVar2,uVar1);
  return;
}
