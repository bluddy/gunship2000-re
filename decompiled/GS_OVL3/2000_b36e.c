/* GS.GS2 2000:b36e undefined FUN_2000_b36e(void) */
char * __cdecl16far FUN_2000_b36e(char *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  func_0x00000eb0();
  *param_1 = '\0';
  for (iVar2 = 0; iVar2 < *(char *)0x9bc6; iVar2 = iVar2 + 1) {
    if (*(char *)(iVar2 + -0x643e) == param_2) {
      if (*param_1 != '\0') {
        func_0x00002d86(0xbf,param_1,0x50df);
      }
      if (*(char *)(iVar2 + -0x6438) == '\0') {
        if (param_3 == 0) {
          uVar1 = 0x50e8;
        }
        else {
          uVar1 = 0x50e2;
        }
        func_0x00002d86(0xbf,param_1,uVar1);
      }
      else {
        func_0x00002d86(0xbf,param_1,
                        *(undefined2 *)(*(char *)(iVar2 + -0x6438) * 2 + *(int *)0x1a8c));
      }
    }
  }
  return param_1;
}
