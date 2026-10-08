/* GS2.GS2 17e0:0128 undefined FUN_17e0_0128(void) */
uint __cdecl16far FUN_17e0_0128(char *param_1,uint param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  uVar4 = 0;
  if ((param_2 & 4) != 0) {
    DAT_17e0_000c = 1;
    while( true ) {
      uVar2 = DAT_17e0_0008;
      pcVar1 = param_1;
      param_1 = param_1 + 1;
      if (*pcVar1 == '\0') break;
      DAT_17e0_0012 = DAT_17e0_0011;
      DAT_17e0_0011 = *pcVar1;
      uVar3 = FUN_17e0_0061();
      if (uVar3 == 0) {
        uVar3 = (uint)*(byte *)(ulong)((byte)(DAT_17e0_0012 - *(char *)0x1) + 5);
      }
      uVar4 = uVar4 + uVar3;
    }
    return uVar4 + *(byte *)(ulong)((byte)(DAT_17e0_0011 - *(char *)0x1) + 5);
  }
  if ((param_2 & 2) == 0) {
    if (*param_1 != '\0') {
      uVar4 = (uint)*(byte *)0x3;
    }
    return uVar4;
  }
  while( true ) {
    pcVar1 = param_1;
    param_1 = param_1 + 1;
    if (*pcVar1 == '\0') break;
    uVar4 = uVar4 + *(byte *)(ulong)((byte)(*pcVar1 - *(char *)0x1) + 5);
  }
  return uVar4;
}
