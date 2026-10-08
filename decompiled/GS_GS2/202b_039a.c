/* GS.GS2 202b:039a undefined FUN_202b_039a(void) */
int __cdecl16far FUN_202b_039a(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  FUN_10bf_02c0();
  iVar3 = 0;
  uStack_a = 0;
  uStack_6 = 0;
  uStack_8 = 0;
  iVar5 = 0x10bf;
  while( true ) {
    cVar2 = *(char *)(uStack_a + param_2);
    if (cVar2 == '\0') break;
    uStack_8 = param_1;
    iVar4 = thunk_EXT_FUN_0000_0000();
    iVar1 = CONCAT11((char)((uint)iVar3 >> 8),cVar2) + iVar4;
    iVar3 = iVar4;
    uStack_6 = iVar1;
    if (cVar2 == '\n') {
      uStack_6 = 0;
      iVar3 = iVar1;
      uStack_8 = iVar1;
    }
    uStack_a = iVar5 + 1;
    iVar5 = 0x2658;
  }
  if (uStack_8 < uStack_6) {
    uStack_8 = uStack_6;
  }
  return uStack_8;
}
