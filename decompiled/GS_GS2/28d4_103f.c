/* GS.GS2 28d4:103f undefined FUN_28d4_103f(void) */
undefined4 __cdecl16near FUN_28d4_103f(void)

{
  uint in_AX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 in_CX;
  undefined2 in_DX;
  uint in_BX;
  
  uVar3 = in_BX & 0xff00;
  DAT_28d4_103a = FUN_28d4_1294();
  DAT_28d4_103b = uVar3;
  DAT_28d4_103d = in_CX;
  if (in_AX == 0) {
    FUN_28d4_10b7();
    FUN_28d4_10b7();
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_28d4_10b7();
    iVar2 = FUN_28d4_10b7();
    uVar3 = -(iVar2 - in_AX);
    if (0 < (int)(iVar2 - in_AX)) {
      uVar3 = 0;
    }
    if (in_AX <= uVar3) {
      uVar3 = in_AX;
    }
    if (uVar1 <= uVar3) {
      uVar3 = uVar1;
    }
  }
  return CONCAT22(in_DX,uVar3);
}
