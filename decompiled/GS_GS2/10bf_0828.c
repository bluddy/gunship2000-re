/* GS.GS2 10bf:0828 undefined FUN_10bf_0828(void) */
uint __cdecl16far FUN_10bf_0828(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined2 unaff_DS;
  uint uStack_6;
  
  uVar1 = param_2 * param_3;
  if (uVar1 == 0) {
    param_3 = 0;
  }
  else {
    pbVar6 = (byte *)(param_4 + 0x50);
    uVar5 = uVar1;
    if (((*(byte *)(param_4 + 3) & 0xc) == 0) && ((*pbVar6 & 1) == 0)) {
      uStack_6 = 0x200;
    }
    else {
      uStack_6 = param_4[0x51];
    }
    do {
      if ((((*(byte *)(param_4 + 3) & 8) == 0) && ((*pbVar6 & 1) == 0)) ||
         (uVar2 = param_4[1], uVar2 == 0)) {
        if (uVar5 < uStack_6) {
          iVar3 = FUN_10bf_0a02(*param_1,param_4);
          if (iVar3 == -1) break;
          param_1 = param_1 + 1;
          uVar5 = uVar5 - 1;
          uStack_6 = param_4[0x51];
          if (uStack_6 == 0) {
            uStack_6 = 1;
          }
        }
        else {
          if ((((*(byte *)(param_4 + 3) & 8) != 0) || ((*pbVar6 & 1) != 0)) &&
             (iVar3 = FUN_10bf_0cf0(param_4), iVar3 != 0)) break;
          iVar3 = uVar5 - uVar5 % uStack_6;
          iVar4 = FUN_10bf_1e72(0x10bf,*(undefined1 *)((int)param_4 + 7),param_1,iVar3);
          if ((iVar4 == -1) || (uVar5 = uVar5 - iVar4, iVar4 != iVar3)) {
            *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x20;
            break;
          }
          param_1 = param_1 + iVar4;
        }
      }
      else {
        if (uVar5 < uVar2) {
          uVar2 = uVar5;
        }
        FUN_10bf_2c0e(*param_4,param_1,uVar2);
        uVar5 = uVar5 - uVar2;
        param_4[1] = param_4[1] - uVar2;
        param_1 = param_1 + uVar2;
        *param_4 = *param_4 + uVar2;
      }
    } while (uVar5 != 0);
    if (uVar5 != 0) {
      param_3 = (uVar1 - uVar5) / param_2;
    }
  }
  return param_3;
}
