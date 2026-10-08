/* GS2.GS2 12a2:0552 undefined FUN_12a2_0552(void) */
uint __cdecl16far FUN_12a2_0552(uint param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (param_1 < *(uint *)0x31ed) {
    bVar5 = false;
    if ((param_3 & 0x8000) == 0) goto LAB_12a2_05b5;
    if (param_4 == 0) goto LAB_12a2_058d;
    bVar5 = false;
    pcVar1 = (code *)swi(0x21);
    uVar6 = (*pcVar1)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    uVar2 = (uint)uVar6;
    if (bVar5) goto LAB_12a2_05c9;
    if ((param_4 & 2) == 0) {
      bVar5 = CARRY2(uVar3,param_3) || CARRY2(uVar3 + param_3,(uint)CARRY2(uVar2,param_2));
      if (-1 < (int)(uVar3 + param_3 + (uint)CARRY2(uVar2,param_2))) {
LAB_12a2_05b5:
        pcVar1 = (code *)swi(0x21);
        uVar2 = (*pcVar1)();
        if (!bVar5) {
          bVar5 = false;
          *(byte *)(param_1 + 0x31ef) = *(byte *)(param_1 + 0x31ef) & 0xfd;
        }
        goto LAB_12a2_05c9;
      }
    }
    else {
      pcVar1 = (code *)swi(0x21);
      uVar6 = (*pcVar1)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar2 = (uint)CARRY2((uint)uVar6,param_2);
      uVar3 = uVar4 + param_3;
      bVar5 = CARRY2(uVar4,param_3) || CARRY2(uVar3,uVar2);
      if (-1 < (int)(uVar3 + uVar2)) goto LAB_12a2_05b5;
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
LAB_12a2_058d:
    uVar2 = 0x1600;
  }
  else {
    uVar2 = 0x900;
  }
  bVar5 = true;
LAB_12a2_05c9:
  if (bVar5) {
    FUN_12a2_0524();
    uVar2 = 0xffff;
  }
  return uVar2;
}
