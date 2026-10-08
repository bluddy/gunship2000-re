/* GS.GS2 10bf:23dc undefined FUN_10bf_23dc(void) */
void __cdecl16far FUN_10bf_23dc(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = FUN_10bf_2234(param_1);
    FUN_10bf_1e72(0x10bf,2,param_1,uVar1);
    FUN_10bf_1e72(0x10bf,2,0x6b98,2);
  }
  if ((*(int *)0x6864 < 0) || (*(int *)0x6d24 <= *(int *)0x6864)) {
    iVar2 = *(int *)0x6d24;
  }
  else {
    iVar2 = *(int *)0x6864;
  }
  uVar1 = *(undefined2 *)(iVar2 * 2 + 0x6cd8);
  uVar3 = FUN_10bf_2234(uVar1);
  FUN_10bf_1e72(0x10bf,2,uVar1,uVar3);
  FUN_10bf_1e72(0x10bf,2,0x6b9b,1);
  return;
}
