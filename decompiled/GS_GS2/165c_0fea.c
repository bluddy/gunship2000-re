/* GS.GS2 165c:0fea undefined FUN_165c_0fea(void) */
void __cdecl16far FUN_165c_0fea(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int local_c;
  int iStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x165c;
  uStack_6 = 0x75b5;
  FUN_10bf_02c0();
  uVar1 = *param_1;
  uVar2 = uVar1 & 0xff;
  local_c = uVar2 * 0x2000 + 0x1000;
  iStack_a = (((((CONCAT11((char)param_1[1],(char)(uVar1 >> 8)) << 1 | (uint)((char)uVar1 < '\0'))
                 << 1 | (uint)((int)(uVar2 << 9) < 0)) << 1 | (uint)((int)(uVar2 << 10) < 0)) << 1 |
              (uint)((int)(uVar2 << 0xb) < 0)) << 1 | (uint)((int)(uVar2 << 0xc) < 0)) +
             (uint)(0xefff < uVar2 * 0x2000);
  piStack_4 = &local_c;
  uStack_6 = 0x10bf;
  uStack_8 = 0x7621;
  FUN_165c_1064();
  return;
}
