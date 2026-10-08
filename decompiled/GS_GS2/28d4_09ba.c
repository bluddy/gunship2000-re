/* GS.GS2 28d4:09ba undefined FUN_28d4_09ba(void) */
undefined4 __cdecl16near FUN_28d4_09ba(void)

{
  code *pcVar1;
  undefined2 in_AX;
  int iVar2;
  char extraout_AH;
  char extraout_AH_00;
  int in_CX;
  undefined2 uVar3;
  undefined2 in_DX;
  uint in_BX;
  undefined2 uVar4;
  uint uVar5;
  uint unaff_ES;
  undefined4 uVar6;
  long lVar7;
  
  uVar5 = DAT_28d4_0038;
  if (DAT_28d4_000d == 'E') {
    uVar5 = DAT_28d4_0038 - DAT_28d4_0066;
  }
  if (uVar5 < in_BX) {
    if (DAT_28d4_0046 < in_BX - uVar5) {
      FUN_28d4_0b63();
    }
    else {
      lVar7 = (ulong)((in_BX - uVar5) - 1) * 0x800 + (ulong)(uint)(in_CX * 0x10);
      uVar3 = in_AX;
      uVar4 = in_DX;
      uVar6 = FUN_28d4_0cfa();
      DAT_28d4_0086 = (undefined2)((ulong)uVar6 >> 0x10);
      DAT_28d4_0084 = (undefined2)uVar6;
      DAT_28d4_008c = (uint)((ulong)lVar7 >> 0x10);
      DAT_28d4_008a = (undefined2)lVar7;
      if ((char)uVar4 == '\0') {
        DAT_28d4_0088 = DAT_28d4_004c;
        DAT_28d4_008e = 0;
        lVar7 = (ulong)unaff_ES << 0x10;
      }
      else {
        DAT_28d4_008e = DAT_28d4_004c;
        DAT_28d4_0088 = 0;
        DAT_28d4_008a = 0;
        DAT_28d4_008c = unaff_ES;
      }
      DAT_28d4_0092 = (undefined2)((ulong)lVar7 >> 0x10);
      DAT_28d4_0090 = (undefined2)lVar7;
      iVar2 = (*DAT_28d4_007a)(0x28d4,uVar3,uVar4);
      if (iVar2 != 1) {
        uVar6 = FUN_28d4_0bf8();
        return uVar6;
      }
    }
  }
  else {
    uVar5 = in_BX - 1;
    if (DAT_28d4_000d == 'E') {
      uVar5 = uVar5 + DAT_28d4_0066;
    }
    uVar5 = uVar5 / 8;
    if (((DAT_28d4_000d != 'E') || (DAT_28d4_0068 < uVar5 + 1)) &&
       ((DAT_28d4_0027 == '\0' || (uVar5 != DAT_28d4_0078)))) {
      if (DAT_28d4_0026 == '\0') {
        pcVar1 = (code *)swi(0x67);
        (*pcVar1)();
        if (extraout_AH != '\0') {
          uVar6 = FUN_28d4_0be1();
          return uVar6;
        }
        DAT_28d4_0026 = -1;
      }
      DAT_28d4_0027 = -1;
      pcVar1 = (code *)swi(0x67);
      DAT_28d4_0078 = uVar5;
      (*pcVar1)();
      if (extraout_AH_00 != '\0') {
        uVar6 = FUN_28d4_0be1();
        return uVar6;
      }
    }
    FUN_28d4_0b63();
  }
  return CONCAT22(in_DX,in_AX);
}
