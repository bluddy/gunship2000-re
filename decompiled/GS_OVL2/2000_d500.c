/* GS.GS2 2000:d500 undefined FUN_2000_d500(void) */
void __cdecl16far FUN_2000_d500(int param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  *(undefined2 *)0x9ba6 = param_2;
  *(int *)0x98fc = param_1;
  puVar5 = (undefined2 *)0x9a54;
  puVar4 = (undefined2 *)(param_1 * 0x24 + -0x4518);
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = (undefined2 *)0x9a78;
  puVar4 = (undefined2 *)(param_1 * 0x29 + -0x45e6);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  FUN_2000_d596();
  FUN_2000_dbfa();
  func_0x000112dc(0xbf,*(undefined2 *)0x9ba4);
  if (*(int *)0xc51c != 0) {
    func_0x000112dc(0x112a,*(undefined2 *)0xc51c);
  }
  if (*(int *)0xc522 != 0) {
    func_0x000112dc(0x112a,*(undefined2 *)0xc522);
  }
  func_0x0000d2f0(0x112a);
  puVar4 = (undefined2 *)(*(int *)0x98fc * 0x24 + -0x4518);
  puVar5 = (undefined2 *)0x9a54;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
