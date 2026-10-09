/* GS2.GS2 1000:c0a4 undefined FUN_1000_c0a4(void) */
int __cdecl16far FUN_1000_c0a4(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uStack_10;
  uint uStack_e;
  uint uStack_8;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uStack_10 = 0;
  uStack_e = 0;
  uStack_8 = 0;
  if (*param_1 != 0) {
    uStack_10 = 0;
    uStack_e = 0;
    puVar3 = (uint *)((int *)param_1 + 1);
    iVar1 = *param_1;
    do {
      uVar2 = (int)*puVar3 >> 0xf;
      if (uStack_8 < (*puVar3 ^ uVar2) - uVar2) {
        uStack_8 = (int)*puVar3 >> 0xf;
        uStack_8 = (*puVar3 ^ uStack_8) - uStack_8;
      }
      uVar2 = (int)puVar3[1] >> 0xf;
      if (uStack_10 < (puVar3[1] ^ uVar2) - uVar2) {
        uStack_10 = (int)puVar3[1] >> 0xf;
        uStack_10 = (puVar3[1] ^ uStack_10) - uStack_10;
      }
      uVar2 = (int)puVar3[2] >> 0xf;
      if (uStack_e < (puVar3[2] ^ uVar2) - uVar2) {
        uStack_e = (int)puVar3[2] >> 0xf;
        uStack_e = (puVar3[2] ^ uStack_e) - uStack_e;
      }
      puVar3 = puVar3 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar5 = uStack_e >> 2;
  uVar4 = uStack_10 >> 2;
  uVar2 = uStack_8 >> 2;
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar5) {
      if (uVar2 < uVar5) goto LAB_1000_c170;
      iVar1 = (uStack_e >> 4) + (uStack_10 >> 4);
    }
    else {
      iVar1 = (uStack_e >> 4) + (uStack_10 >> 3);
    }
    return iVar1 + uVar2;
  }
  if ((uVar5 <= uVar2) || (uVar5 <= uVar4)) {
    return (uStack_8 >> 4) + (uStack_e >> 4) + uVar4;
  }
LAB_1000_c170:
  return (uStack_8 >> 4) + (uStack_10 >> 4) + uVar5;
}
