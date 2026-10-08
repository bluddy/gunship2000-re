/* GS.GS2 165c:1064 undefined FUN_165c_1064(void) */
void __cdecl16far FUN_165c_1064(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(int *)0xb8dc == 0) {
    uVar1 = FUN_1dea_1048(9);
    *(undefined2 *)0xb8d4 = uVar1;
    *(undefined2 *)0xb8d6 = in_DX;
  }
  else {
    uVar1 = FUN_1dea_1012(*(undefined2 *)0xb8d4,*(undefined2 *)0xb8d6,(*(int *)0xb8dc + 1) * 9);
    *(undefined2 *)0xb8d4 = uVar1;
    *(undefined2 *)0xb8d6 = in_DX;
  }
  puVar2 = (undefined2 *)(*(int *)0xb8dc * 9 + *(int *)0xb8d4);
  *(int *)0xb8dc = *(int *)0xb8dc + 1;
  *(undefined2 *)CONCAT22(in_DX,puVar2) = *param_1;
  puVar2[1] = param_1[1];
  puVar2[2] = param_1[2];
  puVar2[3] = param_1[3];
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 4);
  return;
}
