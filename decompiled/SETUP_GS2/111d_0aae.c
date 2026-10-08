/* SETUP.GS2 111d:0aae undefined FUN_111d_0aae(void) */
undefined2 __cdecl16far FUN_111d_0aae(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_111d_0b2a(0);
  }
  else {
    if (((*(byte *)(param_1 + 3) & 3) == 2) &&
       (((*(byte *)(param_1 + 3) & 8) != 0 || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) {
      iVar1 = *param_1 - param_1[2];
      if (0 < iVar1) {
        iVar2 = FUN_111d_13d2(0x111d,*(undefined1 *)((int)param_1 + 7),param_1[2],iVar1);
        if (iVar1 != iVar2) {
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
          uVar3 = 0xffff;
        }
      }
    }
    *param_1 = param_1[2];
    param_1[1] = 0;
  }
  return uVar3;
}
