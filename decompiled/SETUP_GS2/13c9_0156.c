/* SETUP.GS2 13c9:0156 undefined FUN_13c9_0156(void) */
void __cdecl16far FUN_13c9_0156(byte *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_58 [74];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  uint uVar5;
  
  uVar4 = 0x111d;
  puStack_6 = (undefined1 *)0x3df1;
  FUN_111d_02c6();
  for (uVar5 = 0; (int)uVar5 < (int)(uint)param_1[3]; uVar5 = uVar5 + 1) {
    iVar3 = uVar5 * 0x11 + *(int *)(param_1 + 9);
    cVar1 = *(char *)(iVar3 + 4);
    iVar3 = *(int *)(iVar3 + 2);
    uStack_c = uVar4;
    if (iVar3 == 0) {
      if (cVar1 == '\0') {
        puStack_6 = (undefined1 *)0x935;
      }
      else {
        iVar3 = uVar5 * 0x11 + *(int *)(param_1 + 9);
        puStack_6 = (undefined1 *)
                    *(undefined2 *)(*(int *)(*(int *)(iVar3 + 9) + 9) + *(int *)(iVar3 + 5) * 0x11);
      }
      puStack_8 = (undefined1 *)*(undefined2 *)(*(int *)(param_1 + 9) + uVar5 * 0x11);
      puStack_a = local_58;
      uStack_e = 0x3eb2;
      FUN_111d_1a3e();
    }
    else if (iVar3 == 2) {
      if (cVar1 == '\0') {
        puStack_6 = (undefined1 *)0x934;
      }
      else {
        iVar3 = uVar5 * 0x11 + *(int *)(param_1 + 9);
        puStack_6 = (undefined1 *)*(undefined2 *)(*(int *)(iVar3 + 5) * 2 + *(int *)(iVar3 + 0xb));
      }
      puStack_8 = (undefined1 *)*(undefined2 *)(*(int *)(param_1 + 9) + uVar5 * 0x11);
      puStack_a = local_58;
      uStack_e = 0x3e66;
      FUN_111d_1a3e();
    }
    else {
      puStack_6 = (undefined1 *)*(undefined2 *)(*(int *)(param_1 + 9) + uVar5 * 0x11);
      puStack_8 = local_58;
      uStack_c = 0x3ed1;
      puStack_a = (undefined1 *)uVar4;
      FUN_111d_1736();
    }
    puStack_6 = local_58;
    puStack_8 = (undefined1 *)0x111d;
    puStack_a = (undefined1 *)0x3eed;
    iVar3 = FUN_111d_1768();
    if (iVar3 < (int)(uint)param_1[2]) {
      puStack_6 = (undefined1 *)((uint)param_1[2] - iVar3);
      puStack_8 = (undefined1 *)0x20;
      puStack_a = local_58 + iVar3;
      uStack_c = 0x111d;
      uStack_e = 0x3f14;
      FUN_111d_1c8e();
    }
    local_58[param_1[2]] = 0;
    puStack_6 = (undefined1 *)(param_1[1] + uVar5);
    puStack_8 = (undefined1 *)(uint)*param_1;
    puStack_a = (undefined1 *)0x111d;
    uStack_c = 0x3f35;
    FUN_130f_037e();
    if (puStack_6 == (undefined1 *)0x0) {
      bVar2 = param_1[7];
    }
    else if (param_1[8] == uVar5) {
      bVar2 = param_1[6];
    }
    else {
      bVar2 = param_1[5];
    }
    puStack_6 = (undefined1 *)(uint)bVar2;
    puStack_8 = (undefined1 *)0x130f;
    puStack_a = (undefined1 *)0x3f66;
    FUN_130f_000e();
    puStack_6 = local_58;
    puStack_8 = (undefined1 *)0x130f;
    uVar4 = 0x130f;
    puStack_a = (undefined1 *)0x3f72;
    FUN_130f_048a();
  }
  return;
}
