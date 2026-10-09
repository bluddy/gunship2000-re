/* GS.GS2 3000:24c4 undefined FUN_3000_24c4(void) */
undefined2 __cdecl16far FUN_3000_24c4(int param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  if (param_2 == 0) {
    iVar3 = FUN_3000_3aee(param_1);
    *(char *)0x2b98 = *(char *)0x2b98 + (char)iVar3;
    while (iVar3 != 0) {
      bVar2 = *(byte *)((int)*(undefined4 *)0xa278 +
                        (uint)*(byte *)((int)*(undefined4 *)0xb85c + (iVar3 + -1 + param_1) * 8 + 1)
                        * 0x1b + 1);
      pcVar1 = (char *)((uint)(byte)((bVar2 - 9 & -(bVar2 < 9)) + 9) * 10 + 0x2ba2);
      *pcVar1 = *pcVar1 + -1;
      iVar3 = iVar3 + -1;
    }
  }
  else {
    for (iVar3 = 1; iVar3 < 0xc; iVar3 = iVar3 + 1) {
      if ('Z' < *(char *)(iVar3 * 10 + 0x2b98)) {
        iVar3 = 99;
      }
    }
    if (((0x4a < *(int *)0xc018) || (*(char *)0x2b98 < -0x5a)) || (0x62 < iVar3)) {
      FUN_3000_12b0(*(undefined2 *)0xa30,*(undefined2 *)0xa32);
      return 0;
    }
    if (param_2 != -1) {
      iVar3 = FUN_3000_3aee(param_1);
      *(char *)0x2b98 = *(char *)0x2b98 - (char)iVar3;
      while (iVar3 != 0) {
        bVar2 = *(byte *)((int)*(undefined4 *)0xa278 +
                          (uint)*(byte *)((int)*(undefined4 *)0xb85c + (iVar3 + -1 + param_1) * 8 +
                                         1) * 0x1b + 1);
        pcVar1 = (char *)((uint)(byte)((bVar2 - 9 & -(bVar2 < 9)) + 9) * 10 + 0x2ba2);
        *pcVar1 = *pcVar1 + '\x01';
        iVar3 = iVar3 + -1;
      }
    }
  }
  FUN_3000_1206();
  return 0xffff;
}
