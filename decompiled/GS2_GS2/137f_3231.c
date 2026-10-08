/* GS2.GS2 137f:3231 undefined FUN_137f_3231(void) */
int __cdecl16near FUN_137f_3231(void)

{
  byte bVar1;
  uint uVar2;
  int *in_BX;
  int *piVar3;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  do {
    while( true ) {
      if (*in_BX == 0) {
        return 0;
      }
      if ((in_BX[1] == 0) || (in_BX[1] <= *(int *)0x1ca9)) break;
      in_BX = in_BX + *in_BX * 2 + 6;
    }
    piVar3 = in_BX + 2;
    bVar1 = FUN_137f_0cd0();
    in_BX = piVar3 + 4;
  } while ((bVar1 & 1) == 0);
  piVar3 = (int *)((int)(piVar3 + 2) + piVar3[2]);
  uVar2 = (uint)((long)unaff_DI[2] * (long)piVar3[2]);
  return -(int)(((long)*unaff_DI * (long)*piVar3 +
                CONCAT22((int)((ulong)((long)unaff_DI[2] * (long)piVar3[2]) >> 0x10) + piVar3[4] +
                         (uint)CARRY2(uVar2,piVar3[3]),uVar2 + piVar3[3])) / (long)piVar3[1]);
}
