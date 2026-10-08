/* GS.GS2 165c:0466 undefined FUN_165c_0466(void) */
void __cdecl16far FUN_165c_0466(uint param_1,uint param_2,int *param_3,int *param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  
  FUN_10bf_02c0();
  uVar5 = *(byte *)(param_1 + param_2 * -0x40 + 0xfc0) & 0x3f;
  if ((*(byte *)(uVar5 + (int)*(undefined4 *)0xb854) & 4) == 0) {
    if ((param_5 == 0) && (iVar2 = FUN_239c_0086(2), iVar2 != 0)) {
      uVar5 = 0x6a79;
      iVar2 = FUN_165c_0418(param_1,param_2,1);
      if (iVar2 != 0) {
        param_5 = 1;
      }
    }
    iVar2 = FUN_239c_0086(2);
    if (param_5 != 0) {
      uVar5 = ~uVar5;
    }
    for (iVar10 = 0; iVar10 < *(int *)0xb8c4; iVar10 = iVar10 + 1) {
      uVar7 = (undefined2)((ulong)*(undefined4 *)0xb854 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xb854;
      if ((int)*(char *)(iVar6 + iVar10 * 0x11 + 0x40) == uVar5) {
        iVar6 = iVar10 * 0x11 + iVar2 * 8 + iVar6;
        uVar1 = *(undefined2 *)(iVar6 + 0x41);
        uVar9 = 0x239c;
        uVar8 = 0x6af2;
        uVar3 = FUN_239c_005c(uVar1,*(undefined2 *)(iVar6 + 0x45),uVar1);
        uVar5 = param_1 & 0xff;
        uVar4 = uVar3 + uVar5 * 0x2000;
        *param_3 = uVar4 + 0x1000;
        param_3[1] = ((int)uVar3 >> 0xf) +
                     ((((((int)(char)(param_1 >> 8) << 1 | (uint)((char)param_1 < '\0')) << 1 |
                        (uint)((int)(uVar5 << 9) < 0)) << 1 | (uint)((int)(uVar5 << 10) < 0)) << 1 |
                      (uint)((int)(uVar5 << 0xb) < 0)) << 1 | (uint)((int)(uVar5 << 0xc) < 0)) +
                     (uint)CARRY2(uVar3,uVar5 * 0x2000) + (uint)(0xefff < uVar4);
        uVar3 = FUN_239c_005c(uVar9,uVar8);
        uVar5 = param_2 & 0xff;
        uVar4 = uVar3 + uVar5 * 0x2000;
        *param_4 = uVar4 + 0x1000;
        param_4[1] = ((int)uVar3 >> 0xf) +
                     ((((((int)(char)(param_2 >> 8) << 1 | (uint)((char)param_2 < '\0')) << 1 |
                        (uint)((int)(uVar5 << 9) < 0)) << 1 | (uint)((int)(uVar5 << 10) < 0)) << 1 |
                      (uint)((int)(uVar5 << 0xb) < 0)) << 1 | (uint)((int)(uVar5 << 0xc) < 0)) +
                     (uint)CARRY2(uVar3,uVar5 * 0x2000) + (uint)(0xefff < uVar4);
        return;
      }
    }
  }
  FUN_165c_05d4(param_1,param_2,param_3,param_4,param_5);
  return;
}
