/* GS2.GS2 1000:09fc undefined FUN_1000_09fc(void) */
undefined2 __cdecl16far FUN_1000_09fc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x1330;
  uVar3 = 0x1000;
  while (iVar1 != 0) {
    thunk_EXT_FUN_0000_0000(uVar3);
    uVar3 = 0x171d;
    iVar1 = *(int *)0x1330;
  }
  uVar2 = 0x1851;
  FUN_1851_0cf5(uVar3);
  if (param_3 != 0 || param_2 != 0) {
    uVar2 = 0x137f;
    thunk_EXT_FUN_0000_0000(0x1851,*(undefined2 *)0xfe,param_1,param_2,param_3,0x1812);
    param_1 = param_1 + 10;
  }
  uVar3 = uVar2;
  if (param_5 != 0 || param_4 != 0) {
    uVar3 = 0x137f;
    thunk_EXT_FUN_0000_0000(uVar2,*(undefined2 *)0xfe,param_1,param_4,param_5,0x1812);
    param_1 = param_1 + 10;
  }
  thunk_EXT_FUN_0000_0000(uVar3,*(undefined2 *)0xfe,param_1,0x15a,0x3a29,0x1812);
  thunk_EXT_FUN_0000_0000(0x137f,*(undefined2 *)0xfe,0x46,0x28,0x3a29,0x1812);
  thunk_EXT_FUN_0000_0000(0x137f);
  FUN_171d_0273();
  iVar1 = *(int *)0x1330;
  do {
    if (iVar1 != 0) {
LAB_1000_0ac0:
      iVar1 = *(int *)0x1330;
      while (iVar1 != 0) {
        thunk_EXT_FUN_0000_0000(0x171d);
        iVar1 = *(int *)0x1330;
      }
      FUN_171d_0273();
      return 0;
    }
    iVar1 = FUN_171d_0293();
    if (iVar1 != 0) {
      if (iVar1 == 0x11b) {
        return 1;
      }
      goto LAB_1000_0ac0;
    }
    thunk_EXT_FUN_0000_0000(0x171d);
    iVar1 = *(int *)0x1330;
  } while( true );
}
