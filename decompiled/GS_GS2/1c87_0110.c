/* GS.GS2 1c87:0110 undefined FUN_1c87_0110(void) */
void __cdecl16far FUN_1c87_0110(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  *(undefined2 *)0x8570 = param_1;
  *(undefined2 *)(*(int *)0x8560 + 0x10) = param_1;
  uVar1 = thunk_EXT_FUN_0000_0000(0x10bf,*(undefined2 *)0x8570);
  *(undefined2 *)0x8572 = uVar1;
  return;
}
