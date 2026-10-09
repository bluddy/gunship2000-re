/* GS.GS2 2000:d9b6 undefined FUN_2000_d9b6(void) */
void __cdecl16far FUN_2000_d9b6(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  
  func_0x00000eb0();
  if (*(char *)0x988e == '\0') {
    FUN_2000_da32(param_2,param_1,0x24ee,0x24ea);
  }
  else {
    FUN_2000_da32(param_2,param_1,0x2400,0x240a);
  }
  iVar1 = func_0x000012cc(0xbf,param_1,0x24f5);
  if (iVar1 != 0) {
    uVar2 = 0;
    func_0x000030da(0xbf,iVar1,2,0,0);
    func_0x00001418(0xbf,param_2,0x15,1,uVar2);
    func_0x000011e6(0xbf,uVar2);
  }
  return;
}
