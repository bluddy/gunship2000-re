/* GS.GS2 10bf:4bb8 undefined FUN_10bf_4bb8(void) */
void __cdecl16far FUN_10bf_4bb8(void)

{
  int iVar1;
  byte bVar2;
  undefined2 *in_BX;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x6ea8;
  puVar3 = (undefined2 *)(iVar1 + 0xc);
  *puVar3 = *in_BX;
  *(undefined2 *)(iVar1 + 0xe) = in_BX[1];
  *(undefined2 *)(iVar1 + 0x10) = in_BX[2];
  *(undefined2 *)(iVar1 + 0x12) = in_BX[3];
  if (puVar3 != (undefined2 *)0x6e94) {
    *(undefined2 *)0x6ea8 = puVar3;
    *(undefined1 *)(iVar1 + 10) = 7;
    *(undefined2 *)(iVar1 + 8) = puVar3;
    return;
  }
  *(undefined2 *)0x70a4 = 0x3031;
  bVar2 = 0x8a;
  if (*(int *)0x6d28 != 0) {
    bVar2 = (*(code *)*(undefined2 *)0x6d26)(0x10bf);
  }
  if (bVar2 == 0x8c) {
    *(undefined2 *)0x70a4 = 0x3231;
  }
  *(uint *)0x70a6 = (uint)bVar2;
  FUN_10bf_0298();
  FUN_10bf_2d58();
  FUN_10bf_0543(0xfd);
  FUN_10bf_0543(*(int *)0x70a6 + -0x1c);
  FUN_10bf_01d5(*(undefined2 *)0x70a6);
  return;
}
