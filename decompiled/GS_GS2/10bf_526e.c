/* GS.GS2 10bf:526e undefined FUN_10bf_526e(void) */
undefined2 __cdecl16far
FUN_10bf_526e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint in_BX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  *(undefined2 *)0x70c4 = param_1;
  *(undefined2 *)0x70c6 = param_2;
  *(undefined2 *)0x70c8 = param_3;
  *(undefined2 *)0x70ca = param_4;
  uVar6 = FUN_10bf_4431(&stack0xfffe);
  puVar5 = (undefined1 *)0x70cc;
  puVar4 = (undefined1 *)0x70c5;
  for (iVar3 = (int)*(char *)0x70c4; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  *(uint *)0x70bc = in_BX & 0xff;
  *(undefined2 *)0x70be = (int)((ulong)uVar6 >> 0x10);
  *(undefined2 *)0x70c0 = (int)uVar6;
  *(undefined2 *)0x70c2 = 0x70cc;
  return 0x70bc;
}
