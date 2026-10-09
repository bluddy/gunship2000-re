/* GS.GS2 3000:1c60 undefined FUN_3000_1c60(void) */
void __cdecl16far FUN_3000_1c60(undefined2 param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iStack_e;
  int iStack_c;
  int iStack_8;
  
  func_0x00000eb0();
  uVar3 = (undefined2)((ulong)param_4 >> 0x10);
  cVar1 = *param_4;
  cVar2 = ((char *)param_4)[2];
  param_4._0_2_ = (char *)param_4 + 4;
  iStack_8 = param_3 * 0x140 + param_2;
  for (iStack_c = 0; iStack_c < cVar2; iStack_c = iStack_c + 1) {
    for (iStack_e = 0; iStack_e < cVar1; iStack_e = iStack_e + 1) {
      *(char *)(iStack_8 + iStack_e) = ((char *)param_4)[iStack_e];
    }
    iStack_8 = iStack_8 + 0x140;
    param_4._0_2_ = (char *)param_4 + cVar1;
  }
  return;
}
