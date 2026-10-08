/* GS.GS2 10bf:29ca undefined FUN_10bf_29ca(void) */
undefined2 __cdecl16far FUN_10bf_29ca(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined4 uVar7;
  
  uVar6 = *(undefined2 *)(param_1 + 2);
  uVar5 = *(undefined2 *)(param_1 + 4);
  uVar1 = *(undefined2 *)(param_1 + 8);
  uVar2 = *(undefined2 *)(param_1 + 10);
  pcVar3 = (code *)swi(0x21);
  uVar7 = (*pcVar3)();
  uVar4 = (undefined2)uVar7;
  *param_2 = uVar4;
  param_2[1] = uVar6;
  param_2[2] = uVar5;
  param_2[3] = (int)((ulong)uVar7 >> 0x10);
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  if ((bool)in_CF) {
    FUN_10bf_05c2();
    uVar4 = *param_2;
  }
  param_2[6] = (uint)(byte)in_CF;
  return uVar4;
}
