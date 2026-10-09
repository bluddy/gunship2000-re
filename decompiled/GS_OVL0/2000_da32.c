/* GS.GS2 2000:da32 undefined FUN_2000_da32(void) */
void __cdecl16far
FUN_2000_da32(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined1 local_98 [8];
  undefined1 local_90 [34];
  int iStack_6e;
  int iStack_6c;
  char local_68 [14];
  undefined1 local_5a [44];
  char cStack_2e;
  char local_2c [30];
  undefined2 uStack_e;
  undefined2 uStack_c;
  char *pcStack_a;
  char *pcStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0xda3d;
  func_0x00000eb0();
  pcStack_6 = (char *)param_1;
  pcStack_8 = local_2c;
  pcStack_a = (char *)0xbf;
  uStack_c = 0xda4a;
  func_0x00002dc6();
  pcStack_6 = local_2c;
  pcStack_8 = (char *)0xbf;
  pcStack_a = (char *)0xda56;
  func_0x00003738();
  local_68[0] = ' ';
  iStack_6e = 1;
  iStack_6c = 0;
  while (iStack_6e < 8) {
    cStack_2e = local_2c[iStack_6c];
    if (cStack_2e == '\0') break;
    if ((('/' < cStack_2e) && (cStack_2e < ':')) || (('@' < cStack_2e && (cStack_2e < '[')))) {
      local_68[iStack_6e] = cStack_2e;
      iStack_6e = iStack_6e + 1;
    }
    iStack_6c = iStack_6c + 1;
  }
  if (iStack_6e == 0) {
    pcStack_6 = (char *)param_3;
    pcStack_8 = (char *)0xbf;
    pcStack_a = (char *)0xdab6;
    iStack_6e = func_0x00002e24();
    pcStack_6 = (char *)param_3;
    pcStack_8 = local_68;
    pcStack_a = (char *)0xbf;
    uStack_c = 0xdac8;
    func_0x00002dc6();
  }
  local_68[iStack_6e] = '.';
  pcStack_6 = (char *)param_4;
  pcStack_8 = local_68 + iStack_6e + 1;
  pcStack_a = (char *)0xbf;
  uStack_c = 0xdade;
  func_0x00002dc6();
  pcStack_6 = (char *)param_2;
  pcStack_8 = local_68 + 1;
  pcStack_a = (char *)0xbf;
  uStack_c = 0xdaed;
  iVar1 = func_0x00002df8();
  if (iVar1 != 0) {
LAB_2000_daf7:
    pcStack_6 = local_5a;
    pcStack_8 = (char *)0x0;
    pcStack_a = local_68;
    uStack_c = 0xbf;
    uStack_e = 0xdb06;
    iVar1 = func_0x00003a33();
    if (iVar1 == 0) {
      if (iStack_6e < 8) {
        pcStack_6 = (char *)0x8;
        pcStack_8 = (char *)0x30;
        pcStack_a = local_98;
        uStack_c = 0xbf;
        uStack_e = 0xdb24;
        func_0x0000382a();
        pcStack_6 = (char *)iStack_6e;
        pcStack_8 = local_68 + 1;
        pcStack_a = local_98;
        uStack_c = 0xbf;
        uStack_e = 0xdb38;
        func_0x00002e40();
        pcStack_6 = local_68 + iStack_6e + 1;
        pcStack_8 = local_90;
        pcStack_a = (char *)0xbf;
        uStack_c = 0xdb4c;
        func_0x00002dc6();
        iStack_6e = 8;
        pcStack_6 = local_98;
        pcStack_8 = local_68 + 1;
        pcStack_a = (char *)0xbf;
        uStack_c = 0xdb62;
        func_0x00002dc6();
      }
      for (iStack_6c = 8; ('/' < local_68[iStack_6c] && (local_68[iStack_6c] < ':'));
          iStack_6c = iStack_6c + -1) {
        if (local_68[iStack_6c] < '9') {
          local_68[iStack_6c] = local_68[iStack_6c] + '\x01';
          goto LAB_2000_daf7;
        }
        local_68[iStack_6c] = '0';
      }
      local_68[iStack_6c] = '1';
      goto LAB_2000_daf7;
    }
    pcStack_6 = local_68 + 1;
    pcStack_8 = (char *)param_2;
    pcStack_a = (char *)0xbf;
    uStack_c = 0xdba6;
    func_0x00003964();
  }
  pcStack_6 = local_68 + 1;
  pcStack_8 = (char *)param_2;
  pcStack_a = (char *)0xbf;
  uStack_c = 0xdbb5;
  func_0x00002dc6();
  return;
}
