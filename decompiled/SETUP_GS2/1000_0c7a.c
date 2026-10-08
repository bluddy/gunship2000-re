/* SETUP.GS2 1000:0c7a undefined FUN_1000_0c7a(void) */
undefined2 __cdecl16far FUN_1000_0c7a(undefined2 ****param_1)

{
  undefined2 ***local_8;
  undefined2 ***pppuStack_6;
  int iStack_4;
  
  iStack_4 = 0x1000;
  pppuStack_6 = (undefined2 ***)0xc85;
  FUN_111d_02c6();
  if (((uint)param_1 & 4) != 0) {
    iStack_4 = 0;
    pppuStack_6 = param_1;
    local_8 = (undefined2 ****)0x0;
    FUN_1000_0c06(&local_8);
    if ((iStack_4 <= (int)local_8 >> 0xf) &&
       ((iStack_4 < (int)local_8 >> 0xf || (pppuStack_6 < local_8)))) {
      return 1;
    }
  }
  if (((uint)param_1 & 8) != 0) {
    iStack_4 = 0;
    pppuStack_6 = param_1;
    local_8 = &local_8;
    FUN_1000_0c06(0);
    if ((iStack_4 <= (int)local_8 >> 0xf) &&
       ((iStack_4 < (int)local_8 >> 0xf || (pppuStack_6 < local_8)))) {
      return 1;
    }
  }
  return 0;
}
