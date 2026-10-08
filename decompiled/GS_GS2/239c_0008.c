/* GS.GS2 239c:0008 undefined FUN_239c_0008(void) */
int __cdecl16far FUN_239c_0008(int param_1)

{
  ulong uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (param_1 < 2) {
    return 1;
  }
  if (*(char *)0x9538 == '\0') {
    FUN_239c_00d8();
  }
  iVar2 = FUN_10bf_2d30();
  uVar1 = (long)iVar2 * (long)param_1;
  iVar2 = CONCAT11(-((long)uVar1 < 0),(char)(uVar1 >> 0x18));
  return ((((((((uint)(uVar1 >> 8) >> 1 | (uint)((uVar1 & 0x1000000) != 0) << 0xf) >> 1 |
              (uint)((iVar2 >> 1 & 1U) != 0) << 0xf) >> 1 | (uint)((iVar2 >> 2 & 1U) != 0) << 0xf)
             >> 1 | (uint)((iVar2 >> 3 & 1U) != 0) << 0xf) >> 1 |
           (uint)((iVar2 >> 4 & 1U) != 0) << 0xf) >> 1 | (uint)((iVar2 >> 5 & 1U) != 0) << 0xf) >> 1
         | (uint)((iVar2 >> 6 & 1U) != 0) << 0xf) + 1;
}
