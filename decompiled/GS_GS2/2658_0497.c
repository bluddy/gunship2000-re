/* GS.GS2 2658:0497 undefined FUN_2658_0497(void) */
void __cdecl16far FUN_2658_0497(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  
  puVar5 = (undefined2 *)0x32;
  iVar6 = (*(uint *)0x2e & 0xff) * 7 + 0x43;
  iVar4 = *(int *)0x30;
  uVar1 = *(undefined2 *)0x28;
  do {
    puVar3 = (undefined2 *)(iVar6 + 5);
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *(undefined2 *)(iVar6 + 3) = *puVar2;
    iVar6 = iVar6 + 7;
    *puVar3 = uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}
