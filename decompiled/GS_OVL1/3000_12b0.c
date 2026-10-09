/* GS.GS2 3000:12b0 undefined FUN_3000_12b0(void) */
void __cdecl16far FUN_3000_12b0(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  *(undefined1 *)0xe292 = 0xd;
  func_0x0000c980(0xbf,3);
  func_0x0000c928(0xc87,*(undefined1 *)0xe292);
  func_0x0000c8c0(0xc87,0x8a4,4,0x94,0x94,6,0);
  func_0x0000c9f6(0xc87,5,0x94);
  func_0x0000ca66(0xc87,0x2d39,param_1,param_2);
  func_0x00016658(0xc87,0x8a4,4,0x94,0x94,6,0x880,4,0x94);
  FUN_3000_1008();
  uVar1 = uRam0000046e;
  *(undefined2 *)0xc4ec = uRam0000046c;
  *(undefined2 *)0xc4ee = uVar1;
  return;
}
