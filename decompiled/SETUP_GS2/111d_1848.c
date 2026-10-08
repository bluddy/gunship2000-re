/* SETUP.GS2 111d:1848 undefined FUN_111d_1848(void) */
undefined2 __cdecl16far FUN_111d_1848(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int in_DX;
  undefined2 unaff_DS;
  bool bVar2;
  long lVar3;
  
  if ((((*(byte *)(param_1 + 6) & 0x83) == 0) || (2 < param_4)) || (param_4 < 0)) {
    *(undefined2 *)0x970 = 0x16;
  }
  else {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xef;
    if (param_4 == 1) {
      uVar1 = FUN_111d_18c8(param_1);
      bVar2 = CARRY2(param_2,uVar1);
      param_2 = param_2 + uVar1;
      param_3 = param_3 + in_DX + (uint)bVar2;
      param_4 = 0;
    }
    FUN_111d_0aae(param_1);
    if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc;
    }
    lVar3 = FUN_111d_10b2(0x111d,*(undefined1 *)(param_1 + 7),param_2,param_3,param_4);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return 0xffff;
}
