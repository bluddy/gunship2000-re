/* GS2.GS2 2000:e6c0 undefined FUN_2000_e6c0(void) */
undefined2 __cdecl16far FUN_2000_e6c0(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  out(0x3d4,CONCAT11((char)((uint)*(undefined2 *)0x18ca >> 8) * '\x10' +
                     (char)((uint)(param_1 * 0x28) >> 8),0xc));
  uVar1 = CONCAT11((char)(param_1 * 0x28),0xd);
  out(0x3d4,uVar1);
  return uVar1;
}
