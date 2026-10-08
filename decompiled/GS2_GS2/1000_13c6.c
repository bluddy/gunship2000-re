/* GS2.GS2 1000:13c6 undefined FUN_1000_13c6(void) */
undefined2 __cdecl16far FUN_1000_13c6(int param_1,char *param_2,uint *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_14 [5];
  int iStack_a;
  uint uStack_8;
  int iStack_6;
  int iStack_4;
  
  iStack_a = 0;
  while( true ) {
    if (*param_2 == '\0') {
      (param_2 + 1)[0] = '\0';
      (param_2 + 1)[1] = '\0';
      goto LAB_1000_14dc;
    }
    *param_2 = *param_2 + -1;
    puVar1 = (uint *)(param_2 + 9);
    puVar8 = local_14;
    puVar7 = puVar1;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    FUN_137f_0c6c(puVar1);
    uVar4 = *(uint *)(param_2 + 0xf);
    uVar6 = param_3[3];
    uVar4 = ((((*(uint *)(param_2 + 0xd) >> 1 | (uint)((uVar4 & 1) != 0) << 0xf) >> 1 |
              (uint)(((int)uVar4 >> 1 & 1U) != 0) << 0xf) >> 1 |
             (uint)(((int)uVar4 >> 2 & 1U) != 0) << 0xf) >> 1 |
            (uint)(((int)uVar4 >> 3 & 1U) != 0) << 0xf) -
            ((((param_3[2] >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
              (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
             (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
            (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf);
    uVar6 = (int)uVar4 >> 0xf;
    iStack_4 = (uVar4 ^ uVar6) - uVar6;
    uVar4 = *(uint *)(param_2 + 0xb);
    uVar6 = param_3[1];
    uVar4 = ((((*puVar1 >> 1 | (uint)((uVar4 & 1) != 0) << 0xf) >> 1 |
              (uint)(((int)uVar4 >> 1 & 1U) != 0) << 0xf) >> 1 |
             (uint)(((int)uVar4 >> 2 & 1U) != 0) << 0xf) >> 1 |
            (uint)(((int)uVar4 >> 3 & 1U) != 0) << 0xf) -
            ((((*param_3 >> 1 | (uint)((uVar6 & 1) != 0) << 0xf) >> 1 |
              (uint)(((int)uVar6 >> 1 & 1U) != 0) << 0xf) >> 1 |
             (uint)(((int)uVar6 >> 2 & 1U) != 0) << 0xf) >> 1 |
            (uint)(((int)uVar6 >> 3 & 1U) != 0) << 0xf);
    uVar6 = (int)uVar4 >> 0xf;
    iStack_6 = (uVar4 ^ uVar6) - uVar6;
    if (iStack_6 < iStack_4) {
      uStack_8 = (iStack_6 >> 1) + iStack_4;
    }
    else {
      uStack_8 = (iStack_4 >> 1) + iStack_6;
    }
    if (0x1000 < uStack_8) break;
    if (uStack_8 < (*(int *)0x46 >> 3) + 8U) {
      *param_2 = '\0';
      (param_2 + 1)[0] = '\x01';
      (param_2 + 1)[1] = '\0';
      param_1 = param_1 * 0xe;
      *(byte *)(param_1 + 0x642) = *(byte *)(param_1 + 0x642) & 0xfa | 2;
      *(byte *)(param_1 + 0x642) = *(char *)0x593c << 3 ^ 2;
      *(undefined1 *)(param_1 + 0x643) = *param_4;
      *(undefined2 *)(param_1 + 0x646) = *(undefined2 *)(param_4 + 10);
      uVar4 = param_3[1];
      *(uint *)(param_1 + 0x648) = *param_3;
      *(uint *)(param_1 + 0x64a) = uVar4;
      uVar4 = param_3[3];
      *(uint *)(param_1 + 0x64c) = param_3[2];
      *(uint *)(param_1 + 0x64e) = uVar4;
      return 1;
    }
    iVar5 = FUN_137f_3289(param_2 + 9,local_14);
    if (*(int *)(param_2 + 0x11) < iVar5) break;
    iStack_a = iStack_a + 1;
    if (7 < iStack_a) {
      return 0xffff;
    }
  }
  *param_2 = '\0';
  (param_2 + 1)[0] = '\0';
  (param_2 + 1)[1] = '\0';
LAB_1000_14dc:
  if ((*(byte *)(param_1 * 0xe + 0x642) & 7) == 2) {
    *(byte *)(param_1 * 0xe + 0x642) = *(byte *)(param_1 * 0xe + 0x642) & 0xf9 | 1;
  }
  return 0;
}
