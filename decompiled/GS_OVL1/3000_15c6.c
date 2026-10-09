/* GS.GS2 3000:15c6 undefined FUN_3000_15c6(void) */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0003050f) overlaps instruction at (ram,0x0003050e)
    */

uint __cdecl16far
FUN_3000_15c6(int *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,int param_5,
             int param_6,int param_7,int param_8,int param_9)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int in_CX;
  char extraout_DL;
  uint in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  int unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_1a;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_e;
  int iStack_a;
  int iStack_8;
  
  func_0x00000eb0();
  if ((*(int *)0xc01c == 0) && ((char)param_1 == '\0')) {
    param_1 = (int *)CONCAT11(param_1._1_1_,6);
  }
  uVar6 = (uint)(char)param_1;
  if (6 < uVar6) {
    return uVar6;
  }
  iVar7 = uVar6 * 2;
  switch(uVar6) {
  case 0:
    pcVar1 = (char *)(unaff_DI + -0x41e2);
    cVar3 = *pcVar1;
    *pcVar1 = *pcVar1 + (char)in_CX;
    if (SCARRY1(cVar3,(char)in_CX)) {
      pcVar1 = (char *)(iVar7 + unaff_SI + -0x73);
      cVar3 = *pcVar1;
      *pcVar1 = *pcVar1 + extraout_DL;
      if (SCARRY1(cVar3,extraout_DL)) {
        return 0xffff;
      }
    }
    else {
      pcVar1 = (char *)(iVar7 + unaff_SI + -0x66);
      *pcVar1 = *pcVar1 + extraout_DL;
      (&stack0x0cc2)[unaff_DI] = (&stack0x0cc2)[unaff_DI] & (byte)in_BX;
      if ((in_BX != 0) &&
         ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc4f0 * 0x27 + 0x24) & 2) == 0)) {
        func_0x00022c94();
        func_0x000219cc();
        return 0xffff;
      }
      if (*(int *)0xbc70 == 9999) {
        return in_BX;
      }
      func_0x0000582f();
      func_0x00005ba0();
      func_0x000059f5();
    }
    func_0x0000582f();
    func_0x00005ba0();
    func_0x000059f5();
    uVar6 = func_0x0002118e();
    if ((uVar6 != 0) &&
       ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc504 * 0x27 + 0x24) & 2) == 0)) {
      func_0x00022c94();
      func_0x000219cc();
      uVar6 = 0xffff;
    }
    return uVar6;
  case 1:
    func_0x000219cc();
    if (((((int)param_4._2_2_ < 0xb) || (0x11 < (int)param_4._2_2_)) &&
        ((*(int *)0xc01c != 0 || ((int)param_4._2_2_ < 0x12)))) && (*param_1 != 1)) {
      *param_2 = 0;
      *param_3 = *(undefined2 *)(*(int *)0xc358 + 1);
      *(undefined2 *)param_4 = *(undefined2 *)(*(int *)0xc358 + 3);
    }
    else {
      func_0x000210a4();
    }
    return param_4._2_2_;
  case 2:
    while( true ) {
      if (iStack_a <= (int)uStack_e._2_2_) break;
      uStack_e._0_2_ = 0;
      while( true ) {
        if (unaff_CS <= (int)(uint)uStack_e) break;
        *(undefined1 *)(iStack_8 + (uint)uStack_e) =
             *(undefined1 *)((int)(undefined2 *)param_4 + (uint)uStack_e);
        uStack_e._0_2_ = (uint)uStack_e + 1;
      }
      iStack_8 = iStack_8 + 0x140;
      param_4 = (undefined2 *)
                CONCAT22(param_4._2_2_,(undefined2 *)((int)(undefined2 *)param_4 + unaff_CS));
      uStack_e = (ulong)(uStack_e._2_2_ + 1) << 0x10;
    }
    return uStack_e._2_2_;
  case 3:
    *(int *)0x11e8 = *(int *)0x11e8 + -1;
    if (*(int *)0xc4f6 != 9999) {
      if (*(char *)0x2a05 == '\0') {
        puVar4 = (undefined2 *)
                 ((uint)*(byte *)((int)*(undefined4 *)0xa278 +
                                  (uint)*(byte *)((int)*(undefined4 *)0xb85c + *(int *)0xc4f2 * 8 +
                                                 1) * 0x1b + 1) * 10 + 0x2b9e);
        (*(code *)*puVar4)();
      }
      else {
        FUN_3000_634a();
      }
      if (*(int *)0xc368 != 9999) {
        if ((*(int *)0xc375 == 2) && ((*(char *)0x29f3 != '\0' || (*(char *)0x2a05 != '\0')))) {
          FUN_3000_7e26();
        }
        func_0x0000582f();
        func_0x00005ba0();
        func_0x000059f5();
        func_0x0000582f();
        func_0x00005ba0();
        func_0x000059f5();
        FUN_3000_20d6();
      }
      func_0x0000582f();
      func_0x00005ba0();
      func_0x000059f5();
      func_0x0000582f();
      func_0x00005ba0();
      func_0x000059f5();
      in_BX = FUN_3000_20d6();
    }
    if (*(int *)0xc50a != 9999) {
      if (*(char *)0x2a05 == '\0') {
        puVar4 = (undefined2 *)
                 ((uint)*(byte *)((int)*(undefined4 *)0xa278 +
                                  (uint)*(byte *)((int)*(undefined4 *)0xb85c + *(int *)0xc506 * 8 +
                                                 1) * 0x1b + 1) * 10 + 0x2b9e);
        (*(code *)*puVar4)();
      }
      else {
        FUN_3000_634a();
      }
      if (*(int *)0xbc70 != 9999) {
        if ((*(int *)0xbc7d == 2) && ((*(char *)0x29f3 != '\0' || (*(char *)0x2a05 != '\0')))) {
          FUN_3000_7e26();
        }
        func_0x0000582f();
        func_0x00005ba0();
        func_0x000059f5();
        func_0x0000582f();
        func_0x00005ba0();
        func_0x000059f5();
        FUN_3000_20d6();
      }
      func_0x0000582f();
      func_0x00005ba0();
      func_0x000059f5();
      func_0x0000582f();
      func_0x00005ba0();
      func_0x000059f5();
      in_BX = FUN_3000_20d6();
    }
    return in_BX;
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    (&stack0x0001)[unaff_SI] = (&stack0x0001)[unaff_SI] + (char)((uint)in_CX >> 8);
    func_0x0000c980();
    if ((int)param_1 < 0) {
      func_0x0000c928();
    }
    else {
      func_0x0000c928();
    }
    func_0x0000c8c0();
    while( true ) {
      puVar5 = param_2;
      cVar3 = (char)param_2;
      param_2 = (undefined2 *)(uint)(byte)((char)param_2 - 1);
      if (cVar3 == '\0') break;
      func_0x0000c9f6();
      func_0x000038b8();
      func_0x0000ca66();
    }
    return (uint)puVar5 & 0xff;
  }
  if (in_CX == 0) {
    pcVar1 = (char *)(iVar7 + unaff_DI + -0x3caa);
    *pcVar1 = *pcVar1 + (char)(in_BX >> 8);
    func_0x0000582f();
    func_0x00005ae1();
    func_0x00005cec();
    func_0x000059f5();
    func_0x0000582f();
    func_0x000058f7();
    uVar6 = FUN_3000_1abe();
    return uVar6;
  }
  LOCK();
  iVar2 = *(int *)(iVar7 + unaff_BP);
  *(int *)(iVar7 + unaff_BP) = unaff_BP;
  UNLOCK();
  pcVar1 = (char *)(iVar7 + iVar2);
  *pcVar1 = *pcVar1 + (byte)in_BX;
  if (param_9 == 0) {
    iVar7 = 0;
    iStack_a = 0;
    iStack_10 = 0x140;
    iStack_14 = 200;
  }
  else {
    iStack_a = *(int *)0xc366;
    iVar7 = *(int *)0xc364;
    iStack_10 = iVar7 + *(int *)0xc378;
    iStack_14 = iStack_a + *(int *)0xc37a;
  }
  if (param_7 < iVar7) {
    param_4 = (undefined2 *)
              CONCAT22(param_4._2_2_,(undefined2 *)((int)(undefined2 *)param_4 + (iVar7 - param_7)))
    ;
    param_5 = param_5 + (param_7 - iVar7);
    param_7 = iVar7;
  }
  else {
    iVar7 = iStack_10 - param_7;
    if (param_5 < iStack_10 - param_7) {
      iVar7 = param_5;
    }
    param_5 = iVar7;
    if (iVar7 < 0) {
      param_5 = 0;
    }
  }
  if (param_8 < iStack_a) {
    param_4 = (undefined2 *)CONCAT22(param_4._2_2_ + (iStack_a - param_8),(undefined2 *)param_4);
    iVar7 = param_8 - iStack_a;
    param_8 = iStack_a;
    param_6 = param_6 + iVar7;
  }
  else {
    iVar7 = iStack_14 - param_8;
    if (param_6 < iStack_14 - param_8) {
      iVar7 = param_6;
    }
    param_6 = iVar7;
    if (iVar7 < 0) {
      param_6 = 0;
    }
  }
  if (param_1 == (int *)0x0) {
    uVar6 = (param_6 + param_4._2_2_) * 0x140 + (uint)uStack_e;
    iStack_8 = iStack_8 + param_8 * 0x140;
    for (uStack_e._0_2_ = (uint)uStack_e + param_4._2_2_ * 0x140; (uint)uStack_e < uVar6;
        uStack_e._0_2_ = (uint)uStack_e + 0x140) {
      for (iStack_1a = 0; iStack_1a < param_5; iStack_1a = iStack_1a + 1) {
        *(undefined1 *)(iStack_8 + iStack_1a + param_7) =
             *(undefined1 *)((uint)uStack_e + iStack_1a + (int)(undefined2 *)param_4);
      }
      iStack_8 = iStack_8 + 0x140;
    }
    return uVar6;
  }
  uVar6 = (param_6 + param_4._2_2_) * 0x140 + (uint)uStack_e;
  iStack_8 = iStack_8 + param_8 * 0x140;
  for (uStack_e._0_2_ = (uint)uStack_e + param_4._2_2_ * 0x140; (uint)uStack_e < uVar6;
      uStack_e._0_2_ = (uint)uStack_e + 0x140) {
    for (iStack_1a = 0; iStack_1a < param_5; iStack_1a = iStack_1a + 1) {
      cVar3 = *(char *)((uint)uStack_e + iStack_1a + (int)(undefined2 *)param_4);
      if (cVar3 != '\0') {
        *(char *)(iStack_8 + iStack_1a + param_7) = cVar3;
      }
    }
    iStack_8 = iStack_8 + 0x140;
  }
  return uVar6;
}
