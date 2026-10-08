/* GS2.GS2 137f:3038 undefined FUN_137f_3038(void) */
void __cdecl16near FUN_137f_3038(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_SI;
  int iVar6;
  undefined2 unaff_DS;
  
  if (DAT_137f_2888 != 0) {
    while( true ) {
      iVar5 = -0x8000;
      iVar4 = 0;
      uVar2 = DAT_137f_2888 >> 1;
      do {
        iVar6 = *(int *)(iVar4 + 0x288a);
        if (*(int *)(iVar6 + 10) != -0x8000) {
          if (*(int *)*(undefined4 *)(iVar6 + 0x18) == 1) goto LAB_137f_3097;
          uVar3 = (int)*(uint *)(iVar6 + 2) >> 0xf;
          iVar1 = (((*(uint *)(iVar6 + 2) ^ uVar3) - uVar3) + *(int *)(iVar6 + 0xc) +
                  *(int *)(iVar6 + 10)) - *(int *)(iVar6 + 6);
          if (iVar5 < iVar1) {
            iVar5 = iVar1;
            unaff_SI = iVar6;
          }
        }
        iVar4 = iVar4 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      iVar6 = unaff_SI;
      if (iVar5 == -0x8000) break;
LAB_137f_3097:
      *(int *)0x1ca5 = iVar6;
      *(undefined1 *)0xfd = 0;
      if (*(int *)0x1c9e <= iVar5) {
        *(undefined1 *)0xfd = 0x80;
      }
      iVar5 = *(int *)0x1ca5;
      (*(code *)*(undefined2 *)(iVar5 + 0x14))();
      if (iVar5 != 0) {
        FUN_137f_146d();
        FUN_137f_062a();
      }
      unaff_SI = *(int *)0x1ca5;
      *(undefined2 *)(unaff_SI + 10) = 0x8000;
      *(undefined1 *)0xfd = 0;
    }
    DAT_137f_2888 = 0;
  }
  return;
}
