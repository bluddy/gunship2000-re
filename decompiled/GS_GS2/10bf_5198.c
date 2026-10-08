/* GS.GS2 10bf:5198 undefined FUN_10bf_5198(void) */
void __cdecl16near FUN_10bf_5198(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x70a4 = 0x3430;
  bVar1 = 0x84;
  if (*(int *)0x6d28 != 0) {
    bVar1 = (*(code *)*(undefined2 *)0x6d26)(0x10bf);
  }
  if (bVar1 == 0x8c) {
    *(undefined2 *)0x70a4 = 0x3231;
  }
  *(uint *)0x70a6 = (uint)bVar1;
  FUN_10bf_0298();
  FUN_10bf_2d58();
  FUN_10bf_0543(0xfd);
  FUN_10bf_0543(*(int *)0x70a6 + -0x1c);
  FUN_10bf_01d5(*(undefined2 *)0x70a6);
  return;
}
