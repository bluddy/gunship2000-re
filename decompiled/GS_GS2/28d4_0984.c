/* GS.GS2 28d4:0984 undefined FUN_28d4_0984(void) */
undefined4 __cdecl16near FUN_28d4_0984(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 in_AX;
  undefined2 in_DX;
  int in_BX;
  int iVar3;
  undefined2 unaff_DS;
  
  *(int *)(in_BX + 6) = DAT_28d4_0072;
  uVar1 = in_AX;
  uVar2 = in_AX;
  if (DAT_28d4_0072 != 0) {
    iVar3 = DAT_28d4_0072 + -1;
    DAT_28d4_0072 = in_AX;
    *(undefined2 *)(iVar3 * 8 + DAT_28d4_006c + 4) = in_AX;
    uVar1 = DAT_28d4_0072;
    uVar2 = DAT_28d4_0074;
  }
  DAT_28d4_0074 = uVar2;
  DAT_28d4_0072 = uVar1;
  return CONCAT22(in_DX,in_AX);
}
