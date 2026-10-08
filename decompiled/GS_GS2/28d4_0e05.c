/* GS.GS2 28d4:0e05 undefined FUN_28d4_0e05(void) */
undefined2 __cdecl16far FUN_28d4_0e05(void)

{
  int in_AX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined2 in_CX;
  uint in_DX;
  int in_BX;
  undefined2 unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  DAT_28d4_101f = in_CX;
  if (in_BX != 1) {
    uVar1 = in_AX + 1U >> 1;
    uVar2 = FUN_28d4_103f();
    DAT_28d4_101d = uVar2 & 0xfff8;
    if (uVar1 <= DAT_28d4_101d) {
      DAT_28d4_101c = 'E';
    }
    unaff_DI[1] = DAT_28d4_101d << 1;
    iVar3 = FUN_28d4_103f();
    unaff_DI[2] = iVar3 << 1;
    if (unaff_DI[2] == 0 && unaff_DI[1] == 0) {
      FUN_28d4_103f();
    }
    bVar4 = 7;
    uVar2 = FUN_28d4_103f();
    if ((DAT_28d4_101d < uVar2) && (DAT_28d4_101d = uVar2, uVar1 <= uVar2)) {
      DAT_28d4_101c = 'C';
    }
    *unaff_DI = uVar2 << (bVar4 & 0x1f);
    iVar3 = uVar1 * 2;
    if (DAT_28d4_101c == 'N') {
      *unaff_DI = 0;
      unaff_DI[2] = 0;
      unaff_DI[1] = 0;
    }
    else {
      if (DAT_28d4_101c == 'C') {
        in_DX = in_DX + uVar1 * -2;
      }
      else {
        iVar3 = 0;
      }
      if (in_DX < unaff_DI[1]) {
        in_DX = in_DX + 0xf & 0xfff0;
        unaff_DI[1] = in_DX;
      }
      uVar1 = in_DX - unaff_DI[1];
      if (uVar1 < unaff_DI[2]) {
        unaff_DI[2] = uVar1;
      }
      uVar1 = (uVar1 - unaff_DI[2]) + iVar3;
      if ((uVar1 < 0x280) && (uVar1 = uVar1 * 0x40, uVar1 < *unaff_DI)) {
        *unaff_DI = uVar1;
      }
    }
    return 0;
  }
  DAT_28d4_0f17._0_2_ = unaff_SI;
  DAT_28d4_0f17._2_2_ = unaff_DS;
  FUN_28d4_113f();
  FUN_28d4_113f();
  FUN_28d4_113f();
  iVar3 = FUN_28d4_1248();
  unaff_DI[1] = iVar3 << 4;
  iVar3 = FUN_28d4_1248();
  unaff_DI[2] = iVar3 << 4;
  uVar1 = FUN_28d4_1248();
  *unaff_DI = uVar1;
  if (in_DX <= unaff_DI[1]) {
    unaff_DI[1] = in_DX;
    unaff_DI[2] = 0;
  }
  if (in_DX - unaff_DI[1] <= unaff_DI[2]) {
    unaff_DI[2] = in_DX - unaff_DI[1];
  }
  return 1;
}
