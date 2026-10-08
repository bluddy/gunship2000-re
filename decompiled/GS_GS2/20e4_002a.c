/* GS.GS2 20e4:002a undefined FUN_20e4_002a(void) */
int __cdecl16far FUN_20e4_002a(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int iStack_8;
  int iStack_6;
  
  uVar5 = 0x10bf;
  FUN_10bf_02c0();
  if ((param_1 < 0x1e) || (0x31 < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iStack_8 = 0;
  while( true ) {
    iVar2 = *(int *)0x9184;
    if (iVar2 <= iStack_8) {
      if (iVar2 < 0x1e) {
        *(int *)0x9184 = *(int *)0x9184 + 1;
      }
      else {
        iVar2 = *(int *)0x9182 + 1;
        for (iStack_8 = 0; iStack_8 < 0x1e; iStack_8 = iStack_8 + 1) {
          if (*(int *)(iStack_8 * 2 + -0x6e7a) < iVar2) {
            iVar2 = *(int *)(iStack_8 * 2 + -0x6e7a);
          }
        }
      }
      iStack_6 = 0x10bf;
      iStack_8 = 0xf33;
      iVar2 = FUN_20e4_0276(param_1);
      if (iVar2 != 0) {
        if ((((*(int *)0xb832 == 4) || (*(int *)0xb832 == 5)) && (0x1d < param_1)) &&
           (param_1 < 0x3c)) {
          uVar5 = 0x2581;
          iStack_8 = 0xf5e;
          FUN_2581_0686(4);
        }
        iStack_6 = (iStack_8 >> 3) * 0x50;
        iStack_8 = 0x892;
        uVar3 = (iStack_6 + 1) * (param_1 - *(int *)0x91fe);
        uVar4 = (int)uVar3 >> 0xf;
        thunk_EXT_FUN_0000_0000
                  (uVar5,0x8b6,(((int)((uVar3 ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4) * 0x50,
                   ((int)uVar3 % 8) * 0x19,0x50,(iStack_6 + 1) * 0x19);
      }
      iVar2 = iStack_8 * 2;
      *(int *)(iVar2 + -0x6e3e) = param_1;
      *(int *)0x9182 = *(int *)0x9182 + 1;
      uVar5 = *(undefined2 *)0x9182;
      *(undefined2 *)(iVar2 + -0x6e7a) = uVar5;
      if (iStack_6 != 0) {
        *(int *)(iVar2 + -0x6e3c) = -param_1;
        *(undefined2 *)(iVar2 + -0x6e78) = uVar5;
      }
      return iStack_8;
    }
    if ((*(int *)(iStack_8 * 2 + -0x6e3e) == param_1) &&
       ((!bVar1 || ((iStack_8 < iVar2 + -1 && (param_1 + *(int *)(iStack_8 * 2 + -0x6e3c) == 0))))))
    break;
    iStack_8 = iStack_8 + 1;
  }
  *(int *)0x9182 = *(int *)0x9182 + 1;
  *(undefined2 *)(iStack_8 * 2 + -0x6e7a) = *(undefined2 *)0x9182;
  return iStack_8;
}
