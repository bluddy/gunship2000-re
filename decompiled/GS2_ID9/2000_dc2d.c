/* GS2.GS2 2000:dc2d undefined FUN_2000_dc2d(void) */
void __cdecl16far FUN_2000_dc2d(uint param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  undefined2 unaff_DS;
  
  uVar5 = param_1 >> 3;
  iVar6 = (param_2 - param_1) - uVar5;
  if (*(int *)0xec < iVar6) {
    return;
  }
  if ((int)(iVar6 + param_1 * 2 + uVar5) < *(int *)0xea) {
    return;
  }
  iVar6 = param_3 - param_1;
  if (*(int *)0xf0 <= iVar6) {
    return;
  }
  if ((iVar6 < *(int *)0xee) && ((int)(iVar6 + param_1 * 2) < *(int *)0xee)) {
    return;
  }
  uVar1 = *(undefined2 *)0x18cc;
  iVar12 = param_1 * -2 + 3;
  iVar6 = 0;
  do {
    while( true ) {
      iVar11 = iVar6;
      iVar6 = (param_2 - param_1) - uVar5;
      if (iVar6 <= *(int *)0xec) {
        bVar3 = iVar6 < *(int *)0xea;
        iVar8 = param_2 + param_1 + uVar5;
        if (*(int *)0xea <= iVar8) {
          bVar4 = bVar3;
          if (*(int *)0xec < iVar8) {
            bVar4 = 2;
          }
          if (*(int *)0xee <= param_3 - iVar11) {
            uVar7 = (param_3 - iVar11) * 0x100;
            puVar10 = (undefined1 *)(iVar6 + uVar7 + (uVar7 >> 2));
            if (!bVar3) {
              *puVar10 = param_4;
            }
            if ((bVar4 & 2) == 0) {
              puVar10[iVar8 - iVar6] = param_4;
            }
          }
          if (param_3 + iVar11 <= *(int *)0xf0) {
            uVar7 = (param_3 + iVar11) * 0x100;
            puVar10 = (undefined1 *)(iVar6 + uVar7 + (uVar7 >> 2));
            if (!bVar3) {
              *puVar10 = param_4;
            }
            if ((bVar4 & 2) == 0) {
              puVar10[iVar8 - iVar6] = param_4;
            }
          }
        }
      }
      iVar6 = (param_2 - iVar11) - uVar5;
      if (iVar6 <= *(int *)0xec) {
        iVar8 = *(int *)0xea;
        iVar9 = param_2 + iVar11 + uVar5;
        if (*(int *)0xea <= iVar9) {
          iVar2 = *(int *)0xec;
          if (*(int *)0xee <= (int)(param_3 - param_1)) {
            uVar7 = (param_3 - param_1) * 0x100;
            puVar10 = (undefined1 *)(iVar6 + uVar7 + (uVar7 >> 2));
            if (iVar8 <= iVar6) {
              *puVar10 = param_4;
            }
            if (iVar9 <= iVar2) {
              puVar10[iVar9 - iVar6] = param_4;
            }
          }
          if ((int)(param_3 + param_1) <= *(int *)0xf0) {
            uVar7 = (param_3 + param_1) * 0x100;
            puVar10 = (undefined1 *)(iVar6 + uVar7 + (uVar7 >> 2));
            if (iVar8 <= iVar6) {
              *puVar10 = param_4;
            }
            if (iVar9 <= iVar2) {
              puVar10[iVar9 - iVar6] = param_4;
            }
          }
        }
      }
      if (iVar12 < 0) break;
      iVar12 = iVar12 + (iVar11 - param_1) * 4 + 10;
      param_1 = param_1 - 1;
      iVar6 = iVar11 + 1;
      if ((int)param_1 <= iVar11 + 1) goto LAB_2000_de02;
    }
    iVar12 = iVar12 + iVar11 * 4 + 6;
    iVar6 = iVar11 + 1;
  } while (iVar11 + 1 < (int)param_1);
LAB_2000_de02:
  uVar7 = iVar11 + 1;
  if (param_1 != uVar7) {
    return;
  }
  iVar6 = (param_2 - param_1) - uVar5;
  if (iVar6 <= *(int *)0xec) {
    bVar3 = iVar6 < *(int *)0xea;
    iVar12 = param_2 + param_1 + uVar5;
    if (*(int *)0xea <= iVar12) {
      bVar4 = bVar3;
      if (*(int *)0xec < iVar12) {
        bVar4 = 2;
      }
      if (*(int *)0xee <= (int)(param_3 - uVar7)) {
        uVar5 = (param_3 - uVar7) * 0x100;
        puVar10 = (undefined1 *)(iVar6 + uVar5 + (uVar5 >> 2));
        if (!bVar3) {
          *puVar10 = param_4;
        }
        if ((bVar4 & 2) == 0) {
          puVar10[iVar12 - iVar6] = param_4;
        }
      }
      if ((int)(param_3 + uVar7) <= *(int *)0xf0) {
        uVar5 = (param_3 + uVar7) * 0x100;
        puVar10 = (undefined1 *)(iVar6 + uVar5 + (uVar5 >> 2));
        if (!bVar3) {
          *puVar10 = param_4;
        }
        if ((bVar4 & 2) == 0) {
          puVar10[iVar12 - iVar6] = param_4;
        }
      }
    }
  }
  return;
}
