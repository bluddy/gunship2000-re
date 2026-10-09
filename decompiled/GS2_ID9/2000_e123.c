/* GS2.GS2 2000:e123 undefined FUN_2000_e123(void) */
undefined2 __cdecl16far FUN_2000_e123(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = param_1 * 0x100 + ((uint)(param_1 * 0x100) >> 2);
  out(0x3d4,CONCAT11((byte)(uVar2 >> 10),0xc));
  uVar1 = CONCAT11((char)(uVar2 >> 2),0xd);
  out(0x3d4,uVar1);
  return uVar1;
}
