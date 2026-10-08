/* GS2.GS2 137f:2e8a undefined FUN_137f_2e8a(void) */
void __cdecl16near FUN_137f_2e8a(void)

{
  byte *in_AX;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x1ca3 = in_AX;
  *(undefined2 *)0x186 = 1;
  *(int *)0x1ca5 = (uint)*in_AX * 0x24 + 0x3bf4;
  *(int *)0x1cb8 = *(int *)0x1cad - *(int *)0x1ca7;
  *(int *)0x1cba = -*(int *)0x1ca9;
  *(int *)0x1cbc = *(int *)0x1caf - *(int *)0x1cab;
  FUN_137f_1423();
  iVar4 = *(int *)0x1ca5;
  uVar1 = *(int *)(iVar4 + 10) + *(int *)(iVar4 + 0xc);
  if (uVar1 < *(uint *)0x1ca0) {
    iVar2 = (int)uVar1 >> (*(byte *)0x1cb7 & 0x1f);
    iVar3 = *(int *)(iVar4 + 2);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 <= iVar2) {
      iVar4 = *(int *)(iVar4 + 6);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 <= iVar2) {
        FUN_137f_2e5d();
        iVar4 = *(int *)0x1ca5;
        *(int *)(iVar4 + 0x1e) = -*(int *)0x1cb8;
        *(int *)(iVar4 + 0x20) = -*(int *)0x1cba;
        *(int *)(iVar4 + 0x22) = -*(int *)0x1cbc;
        FUN_137f_13bf();
        FUN_137f_146d();
        FUN_137f_062a();
      }
    }
  }
  return;
}
