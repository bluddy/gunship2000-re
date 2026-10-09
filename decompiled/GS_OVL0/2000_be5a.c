/* GS.GS2 2000:be5a undefined FUN_2000_be5a(void) */
void __cdecl16far FUN_2000_be5a(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int iVar4;
  
  func_0x00000eb0();
  uStack_6 = 0xffff;
  iVar4 = 0x7fff;
  uStack_a = 0;
  uStack_8 = -0x8000;
  for (uStack_c = 0; uStack_c < 6; uStack_c = uStack_c + 1) {
    if (*(char *)0xe281 != uStack_c) {
      iVar3 = uStack_c * 4;
      iVar1 = *(int *)(iVar3 + param_1 + 2);
      if ((iVar1 <= iVar4) && ((iVar1 < iVar4 || (*(uint *)(iVar3 + param_1) < uStack_6)))) {
        uStack_6 = *(uint *)(iVar3 + param_1);
        iVar4 = *(int *)(iVar3 + param_1 + 2);
      }
      iVar3 = uStack_c * 4;
      iVar1 = *(int *)(iVar3 + param_1 + 2);
      if ((uStack_8 <= iVar1) && ((uStack_8 < iVar1 || (uStack_a < *(uint *)(iVar3 + param_1))))) {
        uStack_a = *(uint *)(iVar3 + param_1);
        uStack_8 = *(int *)(iVar3 + param_1 + 2);
      }
    }
  }
  iVar1 = *(int *)(*(char *)0xe281 * 4 + param_1 + 2);
  if ((iVar1 < uStack_8) ||
     ((iVar1 <= uStack_8 && (*(uint *)(*(char *)0xe281 * 4 + param_1) <= uStack_a)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_2 = uVar2;
  iVar1 = *(int *)(*(char *)0xe281 * 4 + param_1 + 2);
  if ((iVar4 < iVar1) ||
     ((iVar4 <= iVar1 && (uStack_6 <= *(uint *)(*(char *)0xe281 * 4 + param_1))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}
