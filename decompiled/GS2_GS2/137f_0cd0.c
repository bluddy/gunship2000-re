/* GS2.GS2 137f:0cd0 undefined FUN_137f_0cd0(void) */
int __cdecl16near FUN_137f_0cd0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_CX;
  int *in_BX;
  int iVar5;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar5 = 0;
  *(int *)0x132c = *in_BX - *unaff_DI;
  *(int *)0x132e = in_BX[1] - unaff_DI[2];
  do {
    uVar1 = *(uint *)0x132c;
    uVar4 = *(uint *)0x132e;
    *(int *)0x132c = in_BX[2] - *unaff_DI;
    iVar2 = in_BX[3];
    iVar3 = unaff_DI[2];
    *(uint *)0x132e = iVar2 - iVar3;
    if (((int)(iVar2 - iVar3 ^ uVar4) < 0) && (-1 < (int)(uVar1 & *(uint *)0x132c))) {
      if ((int)(*(uint *)0x132c | uVar1) < 0) {
        uVar4 = (uint)(((long)(int)(*(int *)0x132c - uVar1) * (long)(int)uVar4) /
                      (long)(int)(*(int *)0x132e - uVar4));
        if ((int)uVar1 < (int)uVar4) goto LAB_137f_0d37;
        if (uVar4 == uVar1) {
          do {
            in_CX = in_CX + -1;
          } while (in_CX != 0);
          return 1;
        }
      }
      iVar5 = iVar5 + 1;
    }
LAB_137f_0d37:
    in_CX = in_CX + -1;
    in_BX = in_BX + 2;
    if (in_CX == 0) {
      return iVar5;
    }
  } while( true );
}
