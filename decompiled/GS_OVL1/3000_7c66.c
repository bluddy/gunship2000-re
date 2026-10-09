/* GS.GS2 3000:7c66 undefined FUN_3000_7c66(void) */
void __cdecl16far FUN_3000_7c66(int param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  func_0x00000eb0();
  if (*(int *)0xb8dc == 0) {
    uVar5 = func_0x0000eee8(0xbf,9);
    *(undefined2 *)(param_1 + 8) = (int)uVar5;
    *(undefined2 *)(param_1 + 10) = (int)((ulong)uVar5 >> 0x10);
  }
  else {
    uVar5 = func_0x0000eeb2(0xbf,*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 10),
                            (*(int *)(param_1 + 4) + 1) * 9);
    *(undefined2 *)(param_1 + 8) = (int)uVar5;
    *(undefined2 *)(param_1 + 10) = (int)((ulong)uVar5 >> 0x10);
  }
  puVar4 = (undefined2 *)(*(int *)(param_1 + 4) * 9 + *(int *)(param_1 + 8));
  uVar1 = *(undefined2 *)(param_1 + 10);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  puVar2 = (undefined2 *)*(undefined2 *)0xb8d4;
  uVar3 = *(undefined2 *)0xb8d6;
  *(undefined2 *)CONCAT22(uVar1,puVar4) = *puVar2;
  puVar4[1] = puVar2[1];
  puVar4[2] = puVar2[2];
  puVar4[3] = puVar2[3];
  *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar2 + 4);
  return;
}
