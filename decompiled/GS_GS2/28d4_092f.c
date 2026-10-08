/* GS.GS2 28d4:092f undefined FUN_28d4_092f(void) */
undefined4 __cdecl16near FUN_28d4_092f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 in_AX;
  undefined2 in_DX;
  int in_BX;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)(in_BX + 4);
  *(undefined2 *)(in_BX + 4) = 0;
  iVar2 = *(int *)(in_BX + 6);
  *(undefined2 *)(in_BX + 6) = 0;
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)((iVar1 + -1) * 8 + DAT_28d4_006c + 6) = iVar2;
    iVar3 = DAT_28d4_0072;
  }
  DAT_28d4_0072 = iVar3;
  if (iVar2 != 0) {
    *(int *)((iVar2 + -1) * 8 + DAT_28d4_006c + 4) = iVar1;
    iVar1 = DAT_28d4_0074;
  }
  DAT_28d4_0074 = iVar1;
  return CONCAT22(in_DX,in_AX);
}
