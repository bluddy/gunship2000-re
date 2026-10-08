/* GS2.GS2 137f:370d undefined FUN_137f_370d(void) */
void __cdecl16far FUN_137f_370d(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_BX;
  undefined1 *puVar4;
  int iVar5;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  FUN_137f_2b6c();
  puVar4 = (undefined1 *)(in_BX + -0x82);
  iVar5 = ((uint)(*(int *)0x2ae6 - *(int *)0x2ae4) >> 1) + *(int *)0x2ae4 + -0x34 +
          (*(uint *)(param_1 + 4) & 0x1fff) / 0x1c7;
  iVar2 = 5;
  do {
    iVar1 = 5;
    do {
      iVar3 = iVar1;
      FUN_137f_378f(iVar5,*puVar4,puVar4);
      puVar4 = (undefined1 *)(iVar3 + 1);
      iVar1 = iVar2 + -1;
    } while (iVar2 + -1 != 0);
    puVar4 = (undefined1 *)(iVar3 + 0x3c);
    iVar5 = iVar5 + 0x12;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
