/* GS.GS2 3000:18fa undefined FUN_3000_18fa(void) */
undefined2 __cdecl16far FUN_3000_18fa(undefined2 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar2 = 0xbf;
  func_0x00000eb0();
  FUN_3000_15c6(1);
  *(undefined1 *)0xe28f = 0;
  while (*param_2 != 0) {
    iVar1 = *(int *)(*(int *)0xc358 + 1) - *param_3;
    if ((iVar1 != 0) || (uVar3 = uVar2, *param_4 != *(int *)(*(int *)0xc358 + 3))) {
      func_0x0000582f(uVar2,iVar1);
      func_0x00005b29(0xbf,0xbc96);
      func_0x000058f7(0xbf);
      func_0x0000582f(0xbf);
      func_0x00005b29(0xbf,0xbc9a);
      uVar3 = 0xbf;
      func_0x000058f7(0xbf);
      *(int *)(*(int *)0xc358 + 1) = *param_3;
      *(int *)(*(int *)0xc358 + 3) = *param_4;
      FUN_3000_1abe();
    }
    uVar2 = 0x1abf;
    func_0x0001afe8(uVar3,param_1,param_2,param_3,param_4);
  }
  FUN_3000_15c6(0);
  *(undefined1 *)0xe28f = 1;
  uVar2 = 0x19c2;
  FUN_3000_1008();
  return uVar2;
}
