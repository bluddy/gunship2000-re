/* GS.GS2 2000:e288 undefined FUN_2000_e288(void) */
void __cdecl16far FUN_2000_e288(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  func_0x00000eb0();
  param_1 = param_1 * 0x36;
  iVar3 = *(int *)(param_1 + -0x49ce);
  iVar1 = (int)*(char *)(param_1 + -0x49c8);
  iVar2 = (int)*(char *)(param_1 + -0x49c7);
  func_0x00016e72(0xbf,0x880,*(int *)(param_1 + -0x49d0),iVar3,*(int *)(param_1 + -0x49d0) + iVar1,
                  iVar3,4,iVar2,iVar1);
  iVar2 = iVar2 + iVar3;
  iVar1 = iVar1 + 4;
  func_0x00016e72(0x1658,0x880,iVar1,iVar2,iVar1);
  iVar3 = iVar2;
  func_0x00016e72(0x1658,0x880,iVar1,iVar2,4,iVar2);
  func_0x00016e72(0x1658,0x880,4,iVar2,4,iVar3);
  return;
}
