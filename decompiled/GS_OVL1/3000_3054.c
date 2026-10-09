/* GS.GS2 3000:3054 undefined FUN_3000_3054(void) */
void __cdecl16far FUN_3000_3054(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  bool bVar5;
  int iVar6;
  
  func_0x00000eb0();
  FUN_3000_3aee(*(undefined2 *)(param_1 + 2));
  iVar1 = FUN_3000_0f44();
  iVar4 = ((*(int *)(param_1 + 6) - *(int *)(param_2 * 0xc + 0x2ae0)) - iVar1) + *(int *)0xc364;
  iVar1 = 0xbf;
  FUN_3000_0f6a(iVar4);
  if (*(int *)0xc01c - param_2 == 1) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 0;
  }
  if (param_2 == 9) {
    do {
      bVar5 = iVar1 != 0;
      iVar1 = iVar1 + -1;
    } while (bVar5);
  }
  iVar1 = *(int *)0xc378 + 0x18;
  uVar2 = FUN_3000_0f6a(iVar1,*(int *)0xc37a + 0x12,iVar4,iVar6);
  uVar2 = FUN_3000_0f44(uVar2);
  iVar3 = FUN_3000_118e(*(int *)(param_1 + 6) + 0xc,*(int *)(param_1 + 8) + 9,uVar2);
  if (iVar3 != 0) {
    iVar3 = param_2 * 0xc;
    FUN_3000_20d6(0xffff,2,1,*(undefined2 *)(iVar3 + 0x2ad8),
                  *(int *)(iVar3 + 0x2ada) + iVar6 + iVar4,*(undefined2 *)(iVar3 + 0x2adc),
                  *(undefined2 *)(iVar3 + 0x2ade),iVar4,iVar1,0xffff);
    if (((*(char *)((int)*(undefined4 *)0xb85c + *(int *)(param_1 + 2) * 8 + 2) == '\x01') &&
        (param_2 != 10)) && (param_2 != 0xb)) {
      iVar3 = 0xbf;
      iVar1 = FUN_3000_3aee(*(undefined2 *)(*(int *)0xc018 * 0xb + -0x4360));
      if (param_2 == 9) {
        do {
          bVar5 = iVar1 != 0;
          iVar1 = iVar1 + -1;
        } while (bVar5);
      }
      param_2 = param_2 * 0xc;
      FUN_3000_20d6(0xffff,2,1,*(undefined2 *)(param_2 + 0x2ad8),
                    *(int *)(param_2 + 0x2ada) + iVar6 + iVar4 + -4,
                    *(undefined2 *)(param_2 + 0x2adc),*(undefined2 *)(param_2 + 0x2ade),iVar4 + -4,
                    iVar3 + 5,0xffff);
      FUN_3000_20d6(0xffff,2,1,*(undefined2 *)(param_2 + 0x2ad8),
                    *(int *)(param_2 + 0x2ada) + iVar6 + iVar4 + 4,*(undefined2 *)(param_2 + 0x2adc)
                    ,*(undefined2 *)(param_2 + 0x2ade),iVar4 + 4,iVar3 + 5,0xffff);
    }
  }
  return;
}
