/* GS2.GS2 2000:df74 undefined FUN_2000_df74(void) */
void __cdecl16far FUN_2000_df74(uint param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined2 unaff_DS;
  
  out(0x3ce,0x205);
  out(0x3ce,8);
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
  iVar11 = param_1 * -2 + 3;
  iVar6 = 0;
  do {
    while( true ) {
      iVar10 = iVar6;
      iVar6 = (param_2 - param_1) - uVar5;
      if (iVar6 <= *(int *)0xec) {
        bVar3 = iVar6 < *(int *)0xea;
        iVar7 = param_2 + param_1 + uVar5;
        if (*(int *)0xea <= iVar7) {
          bVar4 = bVar3;
          if (*(int *)0xec < iVar7) {
            bVar4 = 2;
          }
          if (*(int *)0xee <= param_3 - iVar10) {
            uVar9 = (param_3 - iVar10) * 0x100;
            uVar9 = iVar6 + uVar9 + (uVar9 >> 2);
            if (!bVar3) {
              out(0x3cf,*(undefined1 *)((uVar9 & 7) + 0x3196));
              *(undefined1 *)(uVar9 >> 3) = param_4;
            }
            if ((bVar4 & 2) == 0) {
              uVar9 = uVar9 + (iVar7 - iVar6);
              out(0x3cf,*(undefined1 *)((uVar9 & 7) + 0x3196));
              *(undefined1 *)(uVar9 >> 3) = param_4;
            }
          }
          if (param_3 + iVar10 <= *(int *)0xf0) {
            uVar9 = (param_3 + iVar10) * 0x100;
            uVar9 = iVar6 + uVar9 + (uVar9 >> 2);
            if (!bVar3) {
              out(0x3cf,*(undefined1 *)((uVar9 & 7) + 0x3196));
              *(undefined1 *)(uVar9 >> 3) = param_4;
            }
            if ((bVar4 & 2) == 0) {
              uVar9 = uVar9 + (iVar7 - iVar6);
              out(0x3cf,*(undefined1 *)((uVar9 & 7) + 0x3196));
              *(undefined1 *)(uVar9 >> 3) = param_4;
            }
          }
        }
      }
      iVar6 = (param_2 - iVar10) - uVar5;
      if (iVar6 <= *(int *)0xec) {
        iVar7 = *(int *)0xea;
        iVar8 = param_2 + iVar10 + uVar5;
        if (*(int *)0xea <= iVar8) {
          iVar2 = *(int *)0xec;
          if (*(int *)0xee <= (int)(param_3 - param_1)) {
            uVar9 = (param_3 - param_1) * 0x100;
            uVar9 = iVar6 + uVar9 + (uVar9 >> 2);
            if (iVar7 <= iVar6) {
              out(0x3cf,*(undefined1 *)((uVar9 & 7) + 0x3196));
              *(undefined1 *)(uVar9 >> 3) = param_4;
            }
            if (iVar8 <= iVar2) {
              uVar9 = uVar9 + (iVar8 - iVar6);
              out(0x3cf,*(undefined1 *)((uVar9 & 7) + 0x3196));
              *(undefined1 *)(uVar9 >> 3) = param_4;
            }
          }
          if ((int)(param_3 + param_1) <= *(int *)0xf0) {
            uVar9 = (param_3 + param_1) * 0x100;
            uVar9 = iVar6 + uVar9 + (uVar9 >> 2);
            if (iVar7 <= iVar6) {
              out(0x3cf,*(undefined1 *)((uVar9 & 7) + 0x3196));
              *(undefined1 *)(uVar9 >> 3) = param_4;
            }
            if (iVar8 <= iVar2) {
              uVar9 = uVar9 + (iVar8 - iVar6);
              out(0x3cf,*(undefined1 *)((uVar9 & 7) + 0x3196));
              *(undefined1 *)(uVar9 >> 3) = param_4;
            }
          }
        }
      }
      if (iVar11 < 0) break;
      iVar11 = iVar11 + (iVar10 - param_1) * 4 + 10;
      param_1 = param_1 - 1;
      iVar6 = iVar10 + 1;
      if ((int)param_1 <= iVar10 + 1) goto LAB_2000_e23b;
    }
    iVar11 = iVar11 + iVar10 * 4 + 6;
    iVar6 = iVar10 + 1;
  } while (iVar10 + 1 < (int)param_1);
LAB_2000_e23b:
  uVar9 = iVar10 + 1;
  if (param_1 != uVar9) {
    return;
  }
  iVar6 = (param_2 - param_1) - uVar5;
  if (iVar6 <= *(int *)0xec) {
    bVar3 = iVar6 < *(int *)0xea;
    iVar11 = param_2 + param_1 + uVar5;
    if (*(int *)0xea <= iVar11) {
      bVar4 = bVar3;
      if (*(int *)0xec < iVar11) {
        bVar4 = 2;
      }
      if (*(int *)0xee <= (int)(param_3 - uVar9)) {
        uVar5 = (param_3 - uVar9) * 0x100;
        uVar5 = iVar6 + uVar5 + (uVar5 >> 2);
        if (!bVar3) {
          out(0x3cf,*(undefined1 *)((uVar5 & 7) + 0x3196));
          *(undefined1 *)(uVar5 >> 3) = param_4;
        }
        if ((bVar4 & 2) == 0) {
          uVar5 = uVar5 + (iVar11 - iVar6);
          out(0x3cf,*(undefined1 *)((uVar5 & 7) + 0x3196));
          *(undefined1 *)(uVar5 >> 3) = param_4;
        }
      }
      if ((int)(param_3 + uVar9) <= *(int *)0xf0) {
        uVar5 = (param_3 + uVar9) * 0x100;
        uVar5 = iVar6 + uVar5 + (uVar5 >> 2);
        if (!bVar3) {
          out(0x3cf,*(undefined1 *)((uVar5 & 7) + 0x3196));
          *(undefined1 *)(uVar5 >> 3) = param_4;
        }
        if ((bVar4 & 2) == 0) {
          uVar5 = uVar5 + (iVar11 - iVar6);
          out(0x3cf,*(undefined1 *)((uVar5 & 7) + 0x3196));
          *(undefined1 *)(uVar5 >> 3) = param_4;
        }
      }
    }
  }
  return;
}
