/* GS.GS2 2627:0084 undefined FUN_2627_0084(void) */
void __cdecl16far FUN_2627_0084(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  char acStack_59 [77];
  undefined2 uStack_c;
  undefined2 uStack_a;
  char *pcStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0x62ff;
  FUN_10bf_02c0();
  pcStack_6 = (char *)param_2;
  pcStack_8 = acStack_59 + 1;
  uStack_a = 0x10bf;
  uStack_c = 0x630b;
  FUN_2627_0000();
  pcStack_6 = acStack_59 + 1;
  pcStack_8 = (char *)0x10bf;
  uStack_a = 0x6317;
  iVar2 = FUN_10bf_2234();
  do {
    iVar1 = iVar2;
    if (iVar1 + -1 < 0) break;
    iVar2 = iVar1 + -1;
  } while (acStack_59[iVar1] != ' ');
  pcStack_6 = acStack_59 + iVar1 + 1;
  pcStack_8 = (char *)param_1;
  uStack_a = 0x10bf;
  uStack_c = 0x6345;
  FUN_10bf_21d6();
  return;
}
