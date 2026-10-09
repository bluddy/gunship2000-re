/* GS.GS2 2000:ecb4 undefined FUN_2000_ecb4(void) */
int __cdecl16far FUN_2000_ecb4(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *local_8;
  undefined2 *puStack_6;
  int iVar5;
  
  puStack_6 = (undefined2 *)0xecbf;
  func_0x00000eb0();
  iVar3 = 2;
  *(undefined2 *)0xc024 = 0;
  if ((*(int *)0xb8ce == 0) && (*(int *)0xb8d0 == 3)) {
    iVar3 = 0;
  }
  else {
    iVar5 = 0;
    while( true ) {
      iVar2 = iVar5 * 0x27 + *(int *)0xb860;
      if ((*(int *)(iVar2 + 0x19) == 1) && ((*(byte *)(iVar2 + 0x24) & 0x20) != 0)) break;
      iVar5 = iVar5 + 1;
    }
    iVar2 = *(int *)0xc024 * 8;
    *(int *)(iVar2 + -0x3c6c) = iVar5;
    uVar1 = *(undefined2 *)0xa25e;
    *(int *)(iVar2 + -0x3c72) = *(int *)0xa25c + 0x1b;
    *(undefined2 *)(iVar2 + -0x3c70) = uVar1;
    *(int *)0xc024 = *(int *)0xc024 + 1;
    iVar5 = 0;
    while( true ) {
      iVar2 = iVar5 * 0x27 + *(int *)0xb860;
      if ((*(int *)(iVar2 + 0x19) == 2) && ((*(byte *)(iVar2 + 0x24) & 0x20) != 0)) break;
      iVar5 = iVar5 + 1;
    }
    iVar2 = *(int *)0xc024 * 8;
    *(int *)(iVar2 + -0x3c6c) = iVar5;
    uVar1 = *(undefined2 *)0xa25e;
    *(int *)(iVar2 + -0x3c72) = *(int *)0xa25c + 0x35;
    *(undefined2 *)(iVar2 + -0x3c70) = uVar1;
    *(int *)0xc024 = *(int *)0xc024 + 1;
  }
  iVar5 = 0;
  while (*(int *)((int)*(undefined4 *)0xb860 + iVar5 * 0x27 + 0x19) != 0) {
    iVar5 = iVar5 + 1;
  }
  iVar2 = *(int *)0xc024 * 8;
  *(int *)(iVar2 + -0x3c6c) = iVar5;
  uVar1 = *(undefined2 *)0x97e;
  *(undefined2 *)(iVar2 + -0x3c72) = *(undefined2 *)0x97c;
  *(undefined2 *)(iVar2 + -0x3c70) = uVar1;
  *(int *)0xc024 = *(int *)0xc024 + 1;
  for (iVar5 = 0; iVar5 < *(int *)0xb8c8; iVar5 = iVar5 + 1) {
    iVar2 = iVar5 * 0x27 + *(int *)0xb860;
    if ((*(int *)(iVar2 + 0x19) == 0) && ((*(byte *)(iVar2 + 0x25) & 0x80) == 0)) {
      iVar2 = *(int *)0xc024 * 8;
      *(int *)(iVar2 + -0x3c6c) = iVar5;
      uVar1 = *(undefined2 *)0xa25e;
      *(int *)(iVar2 + -0x3c72) = *(int *)0xa25c + 1;
      *(undefined2 *)(iVar2 + -0x3c70) = uVar1;
      *(int *)0xc024 = *(int *)0xc024 + 1;
    }
  }
  for (iVar5 = 0; iVar5 < *(int *)0xc024; iVar5 = iVar5 + 1) {
    puStack_6 = (undefined2 *)0x0;
    while (*(uint *)((int)*(undefined4 *)0xb860 + *(int *)(iVar5 * 8 + -0x3c6c) * 0x27 + 0x19) !=
           (uint)*(byte *)((int)puStack_6 * 8 + (int)*(undefined4 *)0xb85c)) {
      puStack_6 = (undefined2 *)((int)puStack_6 + 1);
    }
    *(int *)(iVar5 * 8 + -0x3c6e) = (int)puStack_6;
  }
  *(undefined2 *)(iVar3 * 8 + -0x3c6e) = 0xffff;
  param_2 = param_2 + ((*(int *)0xc024 + 1) / 2) * 8;
  *(undefined1 *)0xe291 = 0xff;
  *(undefined1 *)0x2a45 = 0;
  puStack_6 = (undefined2 *)0x2a3d;
  local_8 = (undefined2 *)0xbf;
  func_0x000214fc();
  *(undefined1 *)0xe291 = 0;
  puStack_6 = &param_2;
  local_8 = &param_1;
  func_0x00024370(0x20f4);
  puStack_6 = (undefined2 *)*(undefined2 *)0x9da;
  local_8 = (undefined2 *)*(undefined2 *)0x9d8;
  func_0x000212b0(0x20f4);
  puStack_6 = (undefined2 *)0xffff;
  local_8 = (undefined2 *)0xc8;
  func_0x0000c8c0(0x20f4,0x880,0,0,0x140);
  puStack_6 = (undefined2 *)0xa;
  local_8 = (undefined2 *)0xc87;
  func_0x0000c928();
  puStack_6 = (undefined2 *)0xffff;
  local_8 = &param_2;
  puVar4 = (undefined1 *)&param_1;
  iVar3 = func_0x00025248(0xc87,&local_8);
  if (iVar3 == 0) {
    return iVar3;
  }
  iVar5 = (char)local_8 * 8;
  iVar3 = *(int *)0xc018;
  *(undefined2 *)(iVar3 * 0xb + -0x4362) = *(undefined2 *)(iVar5 + -0x3c6c);
  puStack_6 = (undefined2 *)*(undefined2 *)(iVar5 + -0x3c6e);
  *(undefined2 *)(iVar3 * 0xb + -0x4360) = puStack_6;
  if ((undefined1 *)(int)(char)local_8 != puVar4) {
    local_8 = (undefined2 *)0x20f4;
    iVar3 = func_0x00027b8c();
    if (iVar3 != 0) {
      puStack_6 = (undefined2 *)0xffff;
      local_8 = (undefined2 *)*(int *)((char)local_8 * 8 + -0x3c6e);
      iVar3 = func_0x000224c4(0x20f4);
      if (iVar3 != 0) goto LAB_2000_ef52;
    }
    return 0;
  }
LAB_2000_ef52:
  if ((*(int *)0xb8ce == 0) && (*(int *)0xb8d0 == 3)) {
    local_8._0_1_ = 2;
  }
  *(undefined1 *)0xe28c = (char)local_8;
  puStack_6 = (undefined2 *)0x20f4;
  local_8 = (undefined2 *)0xef6e;
  FUN_2000_da46();
  return -1;
}
