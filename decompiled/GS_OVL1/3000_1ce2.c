/* GS.GS2 3000:1ce2 undefined FUN_3000_1ce2(void) */
void __cdecl16far FUN_3000_1ce2(undefined2 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar1 = *param_3;
  iVar2 = *(int *)0xc354;
  iVar3 = *param_4;
  iVar4 = *(int *)0xc356;
  FUN_3000_0fbc(1);
  func_0x0000ef70(0xbf,iVar1 - iVar2,iVar3 - iVar4,0x141 - *(int *)0xc35a,0xc9 - *(int *)0xc35c);
  uVar5 = 0xef4;
  while (*param_2 != 0) {
    *(int *)0xc354 = *param_3 - (iVar1 - iVar2);
    *(int *)0xc356 = *param_4 - (iVar3 - iVar4);
    *(int *)(*(int *)0xc358 + 1) = *param_3;
    *(int *)(*(int *)0xc358 + 3) = *param_4;
    FUN_3000_19cc();
    func_0x0001afe8(uVar5,param_1,param_2,param_3,param_4);
    uVar5 = 0x1abf;
  }
  *(undefined2 *)0xc38c = *(undefined2 *)0xc354;
  *(undefined2 *)0xc4ce = *(undefined2 *)0xc356;
  func_0x0000ef70(uVar5,0,0,0x140,200);
  FUN_3000_0fbc(4);
  return;
}
