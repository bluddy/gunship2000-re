/* GS.GS2 10bf:5592 undefined FUN_10bf_5592(void) */
void __cdecl16far FUN_10bf_5592(int param_1,undefined2 *param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  if (param_1 != 0) {
    puVar1 = (undefined2 *)FUN_10bf_22b6(param_3);
    uVar3 = (undefined2)((ulong)param_2 >> 0x10);
    puVar2 = (undefined2 *)param_2;
    *param_2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    return;
  }
  FUN_10bf_22b6(param_3);
  FUN_10bf_4bb8();
  FUN_10bf_4d0b();
  return;
}
