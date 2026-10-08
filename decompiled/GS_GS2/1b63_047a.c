/* GS.GS2 1b63:047a undefined FUN_1b63_047a(void) */
void __cdecl16far FUN_1b63_047a(int param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_28;
  undefined2 local_26;
  int iStack_24;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  
  FUN_10bf_02c0();
  iStack_28 = 0;
  while( true ) {
    if (*(int *)0x8206 <= iStack_28) {
      return;
    }
    if (*(char *)(iStack_28 * 0xe + (int)*(undefined4 *)0x8208) == param_1) break;
    iStack_28 = iStack_28 + 1;
  }
  iStack_a = 0x10bf;
  iStack_c = 0xbaed;
  puVar3 = (undefined2 *)FUN_106f_0430();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = iStack_24 + param_3;
  iStack_c = param_1;
  uStack_e = 0x106f;
  uStack_10 = 0xbb11;
  FUN_1b63_03ea();
  return;
}
