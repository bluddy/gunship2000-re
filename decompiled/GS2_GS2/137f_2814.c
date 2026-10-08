/* GS2.GS2 137f:2814 undefined FUN_137f_2814(void) */
int __cdecl16far FUN_137f_2814(uint param_1,uint param_2)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar6;
  int iVar7;
  byte bVar5;
  
  uVar6 = 0;
  if ((int)param_2 < 0) {
    uVar6 = 8;
    param_2 = -param_2;
  }
  if ((int)param_1 < 0) {
    uVar6 = (uint)(byte)((char)uVar6 + 4);
    param_1 = -param_1;
  }
  uVar3 = param_2;
  if (param_2 < param_1) {
    uVar6 = (uint)(byte)((char)uVar6 + 2);
    uVar3 = param_1;
    param_1 = param_2;
  }
  if ((param_1 < uVar3) && (uVar3 != 0)) {
    uVar1 = ((ulong)param_1 << 0x10) / (ulong)uVar3;
    uVar4 = *(undefined2 *)(uVar6 + 0x802);
    cVar2 = (char)uVar1;
    iVar7 = (((((uint)(byte)(uVar1 >> 8) << 1 | (uint)(cVar2 < '\0')) << 1 |
              (uint)((char)(cVar2 << 1) < '\0')) << 1 | (uint)((char)(cVar2 << 2) < '\0')) << 1 |
            (uint)((char)(cVar2 << 3) < '\0')) << 1;
  }
  else {
    uVar4 = *(undefined2 *)(uVar6 + 0x802);
    iVar7 = 0x1ffe;
  }
  bVar5 = (byte)((uint)uVar4 >> 8);
  if (-1 < (char)uVar4) {
    return (uint)bVar5 * 0x100 + *(int *)(iVar7 + 0x812);
  }
  return (uint)bVar5 * 0x100 - *(int *)(iVar7 + 0x812);
}
