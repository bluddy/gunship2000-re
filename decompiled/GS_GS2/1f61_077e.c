/* GS.GS2 1f61:077e undefined FUN_1f61_077e(void) */
undefined2 __cdecl16far FUN_1f61_077e(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_22;
  char local_20 [12];
  undefined1 uStack_14;
  undefined2 uStack_12;
  char local_10 [2];
  char *pcStack_e;
  
  FUN_10bf_02c0();
  if ((*(int *)0x86c2 != 0 || *(int *)0x86c0 != 0) && (*(int *)0x8692 < *(int *)0x8656)) {
    *(int *)0x8692 = *(int *)0x8692 + 1;
    while (*(int *)0x8692 < *(int *)0x8656) {
      pcStack_e = local_20;
      local_10[0] = -0x41;
      local_10[1] = '\x10';
      uStack_12 = 0xfde1;
      FUN_10bf_3130();
      uStack_14 = 0;
      FUN_10bf_2b48();
      pcStack_e = (char *)0xfe01;
      FUN_10bf_2c3a();
      pcStack_e = (char *)0xfe11;
      FUN_10bf_2c3a();
      for (iStack_22 = 0; iStack_22 < 9; iStack_22 = iStack_22 + 1) {
        cVar1 = local_20[iStack_22];
        uStack_12 = CONCAT11(uStack_12._1_1_,cVar1);
        if (cVar1 == '\0') break;
        if (cVar1 == '.') {
          FUN_10bf_2234();
          pcStack_e = (char *)0xfe53;
          FUN_10bf_2c0e();
          break;
        }
        (&stack0xfff4)[iStack_22] = cVar1;
      }
      for (iStack_22 = 0; iStack_22 < 8; iStack_22 = iStack_22 + 1) {
        if (*(char *)(iStack_22 + -0x79b4) == '*') {
          iStack_22 = 8;
          break;
        }
        if ((*(char *)(iStack_22 + -0x79b4) != '?') &&
           (*(char *)(iStack_22 + -0x79b4) != (&stack0xfff4)[iStack_22])) break;
      }
      if (iStack_22 == 8) {
        for (iStack_22 = 0; iStack_22 < 3; iStack_22 = iStack_22 + 1) {
          if (*(char *)(iStack_22 + -0x79c0) == '*') {
            iStack_22 = 3;
            break;
          }
          if ((*(char *)(iStack_22 + -0x79c0) != '?') &&
             (*(char *)(iStack_22 + -0x79c0) != local_10[iStack_22])) break;
        }
        if (iStack_22 == 3) {
          pcStack_e = (char *)param_1;
          local_10[0] = -0x41;
          local_10[1] = '\x10';
          uStack_12 = 0xfef8;
          FUN_10bf_3130();
          *(undefined1 *)(param_1 + 0xc) = 0;
          return 1;
        }
      }
      *(int *)0x8692 = *(int *)0x8692 + 1;
    }
  }
  if (*(int *)0x8666 != 0) {
    iVar2 = FUN_10bf_2e38();
    if (iVar2 == 0) {
      pcStack_e = (char *)0xff65;
      FUN_10bf_21d6();
      return 1;
    }
    return 0;
  }
  pcStack_e = (char *)0xff20;
  iVar2 = FUN_10bf_2e43();
  if (iVar2 == 0) {
    *(undefined2 *)0x8666 = 1;
    pcStack_e = (char *)0xff3d;
    FUN_10bf_21d6();
    return 1;
  }
  return 0;
}
