/* GS2.GS2 137f:003c undefined FUN_137f_003c(void) */
uint * __cdecl16near FUN_137f_003c(void)

{
  code *pcVar1;
  uint in_AX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_CX;
  uint in_DX;
  undefined2 extraout_DX;
  uint uVar5;
  int iVar6;
  uint in_BX;
  uint uVar7;
  uint *unaff_DI;
  undefined2 unaff_DS;
  undefined4 uVar8;
  
  *unaff_DI = in_AX;
  unaff_DI[4] = in_AX;
  unaff_DI[1] = in_CX;
  unaff_DI[5] = in_CX;
  unaff_DI[2] = in_BX;
  unaff_DI[6] = in_BX;
  unaff_DI[3] = in_DX;
  unaff_DI[7] = in_DX;
  uVar7 = 0xffff;
LAB_137f_0056:
  do {
    FUN_137f_01bd();
    if ((*(byte *)0xfa & 0xc0) == 0) {
      return (uint *)((ulong)*(uint *)0xea << 0x10);
    }
    if ((*(byte *)0xfa & 0xc) == 0) {
      return (uint *)((ulong)*(uint *)0xec << 0x10);
    }
    if ((*(byte *)0xfa & 0x30) == 0) {
      return (uint *)((ulong)uVar7 << 0x10);
    }
    if ((*(byte *)0xfa & 3) == 0) {
      return (uint *)((ulong)uVar7 << 0x10);
    }
    *(byte *)0xfa = *(byte *)0xfa ^ 0xff;
    if ((*(byte *)0xfa & 0xaa) != 0) {
      *(byte *)0xfb = *(byte *)0xfb | 1;
      if ((*(byte *)0xfa & 0x88) != 0) {
        uVar7 = *(uint *)0xea;
        if ((*(byte *)0xfa & 0x80) == 0) {
          uVar7 = *(uint *)0xec;
        }
        *unaff_DI = uVar7;
        iVar2 = unaff_DI[7] - unaff_DI[5];
        uVar8 = CONCAT22(uVar7,unaff_DI[6] - unaff_DI[4]);
        pcVar1 = (code *)swi(4);
        if (SBORROW2(unaff_DI[6],unaff_DI[4])) {
          uVar8 = (*pcVar1)();
        }
        iVar6 = (int)((ulong)uVar8 >> 0x10);
        iVar4 = (int)uVar8;
        iVar3 = iVar6 - unaff_DI[4];
        pcVar1 = (code *)swi(4);
        if (SBORROW2(iVar6,unaff_DI[4])) {
          iVar3 = (*pcVar1)();
        }
        unaff_DI[1] = (int)(((long)iVar3 * (long)iVar2) / (long)iVar4) + unaff_DI[5];
        goto LAB_137f_0056;
      }
      if ((*(byte *)0xfa & 0x22) != 0) {
        uVar5 = *(uint *)0xee;
        if ((*(byte *)0xfa & 0x20) == 0) {
          uVar5 = *(uint *)0xf0;
        }
        unaff_DI[1] = uVar5;
        uVar8 = CONCAT22(uVar5,unaff_DI[6] - unaff_DI[4]);
        pcVar1 = (code *)swi(4);
        if (SBORROW2(unaff_DI[6],unaff_DI[4])) {
          uVar8 = (*pcVar1)();
        }
        iVar6 = (int)((ulong)uVar8 >> 0x10);
        iVar2 = (int)uVar8;
        iVar4 = unaff_DI[7] - unaff_DI[5];
        iVar3 = iVar6 - unaff_DI[5];
        pcVar1 = (code *)swi(4);
        if (SBORROW2(iVar6,unaff_DI[5])) {
          iVar3 = (*pcVar1)();
        }
        *unaff_DI = (int)(((long)iVar3 * (long)iVar2) / (long)iVar4) + unaff_DI[4];
        goto LAB_137f_0056;
      }
    }
    if ((*(byte *)0xfa & 0x55) == 0) {
LAB_137f_01b8:
      return (uint *)CONCAT22(extraout_DX,unaff_DI);
    }
    *(byte *)0xfb = *(byte *)0xfb | 2;
    if ((*(byte *)0xfa & 0x44) == 0) {
      if ((*(byte *)0xfa & 0x11) == 0) goto LAB_137f_01b8;
      uVar5 = *(uint *)0xee;
      if ((*(byte *)0xfa & 0x10) == 0) {
        uVar5 = *(uint *)0xf0;
      }
      unaff_DI[3] = uVar5;
      uVar8 = CONCAT22(uVar5,unaff_DI[6] - unaff_DI[4]);
      pcVar1 = (code *)swi(4);
      if (SBORROW2(unaff_DI[6],unaff_DI[4])) {
        uVar8 = (*pcVar1)();
      }
      iVar6 = (int)((ulong)uVar8 >> 0x10);
      iVar2 = (int)uVar8;
      iVar4 = unaff_DI[7] - unaff_DI[5];
      iVar3 = iVar6 - unaff_DI[5];
      pcVar1 = (code *)swi(4);
      if (SBORROW2(iVar6,unaff_DI[5])) {
        iVar3 = (*pcVar1)();
      }
      unaff_DI[2] = (int)(((long)iVar3 * (long)iVar2) / (long)iVar4) + unaff_DI[4];
    }
    else {
      uVar7 = *(uint *)0xea;
      if ((*(byte *)0xfa & 0x40) == 0) {
        uVar7 = *(uint *)0xec;
      }
      unaff_DI[2] = uVar7;
      iVar2 = unaff_DI[7] - unaff_DI[5];
      uVar8 = CONCAT22(uVar7,unaff_DI[6] - unaff_DI[4]);
      pcVar1 = (code *)swi(4);
      if (SBORROW2(unaff_DI[6],unaff_DI[4])) {
        uVar8 = (*pcVar1)();
      }
      iVar6 = (int)((ulong)uVar8 >> 0x10);
      iVar4 = (int)uVar8;
      iVar3 = iVar6 - unaff_DI[4];
      pcVar1 = (code *)swi(4);
      if (SBORROW2(iVar6,unaff_DI[4])) {
        iVar3 = (*pcVar1)();
      }
      unaff_DI[3] = (int)(((long)iVar3 * (long)iVar2) / (long)iVar4) + unaff_DI[5];
    }
  } while( true );
}
