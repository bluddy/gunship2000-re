/* GS.GS2 3000:2f9c undefined FUN_3000_2f9c(void) */
void __cdecl16far FUN_3000_2f9c(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  if (*(int *)0xc01c != 0) {
    FUN_3000_6cfc();
  }
  FUN_3000_126e(*(undefined2 *)0x980,*(undefined2 *)0x982,0xc6,param_2 + 0xc,0x78,0xf);
  if (param_1[1] != -1) {
    FUN_3000_24c4(param_1[1],0);
    FUN_3000_1206();
  }
  FUN_3000_2464(param_1 + 5,param_1[3],param_1[4],0);
  puVar5 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
  puVar4 = param_1;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  param_1[3] = 9999;
  iVar3 = func_0x000038b8(0xbf,param_2 != 0);
  *(int *)0xc01c = iVar3 + 0xb;
  FUN_3000_2290(0);
  FUN_3000_19cc();
  return;
}
