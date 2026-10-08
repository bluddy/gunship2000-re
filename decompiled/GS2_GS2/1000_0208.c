/* GS2.GS2 1000:0208 undefined FUN_1000_0208(void) */
void __cdecl16far
FUN_1000_0208(uint *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,int *param_6,
             int *param_7)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined2 unaff_DS;
  bool bVar8;
  uint local_4;
  
  local_4 = 0;
  if (*(int *)0x3108 != 0) {
    if (*(int *)0x3108 != 1) {
      return;
    }
    iVar7 = *(int *)0x3106;
    if ((*(char *)(iVar7 << 3) == '\0') && (iVar7 = iVar7 + 1, *(int *)0x310a == iVar7)) {
      *(int *)0x3106 = iVar7;
      *(undefined2 *)0x3104 = 0;
      FUN_12a2_0b99(0x3bac,0xffff);
      iVar7 = *(int *)0x3106;
    }
    pcVar6 = (char *)(iVar7 * 8);
    bVar2 = pcVar6[1];
    *param_1 = (uint)(bVar2 >> 4);
    *param_2 = *(uint *)(pcVar6 + 6);
    *param_3 = bVar2 & 0xf;
    *param_4 = (int)pcVar6[2];
    *param_5 = (int)pcVar6[3];
    *param_6 = (int)pcVar6[4];
    *param_7 = (int)pcVar6[5];
    *pcVar6 = *pcVar6 + -1;
    goto LAB_1000_036f;
  }
  uVar3 = *param_2;
  if (uVar3 == 0x2000) {
LAB_1000_025a:
    param_2 = &local_4;
  }
  else {
    if (0x2000 < uVar3) {
      if (((uVar3 != 0x2400) && (uVar3 != 0x2d00)) && (uVar3 != 0x2e00)) {
        bVar8 = uVar3 == 0x2f00;
        goto LAB_1000_0242;
      }
      goto LAB_1000_025a;
    }
    if (((uVar3 == 0xe08) || (uVar3 == 0x1400)) || (uVar3 == 0x1900)) goto LAB_1000_025a;
    bVar8 = uVar3 == 0x1c0d;
LAB_1000_0242:
    if (bVar8) goto LAB_1000_025a;
  }
  iVar4 = *(int *)0x3106;
  pcVar6 = (char *)(iVar4 * 8);
  pcVar1 = pcVar6;
  *pcVar1 = *pcVar1 + '\x01';
  if (((*pcVar1 != '\0') && ((byte)pcVar6[1] >> 4 == (byte)*param_1)) &&
     ((*(uint *)(pcVar6 + 6) == *param_2 &&
      (((((pcVar6[1] & 0xfU) == (byte)*param_3 && ((int)pcVar6[2] == *param_4)) &&
        ((int)pcVar6[3] == *param_5)) &&
       (((int)pcVar6[4] == *param_6 && (*(int *)0x3106 = iVar4, (int)pcVar6[5] == *param_7)))))))) {
    return;
  }
  *pcVar6 = *pcVar6 + -1;
  if (((iVar4 != 0) || (iVar7 = 0, *pcVar6 != '\0')) && (iVar7 = iVar4 + 1, *(int *)0x310a == iVar7)
     ) {
    *(undefined2 *)0x3108 = 2;
  }
  puVar5 = (undefined1 *)(iVar7 * 8);
  puVar5[1] = (byte)*param_1 << 4 ^ puVar5[1] & 0xf;
  *(uint *)(puVar5 + 6) = *param_2;
  puVar5[1] = puVar5[1] ^ (puVar5[1] ^ (byte)*param_3) & 0xf;
  puVar5[2] = (char)*param_4;
  puVar5[3] = (char)*param_5;
  puVar5[4] = (char)*param_6;
  puVar5[5] = (char)*param_7;
  *puVar5 = 1;
LAB_1000_036f:
  *(int *)0x3106 = iVar7;
  return;
}
