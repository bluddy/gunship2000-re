/* GS.GS2 165c:0418 undefined FUN_165c_0418(void) */
byte __cdecl16far FUN_165c_0418(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  uVar1 = *(byte *)(param_1 + param_2 * -0x40 + 0xfc0) & 0x3f;
  if (param_3 != 0) {
    return *(byte *)(uVar1 + (int)*(undefined4 *)0xb854) & 0x10;
  }
  return *(byte *)((int)*(undefined4 *)0xb854 + uVar1) & 0x20;
}
