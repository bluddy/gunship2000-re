/* GS.GS2 3000:2c94 undefined FUN_3000_2c94(void) */
void __cdecl16far FUN_3000_2c94(undefined2 *param_1,int param_2)

{
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  if (*(int *)0xc01c != 0) {
    FUN_3000_6cfc();
  }
  if (*(int *)((int)param_1 + 0xd) == 2) {
    *(char *)0x2b98 = *(char *)0x2b98 + '\x01';
    FUN_3000_1206();
  }
  FUN_3000_2464(param_1 + 6,*param_1,param_1[1],0);
  *param_1 = 9999;
  *(int *)0xc01c = param_2 + 0xf;
  FUN_3000_2290(0);
  return;
}
