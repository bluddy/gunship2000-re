/* SETUP.GS2 1386:00b2 undefined FUN_1386_00b2(void) */
void __cdecl16far
FUN_1386_00b2(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  *(int *)0xd84 = *(int *)0xd84 + 1;
  uVar1 = thunk_FUN_111d_1b1e(*(undefined2 *)0x1f7c,*(int *)0xd84 * 0xc);
  *(undefined2 *)0x1f7c = uVar1;
  iVar2 = *(int *)0xd84 * 0xc + *(int *)0x1f7c;
  iVar3 = iVar2 + -0xc;
  *(undefined1 *)(iVar2 + -0xb) = param_1;
  *(undefined1 *)(iVar2 + -10) = param_2;
  *(undefined1 *)(iVar2 + -9) = param_3;
  *(undefined1 *)(iVar2 + -8) = param_4;
  *(undefined1 *)(iVar2 + -7) = param_5;
  *(undefined1 *)(iVar2 + -6) = param_6;
  *(undefined1 *)(iVar2 + -1) = 1;
  FUN_1386_03b4();
  uVar4 = (uint)*(byte *)(iVar3 + 4);
  FUN_130f_037e(*(undefined1 *)(iVar3 + 3));
  FUN_130f_0164(*(undefined1 *)(uVar4 + 9),*(undefined1 *)(uVar4 + 10));
  iVar2 = 1;
  FUN_1386_018a(1);
  uVar4 = (uint)(*(char *)(iVar2 + 2) != '\0');
  FUN_130f_037e(uVar4 * 2 + (uint)*(byte *)(iVar2 + 3),uVar4 + *(byte *)(iVar2 + 4));
  return;
}
