/* GS2.GS2 1000:0430 undefined FUN_1000_0430(void) */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00010d07) overlaps instruction at (ram,0x00010d06)
    */

uint __cdecl16far FUN_1000_0430(uint param_1)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  uint *puVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  byte bVar14;
  char *pcVar13;
  int in_CX;
  uint *puVar15;
  byte bVar16;
  uint in_DX;
  byte bVar17;
  uint in_BX;
  char *pcVar18;
  char *pcVar19;
  int unaff_BP;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint *unaff_SI;
  uint *puVar22;
  uint *unaff_DI;
  uint *puVar23;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte in_AF;
  bool bVar24;
  int in_stack_00000000;
  int in_stack_00000002;
  int aiStack_54 [30];
  uint *in_stack_0000ffe8;
  uint *in_stack_0000ffea;
  
  puVar20 = &stack0xfffe;
  puVar21 = &stack0xfffe;
  if (param_1 == 0x1500) {
    if (*(int *)0x3108 != 1) {
      return 0x1500;
    }
    *(undefined2 *)0x3104 = 1;
LAB_1000_057e:
    uVar12 = FUN_12a2_0b99();
    return uVar12;
  }
  if (param_1 == 0x2d00) {
    if (*(int *)0x3104 != 0) {
      *(undefined2 *)0x3104 = 0;
      *(undefined2 *)0x3108 = 3;
      return param_1;
    }
    *(undefined1 *)0x593d = *(undefined1 *)0x3bc1;
    *(undefined2 *)0x3108 = 3;
    goto LAB_1000_057e;
  }
  if (param_1 == 0x2f00) {
    uVar12 = CONCAT11(0x2f,*(undefined1 *)0x3bbf) & 0xff5f;
    if ((char)uVar12 == 'N') {
      return uVar12;
    }
    uVar12 = FUN_1000_0828();
    return uVar12;
  }
  uVar12 = param_1 - 0x1000;
  if ((uVar12 & 0x1ff) != 0) {
    return uVar12;
  }
  uVar11 = uVar12 >> 8;
  cVar9 = (char)in_BX;
  switch(uVar11) {
  case 0:
    if (*(char *)0xde != '\0') {
      thunk_EXT_FUN_0000_0000();
    }
    uVar5 = *(undefined2 *)0x18cc;
    *(undefined2 *)0x18cc = *(undefined2 *)0x18ca;
    FUN_17e0_0050();
    FUN_17e0_01fb();
    if (*(char *)0x3bbe == '\0') {
      thunk_EXT_FUN_0000_0000();
    }
    else {
      thunk_EXT_FUN_0000_0000();
    }
    thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0x18cc = uVar5;
    do {
      in_BX = FUN_171d_0293();
    } while (in_BX == 0);
    if (in_BX == 0x1579) {
      *(byte *)0x266 = *(byte *)0x266 | 8;
      *(undefined2 *)0x3104 = 0;
      in_BX = FUN_12a2_0b99();
    }
    if (*(char *)0xde != '\0') {
      in_BX = thunk_EXT_FUN_0000_0000();
    }
    break;
  case 1:
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    return (uint)*(byte *)(((((in_stack_00000000 << 1 | (uint)(unaff_BP < 0)) << 1 |
                             (uint)(unaff_BP << 1 < 0)) << 1 | (uint)(unaff_BP << 2 < 0)) -
                           (((uint)(byte)((byte)(((param_1 << 1 | (uint)(in_stack_00000002 < 0)) <<
                                                  1 | (uint)(in_stack_00000002 << 1 < 0)) << 1) |
                                         in_stack_00000002 << 2 < 0) << 8) >> 2)) + 0xfce);
  case 2:
    if ((*(int *)0x3ba0 < 3) || (*(char *)0x609 == '\0')) {
      *(undefined2 *)0x3104 = 0;
      goto LAB_1000_057e;
    }
    break;
  case 3:
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    *(char *)(uVar11 + (int)unaff_SI) = *(char *)(uVar11 + (int)unaff_SI) + cVar9;
    bVar17 = (byte)(uVar12 >> 8);
    pcVar19 = (char *)(uint)bVar17;
    *(uint *)(pcVar19 + (int)unaff_SI) = *(int *)(pcVar19 + (int)unaff_SI) + in_BX;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + cVar9;
    puVar15 = (uint *)(*(int *)(&stack0xfffe + (int)unaff_DI) * 0x71);
    uVar12 = in_DX | *(uint *)(&stack0xfffe + (int)unaff_SI);
    *pcVar19 = *pcVar19 + cVar9;
    *(char **)(pcVar19 + (int)unaff_SI) = (char *)(*(int *)(pcVar19 + (int)unaff_SI) + (int)puVar15)
    ;
    pcVar13 = (char *)(in_BX | 0xc);
    bVar7 = (byte)pcVar13;
    pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + bVar7;
    pbVar1 = (byte *)(pcVar19 + (int)unaff_SI + 1);
    bVar16 = (byte)uVar12;
    *pbVar1 = *pbVar1 & bVar16;
    bVar10 = *pbVar1;
    puVar6 = &stack0xfffe;
    puVar22 = unaff_SI;
    if ((char)bVar10 < '\x01') {
code_r0x000190c9:
      puVar20 = puVar6;
      bVar24 = bVar10 == 0;
      puVar21 = puVar20;
      unaff_SI = puVar22;
      puVar23 = unaff_DI;
      if (bVar24) {
code_r0x000190cb:
        puVar21 = puVar20;
        unaff_DI = puVar23;
        in_stack_0000ffe8 = puVar15;
        if (bVar24) {
          *(char *)puVar22 = (char)*puVar22 + (char)((uint)pcVar13 >> 8);
          *(char *)puVar22 = (char)*puVar22 + (char)pcVar13;
        }
        goto code_r0x000190d2;
      }
code_r0x000190e4:
      piVar3 = (int *)CONCAT11((char)((uint)pcVar19 >> 8) * '\x02',(char)pcVar19);
      *piVar3 = *piVar3 + 1;
      pcVar13 = (char *)CONCAT11((char)((uint)pcVar13 >> 8),(char)pcVar13 + 'R');
code_r0x000190ee:
      cVar8 = (char)((uint)(pcVar13 + -0xc75) >> 8);
      cVar9 = (char)(pcVar13 + -0xc75) + -0x1a;
      pcVar13 = (char *)CONCAT11(cVar8,cVar9);
      *unaff_DI = *unaff_DI | (uint)&stack0xffea;
      pcVar19 = (char *)CONCAT11((char)((uint)in_stack_0000ffe8 >> 8) * '\x02',
                                 (char)in_stack_0000ffe8);
      *(int *)(pcVar19 + (int)unaff_SI) = *(int *)(pcVar19 + (int)unaff_SI) + -1;
      puVar4 = (uint *)(pcVar19 + 0x2d);
      *puVar4 = *puVar4 | (uint)pcVar13;
      if (*puVar4 == 0) {
        pcVar19 = pcVar19 + -1;
        puVar4 = unaff_SI;
        *(char *)puVar4 = (char)*puVar4 + cVar9;
        bVar24 = (char)*puVar4 == '\0';
        puVar15 = (uint *)((int)puVar15 + -1);
        if (puVar15 == (uint *)0x0 || !bVar24) {
          pcVar19 = (char *)CONCAT11((char)((uint)pcVar19 >> 8) * '\x02',(char)pcVar19);
          *(int *)(pcVar19 + (int)unaff_DI) = *(int *)(pcVar19 + (int)unaff_DI) + -1;
          puVar15 = (uint *)CONCAT11((char)((uint)puVar15 >> 8),(char)puVar15 + cVar8);
          goto code_r0x00019110;
        }
        goto code_r0x00019112;
      }
      puVar15 = (uint *)((int)puVar15 + -1);
      if (puVar15 != (uint *)0x0 && *puVar4 == 0) goto code_r0x0001911a;
      uVar12 = ((uint)(pcVar13 + -0x7537) | 0x36) - 1;
    }
    else {
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + bVar7;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + bVar7;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + bVar7;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + bVar7;
      *(uint *)(pcVar19 + (int)unaff_SI) = *(uint *)(pcVar19 + (int)unaff_SI) | (uint)pcVar13;
      pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + bVar7;
      pcVar2 = (char *)((int)unaff_DI + 0x19);
      bVar10 = (byte)(uVar12 >> 8);
      *pcVar2 = *pcVar2 + bVar10;
      if (*pcVar2 == '\0') {
        *(byte *)unaff_DI = (char)*unaff_DI + bVar7 + (char)(in_BX >> 8) * '\t';
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      bVar14 = bVar7 / 2;
      bVar7 = bVar7 % 2;
      pcVar13 = (char *)CONCAT11(bVar14,bVar7);
      in_stack_0000ffe8 = unaff_DI;
      in_stack_0000ffea = unaff_SI;
      if (pcVar13 != (char *)0x0) {
        puVar20 = &stack0xfffe + uVar12;
        pcVar19[(int)unaff_DI] = pcVar19[(int)unaff_DI] + bVar7;
        *(byte *)unaff_SI = (char)*unaff_SI + bVar7;
        uVar12 = (uint)bVar10 << 8;
        puVar22 = (uint *)((int)unaff_SI + *(int *)((int)unaff_DI + 0x29));
        bVar24 = puVar22 == (uint *)0x0;
code_r0x000190b9:
        if (bVar24) {
          cVar9 = (char)pcVar13;
          *(uint *)(pcVar19 + (int)puVar22) = *(uint *)(pcVar19 + (int)puVar22) & (int)cVar9;
          cVar8 = cVar9 + 'G' + (puVar20 + (int)unaff_DI)[0x100];
          pcVar13 = (char *)CONCAT11(cVar9 >> 7,cVar8);
          *(char *)unaff_DI = (char)*unaff_DI + cVar8;
          pbVar1 = (byte *)(pcVar19 + 2);
          *pbVar1 = *pbVar1 + cVar8;
          bVar10 = *pbVar1;
          puVar6 = puVar20;
          goto code_r0x000190c9;
        }
        puVar23 = (uint *)((int)unaff_DI + 1);
        bVar24 = (char)((char)(uVar12 >> 8) + (char)unaff_DI[0xd]) == '\0';
        goto code_r0x000190cb;
      }
      if (pcVar13 == (char *)0x0) {
        out(0xc,bVar7);
        *(byte *)unaff_SI = (char)*unaff_SI + bVar7;
        pcVar19[(int)unaff_SI] = pcVar19[(int)unaff_SI] + bVar16;
        pcVar18 = (char *)CONCAT11(bVar14 * '\x02',bVar7);
        *(int *)(&stack0xfffe + (int)unaff_DI) = *(int *)(&stack0xfffe + (int)unaff_DI) + 1;
        pbVar1 = (byte *)(pcVar18 + (int)unaff_SI);
        bVar7 = *pbVar1;
        *pbVar1 = *pbVar1 + bVar17;
        pcVar2 = (char *)((int)unaff_DI + 0x29);
        *pcVar2 = *pcVar2 + bVar10 + CARRY1(bVar7,bVar17);
        bVar24 = *pcVar2 == '\0';
        pcVar13 = pcVar19;
        pcVar19 = pcVar18;
code_r0x000190a7:
        if (bVar24) {
          *(char *)unaff_SI = (char)*unaff_SI + (char)pcVar13;
          pbVar1 = &stack0xfffe + (int)unaff_DI;
          bVar10 = (byte)puVar15 & 7;
          *pbVar1 = *pbVar1 << bVar10 | *pbVar1 >> 8 - bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar1 = &stack0xfffe + (int)unaff_DI;
        bVar10 = (byte)puVar15 & 7;
        *pbVar1 = *pbVar1 << bVar10 | *pbVar1 >> 8 - bVar10;
        if (bVar24) goto code_r0x000190b9;
        pcVar13 = (char *)CONCAT11((char)((uint)pcVar13 >> 8),(char)pcVar13 + -0x22);
        goto code_r0x000190e4;
      }
      pcVar2 = pcVar19 + (int)unaff_SI;
      *pcVar2 = *pcVar2 + bVar16;
      bVar24 = *pcVar2 == '\0';
      if (bVar24) goto code_r0x000190a7;
      pcVar13 = (char *)CONCAT11(bVar14,bVar7 + 0x51);
      puVar21 = &stack0xfffe;
code_r0x000190d2:
      *(int *)0x5100 = *(int *)0x5100 + 1;
      unaff_SI = (uint *)((uint)puVar22 | *(uint *)((int)unaff_DI + 0x19));
      if (unaff_SI != (uint *)0x0) {
        unaff_DI = (uint *)((int)unaff_DI + 1);
        goto code_r0x000190ee;
      }
      if ((POPCOUNT((uint)unaff_SI & 0xff) & 1U) != 0) {
        *(char *)0x0 = *(char *)0x0 + (char)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x00019110:
      puVar4 = unaff_DI;
      *puVar4 = *puVar4 | (uint)puVar21;
      bVar24 = *puVar4 == 0;
code_r0x00019112:
      bVar10 = 9 < ((byte)pcVar13 & 0xf) | in_AF;
      uVar12 = CONCAT11((char)((uint)pcVar13 >> 8) + bVar10,(byte)pcVar13 + bVar10 * '\x06') &
               0xff0f;
      if (!bVar24) {
        bVar10 = (char)pcVar19 - bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        bVar10 = bVar10 ^ *(byte *)(uVar12 + (int)unaff_SI);
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
        *(char *)(uVar12 + (int)unaff_SI) = *(char *)(uVar12 + (int)unaff_SI) + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    pcVar13 = (char *)(uVar12 - 1);
    pcVar19[(int)unaff_DI] = pcVar19[(int)unaff_DI] + (char)pcVar13;
    in_stack_0000ffea = puVar15;
code_r0x0001911a:
    *(uint *)(pcVar19 + (int)unaff_DI) = *(uint *)(pcVar19 + (int)unaff_DI) & (uint)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    if ((*(byte *)0x3be5 & 2) != 0) {
      in_BX = thunk_EXT_FUN_0000_0000();
    }
    break;
  case 5:
  case 0x11:
  case 0x15:
    if (*(char *)(uVar11 + 0x489) == '\x01') {
      return in_BX;
    }
    FUN_12a2_0d5e();
    FUN_12a2_0d94();
    if ((*(int *)(*(int *)((int)aiStack_54 + in_CX) + 0x490) != 0) &&
       (*(char *)(*(int *)((int)aiStack_54 + in_CX) + 0x489) != '\x02')) {
      FUN_12a2_0d94();
    }
    FUN_12a2_0d94();
    uVar12 = thunk_EXT_FUN_0000_0000();
    return uVar12;
  case 7:
  case 9:
  case 0xb:
  case 0xd:
  case 0x17:
  case 0x19:
  case 0x1b:
    return in_BX;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    uVar12 = FUN_1000_0612();
    return uVar12;
  case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x14:
    if (*(char *)0x3bc1 != '\0') {
      uVar12 = FUN_1000_0ade();
      return uVar12;
    }
    break;
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1e:
    if (*(char *)0xde != '\0') {
      *(byte *)0xde = *(byte *)0xde ^ 0x80;
      return in_BX;
    }
  }
  return in_BX;
}
