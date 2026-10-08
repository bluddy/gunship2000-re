/* GS.GS2 1dea:0730 undefined FUN_1dea_0730(void) */
void __cdecl16far FUN_1dea_0730(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  undefined2 uVar7;
  uint uVar8;
  uint local_a;
  
  FUN_10bf_02c0();
  uVar8 = (uint)(*(char *)0xad1b == '\0');
  local_a = 0xe5ed;
  FUN_1dea_085a();
  local_a = 0x10bf;
  FUN_1dea_0896();
  local_a = 0xe5fb;
  FUN_27d1_0f0a();
  if (uVar8 == 0) {
    if ((*(char *)0x8612 == '\0') || ((*(char *)0x861c == '\0' && (*(char *)0x8610 != '\0')))) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    local_a = *(byte *)0xbb9c & 8;
    uVar3 = FUN_1b1d_01ec();
    FUN_1dea_0c4c(uVar7,(int)*(char *)0x861b,uVar3);
  }
  else {
    local_a = 0;
    FUN_1dea_0c4c((int)*(char *)0x8612,(int)*(char *)0x861b,0);
  }
  puVar6 = (undefined2 *)0xb4aa;
  puVar5 = (undefined2 *)(*(char *)0xe281 * 0x122 + -0x5222);
  for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  if (*(char *)0xad1b == '\x04') {
    local_a = 0xe682;
    FUN_1b1d_02de();
  }
  local_a = 0xe687;
  FUN_1c6b_0116();
  local_a = 0x85a;
  iVar4 = FUN_10bf_06dc();
  if (iVar4 != 0) {
    local_a = 0;
    FUN_10bf_24ea(iVar4,1);
    local_a = 1;
    FUN_10bf_0828(&local_a,1);
    local_a = 1;
    FUN_10bf_0828(&local_a,2);
    local_a = 0x10bf;
    FUN_10bf_05f6();
  }
  return;
}
