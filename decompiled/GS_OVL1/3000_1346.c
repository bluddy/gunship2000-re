/* GS.GS2 3000:1346 undefined FUN_3000_1346(void) */
void __cdecl16far
FUN_3000_1346(int param_1,char param_2,int param_3,undefined2 param_4,undefined1 param_5)

{
  undefined2 uVar1;
  
  func_0x00000eb0();
  func_0x0000c980(0xbf,3);
  if (param_1 < 0) {
    func_0x0000c928(0xc87,0x44);
  }
  else {
    func_0x0000c928(0xc87,0xf);
  }
  func_0x0000c8c0(0xc87,0x8a4,param_3,param_4,param_2 * 5 + 1,5,param_5);
  while (param_2 != '\0') {
    func_0x0000c9f6(0xc87,(char)(param_2 + -1) * 5 + param_3 + 1,param_4);
    uVar1 = func_0x000038b8(0xc87,param_1 % 10);
    func_0x0000ca66(0xbf,0x2d3c,uVar1);
    param_1 = param_1 / 10;
    param_2 = param_2 + -1;
  }
  return;
}
