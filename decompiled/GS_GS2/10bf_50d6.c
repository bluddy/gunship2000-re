/* GS.GS2 10bf:50d6 undefined FUN_10bf_50d6(void) */
void __cdecl16far FUN_10bf_50d6(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  puVar4 = (undefined2 *)(*(int *)0x6ea8 + -0xe);
  iVar2 = 5;
  puVar3 = (undefined2 *)(*(int *)0x6ea8 + -2);
  do {
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar3;
    UNLOCK();
    *puVar3 = uVar1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0);
  return;
}
