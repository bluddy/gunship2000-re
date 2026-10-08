/* SETUP.GS2 111d:1a98 undefined FUN_111d_1a98(void) */
undefined2 __cdecl16far FUN_111d_1a98(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  long lVar2;
  long lVar3;
  
  if ((param_1 < 0) || (*(int *)0x97d <= param_1)) {
    *(undefined2 *)0x970 = 9;
    uVar1 = 0xffff;
  }
  else {
    lVar2 = FUN_111d_10b2(0x111d,param_1,0,0,1);
    if (lVar2 == -1) {
      uVar1 = 0xffff;
    }
    else {
      lVar3 = FUN_111d_10b2(0x111d,param_1,0,0,2);
      uVar1 = (undefined2)lVar3;
      if (lVar3 != lVar2) {
        FUN_111d_10b2(0x111d,param_1,lVar2,0);
      }
    }
  }
  return uVar1;
}
