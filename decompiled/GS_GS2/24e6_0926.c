/* GS.GS2 24e6:0926 undefined FUN_24e6_0926(void) */
void __cdecl16far FUN_24e6_0926(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  puVar3 = (undefined2 *)FUN_106f_0430(param_1);
  puVar5 = (undefined2 *)0x954c;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  *(int *)0xb60b = (int)*(char *)0x956c + (*(int *)0x9552 + -1) / 2 + *(int *)0x954e;
  *(int *)0xb60d = (int)*(char *)0x956d + (*(int *)0x9554 + -1) / 2 + *(int *)0x9550;
  return;
}
