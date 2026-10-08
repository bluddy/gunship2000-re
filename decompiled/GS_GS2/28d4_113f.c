/* GS.GS2 28d4:113f undefined FUN_28d4_113f(void) */
/* WARNING: Removing unreachable block (ram,0x00029f50) */

undefined4 __cdecl16near FUN_28d4_113f(void)

{
  undefined2 in_AX;
  uint uVar1;
  int iVar2;
  uint in_CX;
  int in_DX;
  int in_BX;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined1 in_CF;
  
  uVar3 = CONCAT11((char)((uint)in_BX >> 8),1);
  uVar1 = in_CX;
  DAT_28d4_1246 = in_DX;
  DAT_28d4_103a = FUN_28d4_1294();
  DAT_28d4_103b = uVar3;
  DAT_28d4_103d = uVar1;
  if (!(bool)in_CF) {
    uVar5 = (undefined2)((ulong)DAT_28d4_0f17 >> 0x10);
    iVar4 = (int)DAT_28d4_0f17;
    if ((DAT_28d4_103a & 1) != 0) {
      *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & ~in_CX;
      uVar1 = DAT_28d4_103b;
      if (DAT_28d4_1246 == 0) {
        if ((DAT_28d4_103a & 2) == 0) {
          uVar1 = DAT_28d4_103b >> 4;
        }
        else {
          *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | in_CX;
        }
        *(uint *)(in_BX + iVar4) = uVar1;
      }
      else {
        if ((DAT_28d4_103a & 2) == 0) {
          if (DAT_28d4_103b < 0x400) {
            uVar1 = DAT_28d4_103b << 6;
          }
          else {
            uVar1 = 0xffff;
          }
        }
        else {
          *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | in_CX;
        }
        *(uint *)(iVar4 + 0x14) = uVar1;
        *(uint *)(iVar4 + 0x1c) = uVar1;
        *(uint *)(iVar4 + 0x20) = uVar1;
      }
    }
    if ((DAT_28d4_103a & 4) != 0) {
      *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & ~(in_CX >> 1);
      uVar1 = DAT_28d4_103d;
      if (DAT_28d4_1246 == 0) {
        if ((DAT_28d4_103a & 8) == 0) {
          uVar1 = DAT_28d4_103d + 0xf >> 4;
        }
        else {
          *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | in_CX >> 1;
        }
        *(uint *)(in_BX + -2 + iVar4) = uVar1;
      }
      else {
        if (DAT_28d4_103d < 0x400) {
          iVar2 = DAT_28d4_103d << 6;
        }
        else {
          iVar2 = -1;
        }
        *(int *)(iVar4 + 0x12) = iVar2;
        *(int *)(iVar4 + 0x1a) = iVar2;
        *(int *)(iVar4 + 0x1e) = iVar2;
      }
    }
  }
  return CONCAT22(in_DX,in_AX);
}
