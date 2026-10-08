/* SETUP.GS2 111d:05fc undefined FUN_111d_05fc(void) */
undefined2 __cdecl16far FUN_111d_05fc(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  char local_10;
  undefined1 uStack_f;
  undefined1 local_e [8];
  int iStack_6;
  undefined1 *puStack_4;
  
  uVar2 = 0xffff;
  if (((*(byte *)(param_1 + 6) & 0x40) != 0) || ((*(byte *)(param_1 + 6) & 0x83) == 0))
  goto LAB_111d_06aa;
  uVar2 = FUN_111d_0aae(param_1);
  iStack_6 = *(int *)(param_1 + 0xa4);
  FUN_111d_0956(param_1);
  iVar1 = FUN_111d_1092(0x111d,*(undefined1 *)(param_1 + 7));
  if (-1 < iVar1) {
    if (iStack_6 == 0) goto LAB_111d_06aa;
    FUN_111d_1736(&local_10,0x9c8);
    puStack_4 = local_e;
    if (local_10 == '\\') {
      puStack_4 = &uStack_f;
    }
    else {
      FUN_111d_16f6(&local_10,0x9ca);
    }
    FUN_111d_17ac(0x111d,iStack_6,puStack_4,10);
    iVar1 = FUN_111d_1d1c(0x111d,&local_10);
    if (iVar1 == 0) goto LAB_111d_06aa;
  }
  uVar2 = 0xffff;
LAB_111d_06aa:
  *(undefined1 *)(param_1 + 6) = 0;
  return uVar2;
}
