/* GS2.GS2 1851:05b3 undefined FUN_1851_05b3(void) */
void __cdecl16near FUN_1851_05b3(void)

{
  undefined2 *puVar1;
  int in_AX;
  int iVar2;
  int in_DX;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  
  if (in_AX != in_DX) {
    uVar3 = in_DX - in_AX;
    do {
      uVar4 = 0x1000;
      if (uVar3 < 0x1000) {
        uVar4 = uVar3;
      }
      puVar5 = (undefined2 *)0x0;
      for (iVar2 = uVar4 << 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = 0;
      }
      in_AX = in_AX + uVar4;
      uVar3 = uVar3 - uVar4;
    } while (uVar3 != 0);
  }
  return;
}
