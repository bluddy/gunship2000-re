/* GS.GS2 1c87:0578 undefined FUN_1c87_0578(void) */
void __cdecl16far FUN_1c87_0578(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_64 [82];
  int iStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  undefined1 *puStack_a;
  uint uStack_8;
  undefined1 *puStack_6;
  
  iVar4 = 0x10bf;
  puStack_6 = (undefined1 *)0xcdf3;
  FUN_10bf_02c0();
  if (param_1 == 0) {
    return;
  }
  *(undefined2 *)(*(int *)0x8560 + 0xc) = *(undefined2 *)0x856e;
  *(undefined2 *)(*(int *)0x8560 + 0x10) = *(undefined2 *)0x8570;
  do {
    if (*(char *)0x855e == '\0') {
      iVar2 = *(int *)0x8566;
    }
    else {
      iVar2 = 0x13f;
    }
    iStack_10 = (iVar2 - *(int *)0x8574) + 1;
    iVar3 = 0;
    iStack_c = 0;
    iVar2 = 0;
    iStack_e = 0;
    iStack_12 = 0;
    puStack_a = (undefined1 *)iVar4;
    while( true ) {
      bVar1 = *(byte *)(param_1 + iStack_c);
      uStack_8 = (uint)bVar1;
      iVar4 = CONCAT11((char)((uint)iVar3 >> 8),bVar1);
      if (bVar1 == 0) goto LAB_1c87_0660;
      if (bVar1 == 10) {
        iStack_e = 1;
        goto LAB_1c87_0660;
      }
      if ((bVar1 == 0x20) || (bVar1 == 0x2d)) {
        iVar4 = iStack_c + 1;
        iStack_12 = iVar4;
      }
      puStack_6 = (undefined1 *)CONCAT11((char)((uint)iVar4 >> 8),bVar1);
      uStack_8 = *(uint *)0x8570;
      iStack_c = -0x3185;
      iVar3 = thunk_EXT_FUN_0000_0000();
      puStack_a = (undefined1 *)0x2658;
      if (iStack_10 < iVar3 + iVar2) break;
      iVar2 = iVar2 + iVar3;
      iStack_c = iStack_c + 1;
    }
    if (*(char *)0x857e != '\0') {
      iStack_12 = iStack_c;
    }
    if (iStack_12 == 0) {
      if (*(int *)0x8562 == *(int *)0x8574) {
        iStack_12 = iStack_c;
      }
      else {
        iStack_c = 0;
      }
    }
    for (; *(char *)(param_1 + iStack_c) == ' '; iStack_c = iStack_c + 1) {
    }
LAB_1c87_0660:
    if ((((char)uStack_8 != '\0') && (iStack_e == 0)) && (0 < iStack_12)) {
      iStack_c = iStack_12;
    }
    puStack_6 = (undefined1 *)iStack_c;
    uStack_8 = param_1;
    iVar4 = 0x10bf;
    iStack_e = -0x3109;
    iStack_c = (int)puStack_a;
    puStack_a = local_64;
    FUN_10bf_2250();
    iVar3 = iStack_c;
    local_64[iStack_c] = 0;
    if (iVar3 != 0) {
      if (param_2 == 0) {
        puStack_6 = local_64;
        uStack_8 = *(int *)0x8576;
        puStack_a = (undefined1 *)*(int *)0x8574;
        iStack_c = *(int *)0x8560;
        iStack_e = 0x10bf;
        iVar4 = 0x2658;
        iStack_10 = -0x30af;
        thunk_EXT_FUN_0000_0000();
      }
      else {
        puStack_6 = local_64;
        uStack_8 = *(int *)0x8576;
        puStack_a = (undefined1 *)((*(int *)0x856a - iVar2) / 2 + *(int *)0x8562);
        iStack_c = *(int *)0x8560;
        iStack_e = 0x10bf;
        iVar4 = 0x2658;
        iStack_10 = -0x30d4;
        thunk_EXT_FUN_0000_0000();
        if (iStack_e == 0) {
          uStack_8 = 0;
        }
      }
    }
    if ((char)uStack_8 == '\0') {
      *(int *)0x8574 = *(int *)0x8574 + iVar2;
      return;
    }
    if (*(char *)0x857e != '\0') {
      *(undefined1 *)0x857e = 0;
      return;
    }
    uStack_8 = 0xcf78;
    puStack_6 = (undefined1 *)iVar4;
    FUN_1c87_04b2();
    if (iStack_e != 0) {
      iStack_c = iStack_c + 1;
    }
    param_1 = param_1 + iStack_c;
  } while( true );
}
