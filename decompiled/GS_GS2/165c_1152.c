/* GS.GS2 165c:1152 undefined FUN_165c_1152(void) */
void __cdecl16far FUN_165c_1152(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int iVar3;
  uint local_6;
  uint local_4;
  
  local_4 = 0x165c;
  uVar2 = 0x10bf;
  local_6 = 0x771d;
  FUN_10bf_02c0();
  for (iVar3 = 0; iVar3 < 100; iVar3 = iVar3 + 1) {
    local_4 = 0x34;
    local_6 = uVar2;
    FUN_239c_0086();
    local_4 = 0x34;
    local_6 = 0x239c;
    uVar2 = 0x239c;
    iVar3 = FUN_239c_0086();
    iVar3 = iVar3 + 6;
    if (param_1 == 0) break;
    local_4 = 0x20;
    local_6 = 0;
    iVar1 = FUN_165c_0b44(0x20);
    if (iVar1 != 0) break;
  }
  if (param_1 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = 0x20;
  }
  local_6 = 0;
  FUN_165c_0a7a(&local_4,&local_6);
  if (param_1 == 0) {
    local_4 = 0;
    local_6 = 0xacb2;
    FUN_165c_05d4(0,0xacb2,0xadd8);
    return;
  }
  uVar2 = local_4 & 0xff;
  *(int *)0xacb2 = uVar2 * 0x2000 + 0x1000;
  *(int *)0xacb4 =
       ((((((int)(char)(local_4 >> 8) << 1 | (uint)((char)local_4 < '\0')) << 1 |
          (uint)((int)(uVar2 << 9) < 0)) << 1 | (uint)((int)(uVar2 << 10) < 0)) << 1 |
        (uint)((int)(uVar2 << 0xb) < 0)) << 1 | (uint)((int)(uVar2 << 0xc) < 0)) +
       (uint)(0xefff < uVar2 * 0x2000);
  uVar2 = local_6 & 0xff;
  *(int *)0xadd8 = uVar2 * 0x2000 + 0x1000;
  *(int *)0xadda =
       ((((((int)(char)(local_6 >> 8) << 1 | (uint)((char)local_6 < '\0')) << 1 |
          (uint)((int)(uVar2 << 9) < 0)) << 1 | (uint)((int)(uVar2 << 10) < 0)) << 1 |
        (uint)((int)(uVar2 << 0xb) < 0)) << 1 | (uint)((int)(uVar2 << 0xc) < 0)) +
       (uint)(0xefff < uVar2 * 0x2000);
  return;
}
