/* GS.GS2 2658:08d1 undefined FUN_2658_08d1(void) */
undefined2 FUN_2658_08d1(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint in_DX;
  undefined2 unaff_DS;
  int in_stack_00000000;
  
  uVar1 = *(uint *)0x6803;
  if (in_stack_00000000 != 0x862) {
    uVar1 = *(uint *)0x6801;
  }
  uVar2 = 0x7f00;
  if ((int)(in_DX ^ uVar1) < 0) {
    uVar2 = 0x8100;
  }
  return uVar2;
}
