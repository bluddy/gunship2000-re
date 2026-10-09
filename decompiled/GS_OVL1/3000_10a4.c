/* GS.GS2 3000:10a4 undefined FUN_3000_10a4(void) */
void __cdecl16far FUN_3000_10a4(int *param_1,int *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  uVar1 = 0xbf;
  while( true ) {
    if (*param_2 == 0 && *param_1 == 0) break;
    func_0x0001afe8(uVar1,param_1,param_2,param_3,param_4);
    FUN_3000_1070();
    *(undefined2 *)(*(int *)0xc358 + 1) = *param_3;
    *(undefined2 *)(*(int *)0xc358 + 3) = *param_4;
    FUN_3000_10f2();
    uVar1 = 0x1abf;
  }
  return;
}
