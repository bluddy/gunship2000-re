/* GS.GS2 1f61:06ac undefined FUN_1f61_06ac(void) */
void __cdecl16far FUN_1f61_06ac(undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_14;
  char local_12 [8];
  char *pcStack_a;
  char *pcStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0xfcc7;
  FUN_10bf_02c0();
  *(undefined2 *)0x8666 = 0;
  pcStack_6 = (char *)0xc;
  pcStack_8 = (char *)param_1;
  pcStack_a = local_12;
  local_12[6] = -0x41;
  local_12[7] = '\x10';
  local_12[4] = -0x24;
  local_12[5] = -4;
  FUN_10bf_2250();
  pcStack_6 = local_12;
  pcStack_8 = (char *)0x10bf;
  pcStack_a = (char *)0xfcec;
  FUN_10bf_2b48();
  pcStack_6 = local_12;
  pcStack_8 = (char *)0x8658;
  pcStack_a = (char *)0x10bf;
  local_12[6] = -5;
  local_12[7] = -4;
  FUN_10bf_21d6();
  if (*(int *)0x86c2 != 0 || *(int *)0x86c0 != 0) {
    pcStack_6 = (char *)0x8;
    pcStack_8 = (char *)0x20;
    pcStack_a = (char *)0x864c;
    local_12[6] = -0x41;
    local_12[7] = '\x10';
    local_12[4] = '\x13';
    local_12[5] = -3;
    FUN_10bf_2c3a();
    pcStack_6 = (char *)0x3;
    pcStack_8 = (char *)0x20;
    pcStack_a = (char *)0x8640;
    local_12[6] = -0x41;
    local_12[7] = '\x10';
    local_12[4] = '\"';
    local_12[5] = -3;
    FUN_10bf_2c3a();
    for (iStack_14 = 0; iStack_14 < 8; iStack_14 = iStack_14 + 1) {
      cVar1 = local_12[iStack_14];
      if (cVar1 == '\0') break;
      if (cVar1 == '.') {
        pcStack_6 = local_12;
        pcStack_8 = (char *)0x10bf;
        pcStack_a = (char *)0xfd51;
        iVar2 = FUN_10bf_2234();
        pcStack_6 = (char *)((iVar2 - iStack_14) + -1);
        pcStack_8 = local_12 + iStack_14 + 1;
        pcStack_a = (char *)0x8640;
        local_12[6] = -0x41;
        local_12[7] = '\x10';
        local_12[4] = 'd';
        local_12[5] = -3;
        FUN_10bf_2c0e();
        break;
      }
      *(char *)(iStack_14 + -0x79b4) = cVar1;
    }
    *(undefined2 *)0x8692 = 0xffff;
  }
  pcStack_6 = (char *)param_2;
  pcStack_8 = (char *)0x10bf;
  pcStack_a = (char *)0xfd85;
  FUN_1f61_077e();
  return;
}
