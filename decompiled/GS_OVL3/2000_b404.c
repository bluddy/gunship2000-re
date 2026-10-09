/* GS.GS2 2000:b404 undefined FUN_2000_b404(void) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_2000_b404(int param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 local_32 [34];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  int iVar4;
  
  puStack_6 = (undefined1 *)0xb40f;
  func_0x00000eb0();
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    param_4 = param_4 - (uint)(*(char *)(iVar4 + param_1) != '\0') * (int)*(char *)(iVar4 + 0x1a82);
  }
  iVar1 = param_4 / 2 + -2;
  puStack_6 = (undefined1 *)0x2;
  puStack_8 = (undefined1 *)0xbf;
  puStack_a = (undefined1 *)0xb450;
  func_0x0000c928();
  uStack_e = 0xc87;
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    uVar3 = uStack_e;
    if (*(char *)(iVar4 + param_1) != '\0') {
      puStack_6 = param_3;
      puStack_8 = param_2 + iVar1;
      uStack_c = 0;
      uVar3 = 0x106a;
      uStack_10 = 0xb490;
      puStack_a = (undefined1 *)iVar4;
      func_0x0001077a();
      if (1 < (int)puStack_8) {
        puStack_6 = puStack_8;
        puStack_8 = (undefined1 *)0x50f2;
        puStack_a = local_32;
        uStack_c = 0x106a;
        uStack_e = 0xb4a8;
        func_0x000032d0();
        puStack_6 = param_3 + 0xf;
        puStack_8 = local_32;
        puStack_a = (undefined1 *)0xbf;
        uStack_c = 0xb4bb;
        iVar2 = func_0x0000cd58();
        puStack_8 = param_2 + -(iVar2 - (int)puStack_6) / 2 + iVar1;
        puStack_a = (undefined1 *)0xc87;
        uStack_c = 0xb4d4;
        func_0x0000c9f6();
        puStack_6 = local_32;
        puStack_8 = (undefined1 *)0xc87;
        uVar3 = 0xc87;
        puStack_a = (undefined1 *)0xb4e0;
        func_0x0000ca50();
      }
      param_2 = param_2 + (int)(puStack_6 + 1);
    }
    uStack_e = uVar3;
  }
  return;
}
