/* GS.GS2 10bf:52dc undefined FUN_10bf_52dc(void) */
undefined2 __cdecl16far
FUN_10bf_52dc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *in_DX;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined2 uVar5;
  
  *(undefined2 *)0x70ee = param_1;
  *(undefined2 *)0x70f0 = param_2;
  *(undefined2 *)0x70f2 = param_3;
  *(undefined2 *)0x70f4 = param_4;
  uVar5 = *(undefined2 *)0x6ea8;
  *(undefined2 *)0x6ea8 = 0x70fe;
  uVar2 = (*in_DX)(&stack0xfffe);
  *(undefined2 *)0x6ea8 = unaff_DI;
  if (!(bool)in_CF) {
    return 0x70fe;
  }
  uVar4 = uVar2 & 0xff;
  *(undefined2 *)0x70ec = uVar5;
  *(undefined1 *)0x7115 = 0;
  if (uVar2 == 0x302) {
    *(undefined1 *)0x7115 = 1;
  }
  if ((char)(uVar2 >> 8) != '\x03') {
    if ((char)uVar2 != '\a') {
      if ((char)uVar2 == '\x03') {
        *(undefined2 *)0x70fe = *(undefined2 *)0x70e0;
        *(undefined2 *)0x7100 = *(undefined2 *)0x70e2;
        *(undefined2 *)0x7102 = *(undefined2 *)0x70e4;
        *(undefined2 *)0x7104 = *(undefined2 *)0x70e6;
      }
      else {
        *(undefined2 *)0x70fe = 0;
        *(undefined2 *)0x7100 = 0;
        *(undefined2 *)0x7102 = 0;
        *(undefined2 *)0x7104 = 0;
      }
      goto LAB_10bf_535d;
    }
    uVar4 = 3;
  }
  *(undefined2 *)0x70fe = *(undefined2 *)0x70e0;
  *(undefined2 *)0x7100 = *(undefined2 *)0x70e2;
  *(undefined2 *)0x7102 = *(undefined2 *)0x70e4;
  *(undefined2 *)0x7104 = *(undefined2 *)0x70e6;
  *(byte *)0x7105 = *(byte *)0x7105 | 0x80;
LAB_10bf_535d:
  *(uint *)0x70ea = uVar4;
  iVar3 = FUN_10bf_52b4(0x70ea);
  if (iVar3 == 0) {
    cVar1 = '!';
    if ((*(char *)0x7115 != '\0') || (2 < *(uint *)0x70ea)) {
      cVar1 = '\"';
    }
    *(int *)0x6864 = (int)cVar1;
    iVar3 = *(int *)(uVar4 * 2 + 0x7104);
    if (iVar3 != 0) {
      FUN_10bf_2d58();
      FUN_10bf_2d58();
      FUN_10bf_0543(iVar3);
    }
  }
  return 0x70fe;
}
