/* GS2.GS2 137f:36a6 undefined FUN_137f_36a6(void) */
void __cdecl16far FUN_137f_36a6(int param_1)

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
  puVar4 = (undefined1 *)(in_BX + -0x145);
  iVar5 = (*(uint *)(param_1 + 4) & 0x1fff) / 0x1c7 - 0x18;
  iVar2 = 0xb;
  do {
    iVar1 = 0xb;
    do {
      iVar3 = iVar1;
      FUN_137f_378f(iVar5,*puVar4,puVar4);
      puVar4 = (undefined1 *)(iVar3 + 1);
      iVar1 = iVar2 + -1;
    } while (iVar2 + -1 != 0);
    puVar4 = (undefined1 *)(iVar3 + 0x36);
    iVar5 = iVar5 + 0x12;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
