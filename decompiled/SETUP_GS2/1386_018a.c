/* SETUP.GS2 1386:018a undefined FUN_1386_018a(void) */
void __cdecl16far FUN_1386_018a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  uint uVar4;
  
  FUN_111d_02c6();
  FUN_130f_000e(*(undefined1 *)(param_1 + 1));
  FUN_130f_037e(*(undefined1 *)(param_1 + 3),*(undefined1 *)(param_1 + 4));
  FUN_130f_0020(*(undefined1 *)(param_1 + 7),*(undefined1 *)(param_1 + 8));
  if (param_2 != 0) {
    FUN_130f_000e(7);
    if (*(byte *)(param_1 + 8) < 0x18) {
      FUN_130f_037e(*(byte *)(param_1 + 3) + 2,*(byte *)(param_1 + 8) + 1);
      FUN_130f_00d2(*(undefined1 *)(param_1 + 7),*(byte *)(param_1 + 8) + 1);
    }
    if (*(byte *)(param_1 + 7) < 0x4f) {
      if (*(char *)(param_1 + 7) == 'N') {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      iVar2 = *(byte *)(param_1 + 4) + 1;
      FUN_130f_037e(*(byte *)(param_1 + 7) + 1,iVar2,iVar1);
      FUN_130f_00d2((uint)*(byte *)(param_1 + 7) + iVar1,(uint)*(byte *)(param_1 + 8) + iVar2);
    }
    FUN_130f_000e(*(undefined1 *)(param_1 + 1));
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_130f_037e(*(byte *)(param_1 + 3) + 1,*(undefined1 *)(param_1 + 4));
    FUN_130f_0510((int)*(char *)0x130f);
    FUN_130f_059e((int)*(char *)0x3b32,*(byte *)(param_1 + 5) - 4);
    FUN_130f_0510((int)*(char *)0x3b2f);
    uVar4 = (uint)*(byte *)(param_1 + 4);
    while ((int)(uVar4 + 1) < (int)(uint)*(byte *)(param_1 + 8)) {
      FUN_130f_037e(*(byte *)(param_1 + 3) + 1,uVar4 + 1);
      uVar3 = 0x130f;
      FUN_130f_0510((int)*(char *)0x1314);
      FUN_130f_037e(*(byte *)(param_1 + 7) - 1,uVar3);
      uVar4 = 0x130f;
      FUN_130f_0510((int)*(char *)0x1314);
    }
    FUN_130f_037e(*(byte *)(param_1 + 3) + 1,*(undefined1 *)(param_1 + 8));
    FUN_130f_0510((int)*(char *)0x1311);
    FUN_130f_059e((int)*(char *)0x3be4,*(byte *)(param_1 + 5) - 4);
    FUN_130f_0510((int)*(char *)0x1312);
  }
  return;
}
