/* GS.GS2 10bf:22b6 undefined FUN_10bf_22b6(void) */
void __cdecl16far FUN_10bf_22b6(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  while ((*(byte *)(*param_1 + 0x6a97) & 8) != 0) {
    param_1 = param_1 + 1;
  }
  uVar1 = FUN_10bf_2234(param_1,0,0);
  iVar2 = FUN_10bf_522b(param_1,uVar1);
  *(undefined2 *)0x9e58 = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)0x9e5a = *(undefined2 *)(iVar2 + 10);
  *(undefined2 *)0x9e5c = *(undefined2 *)(iVar2 + 0xc);
  *(undefined2 *)0x9e5e = *(undefined2 *)(iVar2 + 0xe);
  return;
}
