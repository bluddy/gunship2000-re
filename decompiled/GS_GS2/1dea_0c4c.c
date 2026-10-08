/* GS.GS2 1dea:0c4c undefined FUN_1dea_0c4c(void) */
void __cdecl16far FUN_1dea_0c4c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int aiStack_10 [6];
  
  aiStack_10[5] = 0xeaf7;
  FUN_10bf_02c0();
  aiStack_10[0] = 0x1b;
  aiStack_10[1] = 0x1a;
  aiStack_10[2] = 0x19;
  aiStack_10[3] = 0x1e;
  aiStack_10[4] = 0x1c;
  aiStack_10[5] = 0x1f;
  if ((*(char *)0x8617 < '\0') || ('\x06' < *(char *)0x8617)) {
    if (param_5 == 0) {
      if (param_4 != 0) {
        aiStack_10[5] = 0x1c;
        aiStack_10[4] = 0x10bf;
        aiStack_10[3] = 0xeb5c;
        FUN_1dea_0f3a();
        return;
      }
      if (0 < param_3) {
        aiStack_10[5] = 0x1e;
        aiStack_10[4] = 0x10bf;
        aiStack_10[3] = 0xeb6e;
        FUN_1dea_0f3a();
        return;
      }
      if (param_3 < 0) {
        aiStack_10[5] = 0x1f;
        aiStack_10[4] = 0x10bf;
        aiStack_10[3] = 0xeb80;
        FUN_1dea_0f3a();
        return;
      }
      if (param_1 == 0) {
        aiStack_10[5] = 0x1c;
        aiStack_10[4] = 0x10bf;
        aiStack_10[3] = 0xeb92;
        FUN_1dea_0f3a();
        return;
      }
      if (param_2 == 0) {
        aiStack_10[5] = 0x1b;
        aiStack_10[4] = 0x10bf;
        aiStack_10[3] = 0xeba4;
        FUN_1dea_0f3a();
        return;
      }
      aiStack_10[5] = 2;
      aiStack_10[4] = 0x10bf;
      aiStack_10[3] = 0xebb1;
      iVar1 = FUN_239c_0086();
      aiStack_10[5] = 0x1a - (uint)(iVar1 == 0);
      aiStack_10[4] = 0x239c;
      aiStack_10[3] = 0xebc1;
      FUN_1dea_0f3a();
    }
    else {
      aiStack_10[5] = 0x20;
      aiStack_10[4] = 0x10bf;
      aiStack_10[3] = 0xeb4a;
      FUN_1dea_0f3a();
    }
  }
  else {
    aiStack_10[5] = aiStack_10[*(char *)0x8617];
    aiStack_10[4] = 0x10bf;
    aiStack_10[3] = 0xeb38;
    FUN_1dea_0f3a();
  }
  return;
}
