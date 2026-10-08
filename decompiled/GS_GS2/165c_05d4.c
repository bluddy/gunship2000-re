/* GS.GS2 165c:05d4 undefined FUN_165c_05d4(void) */
void __cdecl16far FUN_165c_05d4(uint param_1,uint param_2,int *param_3,int *param_4,int param_5)

{
  undefined2 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  uint uStackY_e;
  int iVar10;
  
  FUN_10bf_02c0();
  uStackY_e = *(byte *)(param_1 + param_2 * -0x40 + 0xfc0) & 0x3f;
  cVar2 = (char)(param_1 >> 8);
  uVar4 = param_1 & 0xff;
  *param_3 = uVar4 * 0x2000 + 0x1000;
  param_3[1] = ((((((int)cVar2 << 1 | (uint)((char)param_1 < '\0')) << 1 |
                  (uint)((int)(uVar4 << 9) < 0)) << 1 | (uint)((int)(uVar4 << 10) < 0)) << 1 |
                (uint)((int)(uVar4 << 0xb) < 0)) << 1 | (uint)((int)(uVar4 << 0xc) < 0)) +
               (uint)(0xefff < uVar4 * 0x2000);
  cVar3 = (char)(param_2 >> 8);
  uVar4 = param_2 & 0xff;
  *param_4 = uVar4 * 0x2000 + 0x1000;
  param_4[1] = ((((((int)cVar3 << 1 | (uint)((char)param_2 < '\0')) << 1 |
                  (uint)((int)(uVar4 << 9) < 0)) << 1 | (uint)((int)(uVar4 << 10) < 0)) << 1 |
                (uint)((int)(uVar4 << 0xb) < 0)) << 1 | (uint)((int)(uVar4 << 0xc) < 0)) +
               (uint)(0xefff < uVar4 * 0x2000);
  if (((-(param_5 == 0) & 0x10U) + 0x10 & *(byte *)((int)*(undefined4 *)0xb854 + uStackY_e)) != 0) {
    iVar5 = FUN_239c_0086(2);
    if (param_5 != 0) {
      uStackY_e = ~uStackY_e;
    }
    for (iVar10 = 0; iVar10 < *(int *)0xb8c4; iVar10 = iVar10 + 1) {
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xb854 >> 0x10);
      iVar8 = (int)*(undefined4 *)0xb854;
      if ((int)*(char *)(iVar8 + iVar10 * 0x11 + 0x40) == uStackY_e) {
        iVar8 = iVar10 * 0x11 + iVar5 * 8 + iVar8;
        uVar1 = *(undefined2 *)(iVar8 + 0x41);
        uVar6 = FUN_239c_005c(uVar1,*(undefined2 *)(iVar8 + 0x45),uVar1);
        uVar4 = param_1 & 0xff;
        uVar7 = uVar6 + uVar4 * 0x2000;
        *param_3 = uVar7 + 0x1000;
        param_3[1] = ((int)uVar6 >> 0xf) +
                     ((((((int)cVar2 << 1 | (uint)((char)param_1 < '\0')) << 1 |
                        (uint)((int)(uVar4 << 9) < 0)) << 1 | (uint)((int)(uVar4 << 10) < 0)) << 1 |
                      (uint)((int)(uVar4 << 0xb) < 0)) << 1 | (uint)((int)(uVar4 << 0xc) < 0)) +
                     (uint)CARRY2(uVar6,uVar4 * 0x2000) + (uint)(0xefff < uVar7);
        iVar10 = 0x239c;
        uVar6 = FUN_239c_005c(0x239c,0x6ca4);
        uVar4 = param_2 & 0xff;
        uVar7 = uVar6 + uVar4 * 0x2000;
        *param_4 = uVar7 + 0x1000;
        param_4[1] = ((int)uVar6 >> 0xf) +
                     ((((((int)cVar3 << 1 | (uint)((char)param_2 < '\0')) << 1 |
                        (uint)((int)(uVar4 << 9) < 0)) << 1 | (uint)((int)(uVar4 << 10) < 0)) << 1 |
                      (uint)((int)(uVar4 << 0xb) < 0)) << 1 | (uint)((int)(uVar4 << 0xc) < 0)) +
                     (uint)CARRY2(uVar6,uVar4 * 0x2000) + (uint)(0xefff < uVar7);
      }
    }
  }
  return;
}
