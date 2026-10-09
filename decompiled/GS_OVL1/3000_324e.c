/* GS.GS2 3000:324e undefined FUN_3000_324e(void) */
void __cdecl16far FUN_3000_324e(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iVar4;
  int iVar5;
  
  func_0x00000eb0();
  iVar2 = FUN_3000_0f44();
  FUN_3000_0f6a();
  iVar4 = 0x3275;
  func_0x0000c928(0xbf,4);
  while (iVar4 != 0) {
    iVar5 = (iVar4 + -1) * 0xb;
    bVar1 = *(byte *)((int)*(undefined4 *)0xa278 +
                      (uint)*(byte *)((int)*(undefined4 *)0xb85c + *(int *)(iVar5 + -0x4360) * 8 + 1
                                     ) * 0x1b + 1);
    iVar4 = 0xc87;
    FUN_3000_3054(iVar5 + -0x4362,(bVar1 - 9 & -(bVar1 < 9)) + 9);
  }
  if (*(int *)0xc4d8 != 9999) {
    if (*(char *)0xe28c == '\x02') {
      if ((*(int *)0xc4da < 0x32) || (0x451 < *(int *)0xc4da)) {
        iVar4 = FUN_3000_118e(*(undefined2 *)0xc4d8,*(undefined2 *)0xc4da,iVar2 - *(int *)0x2d7c,
                              *(int *)0xc37a + -1,*(int *)0x2d7c * 2 + *(int *)0xc378 + -1);
        if (iVar4 != 0) {
          iVar4 = *(int *)0xc4da + -1 + *(int *)0xc366;
          iVar5 = *(int *)0xc37a + *(int *)0xc366 + -1;
          if (iVar5 < iVar4) {
            iVar4 = iVar5;
          }
          if (iVar4 < *(int *)0xc366) {
            iVar4 = *(int *)0xc366;
          }
          iVar5 = (*(int *)0xc364 - iVar2) + *(int *)0xc4d8 + *(int *)0x2d7c;
          iVar3 = *(int *)0xc364 + *(int *)0xc378 + -1;
          if (iVar3 < iVar5) {
            iVar5 = iVar3;
          }
          if (iVar5 < *(int *)0xc364) {
            iVar5 = *(int *)0xc364;
          }
          iVar2 = ((*(int *)0xc364 - *(int *)0x2d7c) - iVar2) + *(int *)0xc4d8;
          if (iVar3 < iVar2) {
            iVar2 = iVar3;
          }
          if (iVar2 < *(int *)0xc364) {
            iVar2 = *(int *)0xc364;
          }
          func_0x00016e72(0xc87,0x880,iVar2,iVar4,iVar5,iVar4);
        }
      }
      else {
        iVar4 = FUN_3000_118e(*(undefined2 *)0xc4d8,*(undefined2 *)0xc4da,iVar2,
                              (*(int *)0x2d7c * 2 + *(int *)0xc37a + -1) - *(int *)0x2d7c,
                              *(int *)0xc378 + -1);
        if (iVar4 != 0) {
          iVar4 = *(int *)0xc4da + -1 + *(int *)0x2d7c + *(int *)0xc366;
          iVar5 = *(int *)0xc37a + *(int *)0xc366 + -1;
          if (iVar5 < iVar4) {
            iVar4 = iVar5;
          }
          if (iVar4 < *(int *)0xc366) {
            iVar4 = *(int *)0xc366;
          }
          iVar3 = *(int *)0xc364 + *(int *)0xc378 + -1;
          iVar2 = (*(int *)0xc364 - iVar2) + *(int *)0xc4d8;
          if (iVar3 < iVar2) {
            iVar2 = iVar3;
          }
          if (iVar2 < *(int *)0xc364) {
            iVar2 = *(int *)0xc364;
          }
          iVar3 = (*(int *)0xc4da - *(int *)0x2d7c) + -1 + *(int *)0xc366;
          if (iVar5 < iVar3) {
            iVar3 = iVar5;
          }
          if (iVar3 < *(int *)0xc366) {
            iVar3 = *(int *)0xc366;
          }
          func_0x00016e72(0xc87,0x880,iVar2,iVar3,iVar2,iVar4);
        }
      }
    }
    FUN_3000_3054(0xc4d2,10);
  }
  if (*(int *)0xc4e6 != 9999) {
    FUN_3000_3054(0xc4e0,0xb);
  }
  if (*(int *)0xc4f6 != 9999) {
    FUN_3000_3054(0xc4f0,0xc);
  }
  if (*(int *)0xc50a != 9999) {
    FUN_3000_3054(0xc504,0xd);
  }
  if (*(int *)0xc368 != 9999) {
    iVar5 = 0x34b0;
    iVar2 = FUN_3000_0f6a(0xffff);
    iVar5 = iVar5 * 0xc;
    iVar4 = ((*(int *)0xc36a - *(int *)(iVar5 + 0x2ae2)) - iVar2) + *(int *)0xc366;
    iVar2 = FUN_3000_0f44(iVar4);
    FUN_3000_20d6(0xffff,2,1,*(undefined2 *)(iVar5 + 0x2ad8),*(int *)(iVar5 + 0x2ada) + iVar4,
                  *(undefined2 *)(iVar5 + 0x2adc),*(undefined2 *)(iVar5 + 0x2ade),
                  ((*(int *)0xc364 - *(int *)(iVar5 + 0x2ae0)) - iVar2) + *(int *)0xc368);
  }
  if (*(int *)0xbc70 != 9999) {
    iVar5 = 0x352a;
    iVar2 = FUN_3000_0f6a(0xffff);
    iVar5 = iVar5 * 0xc;
    iVar4 = ((*(int *)0xbc72 - *(int *)(iVar5 + 0x2ae2)) - iVar2) + *(int *)0xc366;
    iVar2 = FUN_3000_0f44(iVar4);
    FUN_3000_20d6(0xffff,2,1,*(undefined2 *)(iVar5 + 0x2ad8),*(int *)(iVar5 + 0x2ada) + iVar4,
                  *(undefined2 *)(iVar5 + 0x2adc),*(undefined2 *)(iVar5 + 0x2ade),
                  ((*(int *)0xc364 - *(int *)(iVar5 + 0x2ae0)) - iVar2) + *(int *)0xbc70);
  }
  return;
}
