/* GS2.GS2 137f:2109 undefined FUN_137f_2109(void) */
void __cdecl16near FUN_137f_2109(void)

{
  uint in_AX;
  uint uVar1;
  uint in_CX;
  int iVar2;
  uint in_DX;
  uint *puVar3;
  undefined2 unaff_DS;
  
  if ((int)in_AX < *(int *)0xee) {
    in_AX = *(uint *)0xee;
  }
  else if (*(int *)0xf0 < (int)in_AX) {
    in_AX = *(uint *)0xf0;
  }
  if ((int)in_CX < *(int *)0xee) {
    in_CX = *(uint *)0xee;
  }
  else if (*(int *)0xf0 < (int)in_CX) {
    in_CX = *(uint *)0xf0;
  }
  uVar1 = in_AX;
  if (in_CX < in_AX) {
    uVar1 = in_CX;
    in_CX = in_AX;
  }
  if (in_CX - uVar1 != 0) {
    iVar2 = (in_CX - uVar1) + 1;
    if (uVar1 < *(uint *)0x196a) {
      *(uint *)0x196a = uVar1;
    }
    puVar3 = (uint *)(uVar1 * 4 + 0x196c);
    do {
      if (in_DX < *puVar3) {
        *puVar3 = in_DX;
      }
      if ((int)puVar3[1] < (int)in_DX) {
        puVar3[1] = in_DX;
      }
      puVar3 = puVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
